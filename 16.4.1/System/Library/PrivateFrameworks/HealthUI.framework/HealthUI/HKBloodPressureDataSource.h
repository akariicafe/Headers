@interface HKBloodPressureDataSource : HKHealthQueryChartCacheDataSource

@property (copy, nonatomic) id /* block */ userInfoCreationBlock;

- (void).cxx_destruct;
- (id)queryDescription;
- (id)chartPointsFromQueryData:(id)a0 dataIsFromRemoteSource:(BOOL)a1;
- (id)queriesForStartDate:(id)a0 endDate:(id)a1 statisticsInterval:(id)a2 completionHandler:(id /* block */)a3;
- (id /* block */)queryDataForStartDate:(id)a0 endDate:(id)a1 statisticsInterval:(id)a2 healthStore:(id)a3 completionHandler:(id /* block */)a4;
- (BOOL)supportsChartQueryDataGeneration;
- (id)_chartPointsWithSystolicResults:(id)a0 diastolicResults:(id)a1 blockStart:(id)a2 blockEnd:(id)a3 sourceTimeZone:(id)a4;
- (id)_earliestDateForSystolicResults:(id)a0 diastolicResults:(id)a1;
- (id)_latestDateForSystolicResults:(id)a0 diastolicResults:(id)a1;
- (unsigned long long)queryStatisticsOption;

@end
