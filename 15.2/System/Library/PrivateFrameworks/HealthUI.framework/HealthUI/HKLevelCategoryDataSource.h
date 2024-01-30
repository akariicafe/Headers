@class NSArray, HKSampleType;

@interface HKLevelCategoryDataSource : HKHealthQueryChartCacheDataSource

@property (retain, nonatomic) HKSampleType *sampleType;
@property (copy, nonatomic) id /* block */ userInfoCreationBlock;
@property (copy, nonatomic) id /* block */ pointStyleBlock;
@property (retain, nonatomic) NSArray *valueOrder;

- (id)queryDescription;
- (id /* block */)queryDataForStartDate:(id)a0 endDate:(id)a1 statisticsInterval:(id)a2 healthStore:(id)a3 completionHandler:(id /* block */)a4;
- (void).cxx_destruct;
- (id)_chartPointsWithSamples:(id)a0 sourceTimeZone:(id)a1;
- (BOOL)supportsChartQueryDataGeneration;
- (id)queriesForStartDate:(id)a0 endDate:(id)a1 statisticsInterval:(id)a2 completionHandler:(id /* block */)a3;
- (id)chartPointsFromQueryData:(id)a0 dataIsFromRemoteSource:(BOOL)a1;

@end
