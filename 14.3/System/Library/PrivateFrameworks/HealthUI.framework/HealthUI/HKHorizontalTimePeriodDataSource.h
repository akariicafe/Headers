@class NSArray, HKSampleType;

@interface HKHorizontalTimePeriodDataSource : HKHealthQueryChartCacheDataSource

@property (retain, nonatomic) HKSampleType *sampleType;
@property (copy, nonatomic) id /* block */ userInfoCreationBlock;
@property (retain, nonatomic) NSArray *valueOrder;

- (void).cxx_destruct;
- (id)queryDescription;
- (id)queriesForStartDate:(id)a0 endDate:(id)a1 statisticsInterval:(id)a2 completionHandler:(id /* block */)a3;
- (void)_handleSamples:(id)a0 completion:(id /* block */)a1;
- (id)_organizeSamplesByValueAndDateInterval:(id)a0;

@end
