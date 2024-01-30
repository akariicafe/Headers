@class _HKSleepDurationAverageFormatter, NSString, _HKSleepDurationAverageSeries, HKDisplayType, HKDisplayTypeContextItem, HKInteractiveChartOverlayViewController;
@protocol HKOverlaySleepRoomContextChangeDelegate;

@interface _HKSleepDurationAverageContext : NSObject <HKOverlayContext>

@property (retain, nonatomic) HKDisplayTypeContextItem *lastUpdatedItem;
@property (readonly, weak, nonatomic) id<HKOverlaySleepRoomContextChangeDelegate> contextChangeDelegate;
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
- (id)overlayDisplayTypeForTimeScope:(long long)a0;
- (id)baseDisplayTypeForOverlay:(long long)a0;
- (id)contextItemForLastUpdate;
- (void)overlayStateWillChange:(BOOL)a0 contextItem:(id)a1 chartController:(id)a2;
- (id)sampleTypeForDateRangeUpdates;
- (BOOL)unselectedContextShouldUseContextBaseType;
- (void)updateContextItemForDateInterval:(id)a0 overlayController:(id)a1 timeScope:(long long)a2 completion:(id /* block */)a3;
- (id)_averagePhraseFromAverageValue:(double)a0 shortForm:(BOOL)a1 timeScope:(long long)a2;
- (double)_averageValueFromChartPoints:(id)a0 useInBedAverage:(BOOL)a1;
- (id)_contextItemWithAverageString:(id)a0 timeScope:(long long)a1;
- (id)_findSleepDurationSeriesForTimeScope:(long long)a0;
- (void)_updateRangeDataWithChartPoints:(id)a0 useInBedAverage:(BOOL)a1 isHighlighted:(BOOL)a2 timeScope:(long long)a3;
- (id)initWithBaseDisplayType:(id)a0 overlayDisplayType:(id)a1 overlayChartController:(id)a2 useInBedAverage:(BOOL)a3 contextChangeDelegate:(id)a4 overlayAverageSeries:(id)a5 averageChartFormatter:(id)a6;

@end
