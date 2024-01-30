@class NSArray, NSDate;

@interface HKSleepStagePeriodsAggregator : NSObject

@property (readonly, nonatomic) NSArray *sleepDaySummaries;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) double maximumDuration;
@property (readonly, nonatomic) NSArray *buckets;

+ (id)_averageStartDateFromSleepDaySummaries:(id)a0 summaryDateInterval:(id)a1;
+ (double)_maximumDurationFromSleepDaySummaries:(id)a0;

- (void).cxx_destruct;
- (id)_aggregateSleepInterval;
- (id)_aggregateSleepPeriodSegments;
- (long long)_bucketIndexForDistanceFromStart:(double)a0;
- (id)aggregateSleepPeriods;
- (id)initWithSleepDaySummaries:(id)a0 bucketSize:(double)a1 summaryDateInterval:(id)a2;

@end
