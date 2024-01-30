@interface PowerUIPredictorHelper : NSObject

+ (double)meanOf:(id)a0;
+ (double)meanEventDuration:(id)a0;
+ (double)medianTimeBetweenDescendingEvents:(id)a0;
+ (id)timeBetweenUsesForSortedDescendingByAgeEvents:(id)a0 forHourBin:(unsigned long long)a1 atDate:(id)a2 addAtDate:(BOOL)a3;
+ (double)medianOf:(id)a0;
+ (double)standardDeviationOf:(id)a0;
+ (id)getUsageBucketsForEvents:(id)a0 forDate:(id)a1 withLog:(id)a2;
+ (double)hoursUntilUseFromBucketedUsage:(id)a0 withCurrentHour:(int)a1 withComponentsMinutes:(long long)a2;
+ (double)getHourBinID:(id)a0 forHourBin:(unsigned long long)a1;
+ (id)filterEventsSortedByStartDateAscending:(id)a0 startsBefore:(id)a1 dynamicallyAroundDate:(id)a2 withHourBinWidth:(unsigned long long)a3;
+ (id)filterEvents:(id)a0 startOnSameWeekdayAs:(id)a1;
+ (id)getDurationsFromEvents:(id)a0 withUnit:(double)a1 cappedAt:(double)a2;
+ (id)events:(id)a0 forHourBin:(unsigned long long)a1 date:(id)a2 withMaxDuration:(double)a3;

@end
