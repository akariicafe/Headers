@class NSArray, HKSampleType;

@interface HKLevelCategoryDataSource : HKHealthQueryChartCacheDataSource

@property (retain, nonatomic) HKSampleType *sampleType;
@property (copy, nonatomic) id /* block */ userInfoCreationBlock;
@property (copy, nonatomic) id /* block */ pointStyleBlock;
@property (retain, nonatomic) NSArray *valueOrder;

- (void).cxx_destruct;
- (id)queryDescription;
- (id)queriesForStartDate:(id)a0 endDate:(id)a1 statisticsInterval:(id)a2 completionHandler:(id /* block */)a3;
- (void)_handleSamples:(id)a0 completion:(id /* block */)a1;

@end
