@protocol HKOverlaySleepRoomContextChangeDelegate;

@interface _HKSleepComparisonContext : HKOverlayRoomStackedContext

@property (readonly, weak, nonatomic) id<HKOverlaySleepRoomContextChangeDelegate> contextChangeDelegate;

- (void).cxx_destruct;
- (id)contextItemForLastUpdate;
- (void)overlayStateWillChange:(BOOL)a0 contextItem:(id)a1 chartController:(id)a2;
- (BOOL)unselectedContextShouldUseContextBaseType;
- (id)_defaultStackedInteractiveChartDisplayTypeForSampleType:(id)a0 overlayChartController:(id)a1 applicationItems:(id)a2 formatterTimeScope:(long long)a3;
- (id)_generateSleepDistributionDisplayTypeForStackedSampleType:(id)a0 currentCalendarOverride:(id)a1 overlayChartController:(id)a2 applicationItems:(id)a3;
- (BOOL)_sampleTypeShouldUseSleepQuantityDistribution:(id)a0;
- (id)initWithStackedSampleType:(id)a0 currentCalendarOverride:(id)a1 overlayChartController:(id)a2 applicationItems:(id)a3 contextChangeDelegate:(id)a4 primarySleepDisplayType:(id)a5;
- (void)stackedOverlayStateWillChange:(BOOL)a0 contextItem:(id)a1 chartController:(id)a2;

@end
