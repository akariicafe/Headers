@interface PLFileStats : NSObject

+ (long long)fileSizeAtPath:(id)a0;
+ (id)logStartDate;
+ (id)logEndDate;
+ (id)tableCounts;
+ (id)select:(id)a0 from:(id)a1 where:(id)a2;
+ (double)totalLogDuration;
+ (id)cpuTimeForProcess:(id)a0;
+ (id)logStartDateFromTable:(id)a0;
+ (id)logEndDateFromTable:(id)a0;
+ (id)statsForFile:(id)a0;
+ (double)totalLogDurationFromTable:(id)a0 where:(id)a1;

@end
