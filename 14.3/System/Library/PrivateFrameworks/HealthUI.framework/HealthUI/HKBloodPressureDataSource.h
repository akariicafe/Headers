@interface HKBloodPressureDataSource : HKHealthQueryChartCacheDataSource

@property (copy, nonatomic) id /* block */ userInfoCreationBlock;

- (void).cxx_destruct;
- (id)queryDescription;
- (id)queriesForStartDate:(id)a0 endDate:(id)a1 statisticsInterval:(id)a2 completionHandler:(id /* block */)a3;
- (void)_callCompletionWithSystolicResults:(id)a0 diastolicResults:(id)a1 statisticsOptions:(unsigned long long)a2 blockStart:(id)a3 blockEnd:(id)a4 completion:(id /* block */)a5;

@end
