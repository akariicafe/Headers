@class NSPredicate, HKSampleType;

@interface HKTimePeriodSeriesDataSource : HKHealthQueryChartCacheDataSource

@property (retain, nonatomic) HKSampleType *sampleType;
@property (retain, nonatomic) NSPredicate *queryPredicate;
@property (copy, nonatomic) id /* block */ userInfoCreationBlock;

- (void).cxx_destruct;
- (id)queryDescription;
- (id)chartPointsFromQueryData:(id)a0 dataIsFromRemoteSource:(BOOL)a1;
- (id)queriesForStartDate:(id)a0 endDate:(id)a1 statisticsInterval:(id)a2 completionHandler:(id /* block */)a3;
- (id /* block */)queryDataForStartDate:(id)a0 endDate:(id)a1 statisticsInterval:(id)a2 healthStore:(id)a3 completionHandler:(id /* block */)a4;
- (BOOL)supportsChartQueryDataGeneration;
- (id)_codableDataWithSamples:(id)a0 blockStart:(id)a1 blockEnd:(id)a2 intervalComponents:(id)a3;
- (id)_calculateTotalDurationFromSamples:(id)a0 startDate:(id)a1 endDate:(id)a2 interval:(id)a3 intervalOut:(id *)a4 intervalCountsOut:(id *)a5;
- (id)_chartPointsWithStatisticsInterval:(id)a0 dateIntervalsToTotals:(id)a1 intervalCounts:(id)a2 sourceTimeZone:(id)a3;
- (id)_codableTimePeriodDataWithDictionary:(id)a0;
- (id /* block */)_startOfDayTransform;

@end
