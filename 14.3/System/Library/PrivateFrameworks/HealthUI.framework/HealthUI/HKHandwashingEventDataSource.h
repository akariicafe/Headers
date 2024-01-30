@interface HKHandwashingEventDataSource : HKHealthQueryChartCacheDataSource

@property (copy, nonatomic) id /* block */ userInfoCreationBlock;
@property (nonatomic) long long timeScope;

+ (double)durationForCompleteSample;

- (void).cxx_destruct;
- (id)queryDescription;
- (id)initWithDisplayType:(id)a0 healthStore:(id)a1 timeScope:(long long)a2;
- (id)queriesForStartDate:(id)a0 endDate:(id)a1 statisticsInterval:(id)a2 completionHandler:(id /* block */)a3;
- (void)_handleSamples:(id)a0 startDate:(id)a1 endDate:(id)a2 statisticsInterval:(id)a3 completion:(id /* block */)a4;
- (id)chartPointsForSamples:(id)a0 startDate:(id)a1 endDate:(id)a2 statisticsInterval:(id)a3;
- (id)_dailyAverageChartPointForObjects:(id)a0 startDate:(id)a1 endDate:(id)a2 averageInterval:(unsigned long long)a3;
- (id)_averageDurationChartPointForObjects:(id)a0 startDate:(id)a1 endDate:(id)a2;
- (double)durationForObject:(id)a0;
- (BOOL)doesDurationMeetGoal:(double)a0;

@end
