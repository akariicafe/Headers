@class HKSampleType, NSString, HKDisplayType, HKDisplayTypeContextItem, HKInteractiveChartOverlayViewController;
@protocol _HKContextChangeDelegate;

@interface _HKSleepDurationGoalContext : NSObject <HKOverlayContext>

@property (readonly, nonatomic) HKInteractiveChartOverlayViewController *overlayChartController;
@property (readonly, nonatomic) HKDisplayType *baseDisplayType;
@property (readonly, nonatomic) HKDisplayType *overlayDisplayType;
@property (readonly, nonatomic) long long overlayMode;
@property (readonly, nonatomic) BOOL isPrimaryContext;
@property (retain, nonatomic) HKDisplayTypeContextItem *lastUpdatedItem;
@property (retain, nonatomic) HKSampleType *monitoringSampleType;
@property (readonly, weak, nonatomic) id<_HKContextChangeDelegate> contextChangeDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)sampleTypeForDateRangeUpdates;
- (id)overlayDisplayTypeForTimeScope:(long long)a0;
- (void)updateContextItemForDateInterval:(id)a0 overlayController:(id)a1 timeScope:(long long)a2 completion:(id /* block */)a3;
- (id)contextItemForLastUpdate;
- (void)overlayStateWillChange:(BOOL)a0 contextItem:(id)a1 chartController:(id)a2;
- (id)baseDisplayTypeForOverlay:(long long)a0;
- (BOOL)unselectedContextShouldUseContextBaseType;
- (id)initWithBaseDisplayType:(id)a0 overlayDisplayType:(id)a1 overlayChartController:(id)a2 overlayMode:(long long)a3 isPrimaryContext:(BOOL)a4 contextChangeDelegate:(id)a5;
- (id)_durationContextItemWithGoal:(id)a0;
- (id)_goalGivenChartPoints:(id)a0;

@end
