@class HKUnitPreferenceController;

@interface HKBloodGlucosePercentInRangeDataSource : HKHealthQueryChartCacheDataSource

@property (retain, nonatomic) HKUnitPreferenceController *unitController;

- (id)queryDescription;
- (void).cxx_destruct;
- (id)queriesForStartDate:(id)a0 endDate:(id)a1 statisticsInterval:(id)a2 completionHandler:(id /* block */)a3;
- (id)initWithHealthStore:(id)a0 unitController:(id)a1;
- (long long)_requiredSampleCountForHistogramForStatisticsInterval:(id)a0;
- (id)_dataBlockFromHistogramCollection:(id)a0 requiredSampleCountForHistogram:(long long)a1;

@end
