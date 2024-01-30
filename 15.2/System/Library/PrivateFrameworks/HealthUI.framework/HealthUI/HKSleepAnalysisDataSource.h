@interface HKSleepAnalysisDataSource : HKHealthQueryChartCacheDataSource

@property (copy, nonatomic) id /* block */ userInfoCreationBlock;

- (id /* block */)_mappingFunctionForConsistencyChartWithContext:(id)a0;
- (id)queryDescription;
- (id /* block */)_mappingFunctionForDurationChartWithContext:(id)a0;
- (void).cxx_destruct;
- (id)queriesForStartDate:(id)a0 endDate:(id)a1 statisticsInterval:(id)a2 completionHandler:(id /* block */)a3;
- (id /* block */)mappingFunctionForContext:(id)a0;

@end
