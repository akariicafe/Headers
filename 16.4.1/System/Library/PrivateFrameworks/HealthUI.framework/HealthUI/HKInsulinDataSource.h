@interface HKInsulinDataSource : HKHealthQueryChartCacheDataSource

@property (copy, nonatomic) id /* block */ userInfoCreationBlock;

- (void).cxx_destruct;
- (id)queryDescription;
- (id)chartPointsFromQueryData:(id)a0 dataIsFromRemoteSource:(BOOL)a1;
- (id)queriesForStartDate:(id)a0 endDate:(id)a1 statisticsInterval:(id)a2 completionHandler:(id /* block */)a3;
- (id /* block */)queryDataForStartDate:(id)a0 endDate:(id)a1 statisticsInterval:(id)a2 healthStore:(id)a3 completionHandler:(id /* block */)a4;
- (BOOL)supportsChartQueryDataGeneration;
- (id)_chartPointsWithBasalInsulinValues:(id)a0 withTotalInsulinValues:(id)a1 filterInterval:(id)a2 sourceTimeZone:(id)a3;
- (id)_dailyAverageInsulinValuesFromStatistics:(id)a0 queryStartDate:(id)a1 statisticsInterval:(id)a2;
- (id)_insulinDataSourceQueryDataFromBasalStatisticsCollection:(id)a0 totalStatisticsCollection:(id)a1 queryStartDate:(id)a2 statisticsInterval:(id)a3;
- (id)_insulinValuesFromStatistics:(id)a0;

@end
