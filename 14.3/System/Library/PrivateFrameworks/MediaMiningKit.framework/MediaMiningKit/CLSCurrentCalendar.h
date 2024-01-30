@interface CLSCurrentCalendar : CLSAutoupdatingCurrentCalendar

+ (void)initialize;
+ (void)update;
+ (BOOL)isWeekendDate:(id)a0;
+ (id)calendar;
+ (BOOL)dateIntervalIntersectsWeekend:(id)a0;
+ (BOOL)rangeOfWeekendLocalStartDate:(out id *)a0 interval:(out double *)a1 containingDate:(id)a2;
+ (BOOL)closestWeekendLocalStartDate:(out id *)a0 interval:(out double *)a1 afterDate:(id)a2;
+ (BOOL)nextWeekendLocalStartDate:(out id *)a0 interval:(out double *)a1 options:(unsigned long long)a2 afterDate:(id)a3;

@end
