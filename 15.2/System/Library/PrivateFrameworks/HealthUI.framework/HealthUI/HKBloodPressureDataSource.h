@interface HKBloodPressureDataSource : HKHealthQueryChartCacheDataSource

@property (copy, nonatomic) id /* block */ userInfoCreationBlock;

- (id)queryDescription;
- (id /* block */)queryDataForStartDate:(id)a0 endDate:(id)a1 statisticsInterval:(id)a2 healthStore:(id)a3 completionHandler:(id /* block */)a4;
- (void).cxx_destruct;
- (BOOL)supportsChartQueryDataGeneration;
- (id)queriesForStartDate:(id)a0 endDate:(id)a1 statisticsInterval:(id)a2 completionHandler:(id /* block */)a3;
- (unsigned long long)queryStatisticsOption;
- (id)_chartPointsWithSystolicResults:(id)a0 diastolicResults:(id)a1 blockStart:(id)a2 blockEnd:(id)a3 sourceTimeZone:(id)a4;
- (id)chartPointsFromQueryData:(id)a0 dataIsFromRemoteSource:(BOOL)a1;

@end
