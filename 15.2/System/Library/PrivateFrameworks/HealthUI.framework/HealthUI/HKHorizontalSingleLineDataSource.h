@class HKSampleType;

@interface HKHorizontalSingleLineDataSource : HKHealthQueryChartCacheDataSource

@property (retain, nonatomic) HKSampleType *sampleType;
@property (copy, nonatomic) id /* block */ userInfoCreationBlock;

- (id)queryDescription;
- (id)_chartPointsWithSamples:(id)a0 blockStart:(id)a1 blockEnd:(id)a2 sourceTimeZone:(id)a3;
- (id /* block */)queryDataForStartDate:(id)a0 endDate:(id)a1 statisticsInterval:(id)a2 healthStore:(id)a3 completionHandler:(id /* block */)a4;
- (void).cxx_destruct;
- (void)applyMarkStyleToPoint:(id)a0 sample:(id)a1;
- (BOOL)supportsChartQueryDataGeneration;
- (id)queriesForStartDate:(id)a0 endDate:(id)a1 statisticsInterval:(id)a2 completionHandler:(id /* block */)a3;
- (id)chartPointsFromQueryData:(id)a0 dataIsFromRemoteSource:(BOOL)a1;

@end
