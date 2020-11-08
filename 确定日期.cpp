#include <stdio.h>

int main(void){
  int month, day, year,n,m;

  printf("Enter date (mm/dd/yy): ");
  scanf("%d /%d /%d", &month, &day, &year);
  printf("Dated this %d", day);
  switch (day) {
    case 1: case 21: case 31:
      printf("st"); break;
    case 2: case 22:
      printf("nd"); break;
    case 3: case 23:
      printf("rd"); break;
    default: printf("th"); break;
  }
  printf(" day of ");
  switch (month) {
    case 1:  printf("January");   break;
    case 2:  printf("February");  break;
    case 3:  printf("March");     break;
    case 4:  printf("April");     break;
    case 5:  printf("May");       break;
    case 6:  printf("June");      break;
    case 7:  printf("July");      break;
    case 8:  printf("August");    break;
    case 9:  printf("September"); break;
    case 10: printf("October");   break;
    case 11: printf("November");  break;
    case 12: printf("December");  break;
  }
  printf(", 20%.2d.", year);
  //↑↑↑↑年月日判断↑↑↑↑// 
  //↓↓↓↓星期  判断↓↓↓↓// 
  if ((year%4==0&&year%100!=0)||(year%400==0)){
  	n=year*365+(year/4)+day-1;//闰年
  	switch (month) {
  		case 1:  n=n; break;
  		case 2:  n=n+31; break;
  		case 3:  n=n+31+28; break;
  		case 4:  n=n+31+28+31; break;
  		case 5:  n=n+31+28+31+30; break;
  		case 6:  n=n+31+28+31+30+31; break;
  		case 7:  n=n+31+28+31+30+31+30; break;
  		case 8:  n=n+31+28+31+30+31+30+31; break;
  		case 9:  n=n+31+28+31+30+31+30+31+31; break;
  		case 10: n=n+31+28+31+30+31+30+31+31+30; break;
  		case 11: n=n+31+28+31+30+31+30+31+31+30+31; break;
  		case 12: n=n+31+28+31+30+31+30+31+31+30+31+30; break;
		}}
  else
    n=year*365+(year/4+1)+day-1;
    switch (month) {
    case 1:  n=n; break;
    case 2:  n=n+31; break;
    case 3:  n=n+31+28; break;
    case 4:  n=n+31+28+31; break;
    case 5:  n=n+31+28+31+30; break;
    case 6:  n=n+31+28+31+30+31; break;
    case 7:  n=n+31+28+31+30+31+30; break;
    case 8:  n=n+31+28+31+30+31+30+31; break;
    case 9:  n=n+31+28+31+30+31+30+31+31; break;
    case 10: n=n+31+28+31+30+31+30+31+31+30; break;
    case 11: n=n+31+28+31+30+31+30+31+31+30+31; break;
    case 12: n=n+31+28+31+30+31+30+31+31+30+31+30; break;
}
  
  m=n%7;
  switch (m) {
    case 0:  printf("And that day is Sunday.\n"); break;
    case 1:  printf("And that day is Monday.\n"); break;
    case 2:  printf("And that day is Tuesday.\n"); break;
    case 3:  printf("And that day is Wednesday.\n"); break;
    case 4:  printf("And that day is Thursday.\n"); break;
    case 5:  printf("And that day is Friday.\n"); break;
    case 6:  printf("And that day is Saturday.\n"); break;
}
  return 0;
}


