@interface CUIKApplicationIconUtilities : NSObject

+ (BOOL)_isWithinPreviousWeek:(id)a0 calendar:(id)a1;
+ (id)dateFormatterWithCalendar:(id)a0;
+ (BOOL)_isWithinNextWeek:(id)a0 calendar:(id)a1;
+ (BOOL)_isDate:(id)a0 withinPreviousWeekOfDate:(id)a1 calendar:(id)a2;
+ (BOOL)_isDate:(id)a0 withinNextWeekOfDate:(id)a1 calendar:(id)a2;
+ (long long)iconDateNameFormatTypeForDateBasedOnDistanceFromNow:(id)a0 calendar:(id)a1;

@end
