@interface HKInsulinDataSource : HKHealthQueryChartCacheDataSource

@property (copy, nonatomic) id /* block */ userInfoCreationBlock;

- (id)_dailyAverageInsulinValuesFromStatistics:(id)a0 queryStartDate:(id)a1 statisticsInterval:(id)a2;
- (id)queryDescription;
- (id)_chartPointsWithBasalInsulinValues:(id)a0 withTotalInsulinValues:(id)a1 filterInterval:(id)a2 sourceTimeZone:(id)a3;
- (id)_insulinValuesFromStatistics:(id)a0;
- (id /* block */)queryDataForStartDate:(id)a0 endDate:(id)a1 statisticsInterval:(id)a2 healthStore:(id)a3 completionHandler:(id /* block */)a4;
- (void).cxx_destruct;
- (BOOL)supportsChartQueryDataGeneration;
- (id)queriesForStartDate:(id)a0 endDate:(id)a1 statisticsInterval:(id)a2 completionHandler:(id /* block */)a3;
- (id)chartPointsFromQueryData:(id)a0 dataIsFromRemoteSource:(BOOL)a1;
- (id)_insulinDataSourceQueryDataFromBasalStatisticsCollection:(id)a0 totalStatisticsCollection:(id)a1 queryStartDate:(id)a2 statisticsInterval:(id)a3;

@end
