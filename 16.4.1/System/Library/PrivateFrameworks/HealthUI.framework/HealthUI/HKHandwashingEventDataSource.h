@interface HKHandwashingEventDataSource : HKHealthQueryChartCacheDataSource

@property (copy, nonatomic) id /* block */ userInfoCreationBlock;
@property (nonatomic) long long timeScope;

+ (double)durationForCompleteSample;

- (void).cxx_destruct;
- (id)queryDescription;
- (id)chartPointsFromQueryData:(id)a0 dataIsFromRemoteSource:(BOOL)a1;
- (id)queriesForStartDate:(id)a0 endDate:(id)a1 statisticsInterval:(id)a2 completionHandler:(id /* block */)a3;
- (id /* block */)queryDataForStartDate:(id)a0 endDate:(id)a1 statisticsInterval:(id)a2 healthStore:(id)a3 completionHandler:(id /* block */)a4;
- (BOOL)supportsChartQueryDataGeneration;
- (id)_averageDurationChartModelForObjects:(id)a0 startDate:(id)a1 endDate:(id)a2;
- (id)_dailyAverageChartModelForObjects:(id)a0 startDate:(id)a1 endDate:(id)a2;
- (id)chartModelsForSamples:(id)a0 startDate:(id)a1 endDate:(id)a2 statisticsInterval:(id)a3;
- (id)chartPointsForSamples:(id)a0 startDate:(id)a1 endDate:(id)a2 statisticsInterval:(id)a3;
- (BOOL)doesDurationMeetGoal:(double)a0;
- (double)durationForObject:(id)a0;
- (id)initWithDisplayType:(id)a0 healthStore:(id)a1 timeScope:(long long)a2;

@end
