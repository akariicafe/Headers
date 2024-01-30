@class _HKSleepDurationAverageFormatter, NSString, _HKSleepDurationAverageSeries, HKDisplayType, HKDisplayTypeContextItem, HKInteractiveChartOverlayViewController;
@protocol _HKContextChangeDelegate;

@interface _HKSleepDurationAverageContext : NSObject <HKOverlayContext>

@property (retain, nonatomic) HKDisplayTypeContextItem *lastUpdatedItem;
@property (readonly, weak, nonatomic) id<_HKContextChangeDelegate> contextChangeDelegate;
@property (readonly, nonatomic) _HKSleepDurationAverageSeries *overlayAverageSeries;
@property (readonly, nonatomic) HKInteractiveChartOverlayViewController *overlayChartController;
@property (readonly, nonatomic) HKDisplayType *baseDisplayType;
@property (readonly, nonatomic) HKDisplayType *overlayDisplayType;
@property (readonly, nonatomic) BOOL useInBedAverage;
@property (readonly, nonatomic) _HKSleepDurationAverageFormatter *averageChartFormatter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)contextItemForLastUpdate;
- (void)updateContextItemForDateInterval:(id)a0 timeScope:(long long)a1 completion:(id /* block */)a2;
- (id)sampleTypeForDateRangeUpdates;
- (id)overlayDisplayTypeForTimeScope:(long long)a0;
- (void)overlayStateWillChange:(BOOL)a0 contextItem:(id)a1 chartController:(id)a2;
- (id)baseDisplayTypeForOverlay:(long long)a0;
- (BOOL)unselectedContextShouldUseContextBaseType;
- (id)initWithBaseDisplayType:(id)a0 overlayDisplayType:(id)a1 overlayChartController:(id)a2 useInBedAverage:(BOOL)a3 contextChangeDelegate:(id)a4 overlayAverageSeries:(id)a5 averageChartFormatter:(id)a6;
- (id)_contextItemWithAverageString:(id)a0;
- (double)_averageValueFromChartPoints:(id)a0;
- (id)_averagePhraseFromAverageValue:(double)a0 shortForm:(BOOL)a1;
- (id)_findSleepDurationSeries;

@end
