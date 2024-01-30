@class HKUnit, NSString, NSArray, NSPredicate, HKHealthStore, HKQuantitySample, HKUnitPreferenceController, NSDate, HKValueRange, HKGraphSeriesDataBlock, HKQuantityType;
@protocol HKHistogramChartDataSourceDataFetchObserver;

@interface HKHistogramChartDataSource : HKGraphSeriesDataSource <HKHistogramAxisDimensionDataSource>

@property (nonatomic) unsigned long long binningMode;
@property (nonatomic) unsigned long long binCalculation;
@property (nonatomic) unsigned long long dateBasedBinModeConfig;
@property (nonatomic) unsigned long long numberOfBins;
@property (nonatomic) unsigned long long binWidth;
@property (nonatomic) unsigned char didExecuteQuery;
@property (retain, nonatomic) HKQuantitySample *minimumSample;
@property (retain, nonatomic) HKQuantitySample *maximumSample;
@property (retain, nonatomic) NSArray *quantityValueRanges;
@property (weak, nonatomic) id<HKHistogramChartDataSourceDataFetchObserver> fetchObserver;
@property (readonly, nonatomic) HKHealthStore *healthStore;
@property (readonly, nonatomic) HKUnitPreferenceController *unitPreferenceController;
@property (readonly, nonatomic) NSString *quantityIdentifier;
@property (readonly, nonatomic) HKQuantityType *quantityType;
@property (readonly, nonatomic) HKUnit *unit;
@property (readonly, nonatomic) NSPredicate *predicate;
@property (readonly, nonatomic) NSArray *sortDescriptors;
@property (retain, nonatomic) HKGraphSeriesDataBlock *dataBlock;
@property (retain, nonatomic) NSDate *samplesStartDate;
@property (retain, nonatomic) NSDate *samplesEndDate;
@property (readonly, nonatomic) HKValueRange *xAxisRange;
@property (readonly, nonatomic) HKValueRange *yAxisRange;
@property (copy, nonatomic) id /* block */ dataBlockBuilder;
@property (copy, nonatomic) id /* block */ xAxisStringForLocation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_daysInWeekXValueRange;
+ (id)_hoursInDayXValueRange;

- (void)fetchData;
- (void).cxx_destruct;
- (id)_query;
- (id)_displayType;
- (id)_daysOfTheWeek;
- (id)_dayNameFormatter;
- (id)cachedBlockForPath:(struct { long long x0; long long x1; })a0 context:(id)a1;
- (id)_dateBasedXValueRangeForConfig:(unsigned long long)a0;
- (id)initWithQuantityTypeIdentifier:(id)a0 healthStore:(id)a1 unitPreferenceController:(id)a2 predicate:(id)a3 yAxisRange:(id)a4 binCalculation:(unsigned long long)a5 dateBasedBinModeConfig:(unsigned long long)a6;
- (unsigned long long)_binIndexForSample:(id)a0;
- (id)_buildQuantityValueRangesFromSortedSamples:(id)a0;
- (unsigned long long)_dateBasedBinIndexForSample:(id)a0;
- (unsigned long long)_dayIndexForDayName:(id)a0;
- (id)_dayNameFromDayIndex:(unsigned long long)a0;
- (id)_dayXAxisStringForLocation:(id)a0;
- (id)_hourNameFromHourIndex:(unsigned long long)a0;
- (id)_hourOfTheDayFormatter;
- (id)_hourXAxisStringForLocation:(id)a0;
- (id)_initWithQuantityTypeIdentifier:(id)a0 healthStore:(id)a1 unitPreferenceController:(id)a2 predicate:(id)a3 xAxisRange:(id)a4 yAxisRange:(id)a5 binMode:(unsigned long long)a6 binCalculation:(unsigned long long)a7 binWidth:(double)a8 numberOfBins:(unsigned long long)a9 dateBasedBinModeConfig:(unsigned long long)a10;
- (unsigned long long)_normalBinIndexForSample:(id)a0;
- (id)_samplesSortedByQuantity:(id)a0;
- (struct { long long x0; long long x1; })blockPathForX:(id)a0 zoom:(long long)a1;
- (void)blocksRequestedFromPath:(struct { long long x0; long long x1; })a0 toPath:(struct { long long x0; long long x1; })a1 priorityDelegate:(id)a2;
- (id)buildBinsWithSamples:(id)a0;
- (id)buildGraphSeriesDataBlockFromSamples:(id)a0;
- (id)buildGraphSeriesDataBlockWithCalculatedBinValues:(id)a0;
- (id)calculateBinValueForBins:(id)a0 usingCalculation:(unsigned long long)a1;
- (void)didCompleteFetch;
- (id)initWithQuantityTypeIdentifier:(id)a0 healthStore:(id)a1 unitPreferenceController:(id)a2 predicate:(id)a3 yAxisRange:(id)a4 binWidth:(double)a5;
- (id)stringForLocation:(id)a0;
- (id)xAxisStringForLocation:(id)a0;

@end
