@interface PLFileStats : NSObject

+ (long long)fileSizeAtPath:(id)a0;
+ (id)cpuTimeForProcess:(id)a0;
+ (id)logEndDate;
+ (id)logEndDateFromTable:(id)a0;
+ (id)logStartDate;
+ (id)logStartDateFromTable:(id)a0;
+ (id)select:(id)a0 from:(id)a1 where:(id)a2;
+ (id)statsForFile:(id)a0;
+ (id)tableCounts;
+ (double)totalLogDuration;
+ (double)totalLogDurationFromTable:(id)a0 where:(id)a1;

@end
