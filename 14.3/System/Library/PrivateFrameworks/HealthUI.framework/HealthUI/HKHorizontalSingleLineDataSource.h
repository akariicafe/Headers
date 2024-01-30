@class HKSampleType;

@interface HKHorizontalSingleLineDataSource : HKHealthQueryChartCacheDataSource

@property (retain, nonatomic) HKSampleType *sampleType;
@property (copy, nonatomic) id /* block */ userInfoCreationBlock;

- (void).cxx_destruct;
- (id)queryDescription;
- (id)queriesForStartDate:(id)a0 endDate:(id)a1 statisticsInterval:(id)a2 completionHandler:(id /* block */)a3;
- (void)_handleSamples:(id)a0 blockStart:(id)a1 blockEnd:(id)a2 completion:(id /* block */)a3;
- (void)applyMarkStyleToPoint:(id)a0 sample:(id)a1;

@end
