@interface ATXTimeUtil : NSObject

+ (BOOL)time:(id)a0 isBetweenStartTime:(id)a1 andEndTime:(id)a2;
+ (id)nextStartOfDayAfter:(id)a0 timeZone:(id)a1;
+ (id)todayWithTimeZone:(id)a0;
+ (id)yesterdayWithTimeZone:(id)a0;
+ (id)getDayFromTime:(id)a0 timeZone:(id)a1;
+ (id)getTimeFromDate:(id)a0;

@end
