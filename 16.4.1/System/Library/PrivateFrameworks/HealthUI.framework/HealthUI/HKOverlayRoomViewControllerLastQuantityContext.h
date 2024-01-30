@class HKInteractiveChartOverlayNamedDataSource, NSString, HKDisplayType, HKOverlayRoomApplicationItems, HKDisplayTypeContextItem, HKInteractiveChartOverlayViewController;

@interface HKOverlayRoomViewControllerLastQuantityContext : NSObject <HKOverlayContext>

@property (retain, nonatomic) HKInteractiveChartOverlayViewController *overlayChartController;
@property (retain, nonatomic) HKOverlayRoomApplicationItems *applicationItems;
@property (retain, nonatomic) HKDisplayType *overlayDisplayType;
@property (retain, nonatomic) HKDisplayTypeContextItem *lastUpdatedContextItem;
@property (retain, nonatomic) HKInteractiveChartOverlayNamedDataSource *cacheDataSource;
@property (nonatomic) BOOL attenuated;
@property (nonatomic) long long overlayMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)overlayDisplayTypeForTimeScope:(long long)a0;
- (id)_colorForDisplayType:(id)a0;
- (id)contextItemForLastUpdate;
- (void)invalidateContextItem;
- (void)overlayStateDidChange:(BOOL)a0 contextItem:(id)a1 chartController:(id)a2;
- (id)sampleTypeForDateRangeUpdates;
- (void)updateContextItemForDateInterval:(id)a0 overlayController:(id)a1 timeScope:(long long)a2 completion:(id /* block */)a3;
- (id)_buildContextWithTime:(id)a0 value:(id)a1 isUnitIncludedInValue:(BOOL)a2;
- (id)_buildFullTitle:(id)a0;
- (id)_buildLastQuantityDisplayType;
- (id)_buildLastValueDataSourceWithUnitController:(id)a0 displayType:(id)a1 healthStore:(id)a2;
- (id)_stringValueFromQuantity:(id)a0 unit:(id)a1 isUnitIncludedInValue:(BOOL *)a2;
- (id)initWithOverlayChartController:(id)a0 applicationItems:(id)a1 mode:(long long)a2;
- (id)initWithOverlayChartController:(id)a0 applicationItems:(id)a1 mode:(long long)a2 attenuated:(BOOL)a3;

@end
