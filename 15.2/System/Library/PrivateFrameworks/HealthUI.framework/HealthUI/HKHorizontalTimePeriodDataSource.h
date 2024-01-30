@class NSArray, HKSampleType;

@interface HKHorizontalTimePeriodDataSource : HKHealthQueryChartCacheDataSource

@property (retain, nonatomic) HKSampleType *sampleType;
@property (copy, nonatomic) id /* block */ userInfoCreationBlock;
@property (retain, nonatomic) NSArray *valueOrder;

- (id)queryDescription;
- (id /* block */)queryDataForStartDate:(id)a0 endDate:(id)a1 statisticsInterval:(id)a2 healthStore:(id)a3 completionHandler:(id /* block */)a4;
- (void).cxx_destruct;
- (BOOL)supportsChartQueryDataGeneration;
- (id)queriesForStartDate:(id)a0 endDate:(id)a1 statisticsInterval:(id)a2 completionHandler:(id /* block */)a3;
- (id)chartPointsFromQueryData:(id)a0 dataIsFromRemoteSource:(BOOL)a1;
- (id)_codableQueryDataWithSamples:(id)a0;
- (id)_organizeSamplesByValueAndDateInterval:(id)a0;
- (id)_dateIntervalsByValueWithCodableQueryData:(id)a0;
- (id)_chartPointsWithDateIntervalsByValue:(id)a0 sourceTimeZone:(id)a1;

@end
