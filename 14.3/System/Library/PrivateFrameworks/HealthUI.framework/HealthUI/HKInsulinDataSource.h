@interface HKInsulinDataSource : HKHealthQueryChartCacheDataSource

@property (copy, nonatomic) id /* block */ userInfoCreationBlock;

- (void).cxx_destruct;
- (id)queryDescription;
- (id)queriesForStartDate:(id)a0 endDate:(id)a1 statisticsInterval:(id)a2 completionHandler:(id /* block */)a3;
- (id)_combineBasalStatistics:(id)a0 withTotalStatistics:(id)a1 filterInterval:(id)a2;

@end
