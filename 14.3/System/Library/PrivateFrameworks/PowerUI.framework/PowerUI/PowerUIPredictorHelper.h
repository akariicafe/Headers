@interface PowerUIPredictorHelper : NSObject

+ (double)getHourBinID:(id)a0 forHourBin:(unsigned long long)a1;
+ (double)meanOf:(id)a0;
+ (id)timeBetweenUsesForSortedDescendingByAgeEvents:(id)a0 forHourBin:(unsigned long long)a1 atDate:(id)a2 addAtDate:(BOOL)a3;
+ (double)medianOf:(id)a0;
+ (double)standardDeviationOf:(id)a0;
+ (id)getUsageBucketsForEvents:(id)a0 forDate:(id)a1 withLog:(id)a2;
+ (double)hoursUntilUseFromBucketedUsage:(id)a0 withCurrentHour:(int)a1 withComponentsMinutes:(long long)a2;
+ (id)events:(id)a0 forHourBin:(unsigned long long)a1 date:(id)a2 withMaxDuration:(double)a3;
+ (id)timeBetweenUsesForSortedDescendingByAgeEvents:(id)a0 forHourBin:(unsigned long long)a1 aroundDate:(id)a2;

@end
