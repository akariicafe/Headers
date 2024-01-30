@interface HKSleepAnalysisDataSource : HKHealthQueryChartCacheDataSource

@property (copy, nonatomic) id /* block */ userInfoCreationBlock;

- (void).cxx_destruct;
- (id)queryDescription;
- (id /* block */)_mappingFunctionForDurationChartWithContext:(id)a0;
- (id /* block */)_mappingFunctionForConsistencyChartWithContext:(id)a0;
- (id)queriesForStartDate:(id)a0 endDate:(id)a1 statisticsInterval:(id)a2 completionHandler:(id /* block */)a3;
- (id /* block */)mappingFunctionForContext:(id)a0;

@end
