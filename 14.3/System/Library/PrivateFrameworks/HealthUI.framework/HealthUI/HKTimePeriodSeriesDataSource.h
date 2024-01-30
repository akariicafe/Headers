@class NSPredicate, HKSampleType;

@interface HKTimePeriodSeriesDataSource : HKHealthQueryChartCacheDataSource

@property (retain, nonatomic) HKSampleType *sampleType;
@property (retain, nonatomic) NSPredicate *queryPredicate;
@property (copy, nonatomic) id /* block */ userInfoCreationBlock;

- (void).cxx_destruct;
- (id)queryDescription;
- (id)queriesForStartDate:(id)a0 endDate:(id)a1 statisticsInterval:(id)a2 completionHandler:(id /* block */)a3;
- (id /* block */)_startOfDayTransform;
- (void)_handleSamples:(id)a0 blockStart:(id)a1 blockEnd:(id)a2 intervalComponents:(id)a3 completion:(id /* block */)a4;
- (id)_calculateTotalDurationFromSamples:(id)a0 startDate:(id)a1 endDate:(id)a2 interval:(id)a3 intervalOut:(id *)a4 intervalCountsOut:(id *)a5;

@end
