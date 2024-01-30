@class HKInteractiveChartOverlayNamedDataSource, NSString, HKDisplayType, HKOverlayRoomApplicationItems, HKDisplayTypeContextItem, HKInteractiveChartOverlayViewController;

@interface HKOverlayRoomViewControllerLastQuantityContext : NSObject <HKOverlayContext>

@property (retain, nonatomic) HKInteractiveChartOverlayViewController *overlayChartController;
@property (retain, nonatomic) HKOverlayRoomApplicationItems *applicationItems;
@property (retain, nonatomic) HKDisplayType *overlayDisplayType;
@property (retain, nonatomic) HKDisplayTypeContextItem *lastUpdatedContextItem;
@property (retain, nonatomic) HKInteractiveChartOverlayNamedDataSource *cacheDataSource;
@property (nonatomic) long long overlayMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)contextItemForLastUpdate;
- (void)updateContextItemForDateInterval:(id)a0 timeScope:(long long)a1 completion:(id /* block */)a2;
- (id)sampleTypeForDateRangeUpdates;
- (id)overlayDisplayTypeForTimeScope:(long long)a0;
- (void)overlayStateDidChange:(BOOL)a0 contextItem:(id)a1 chartController:(id)a2;
- (void)invalidateContextItem;
- (BOOL)isEqual:(id)a0;
- (id)_colorForDisplayType:(id)a0;
- (id)initWithOverlayChartController:(id)a0 applicationItems:(id)a1 mode:(long long)a2;
- (id)_buildLastValueDataSourceWithUnitController:(id)a0 displayType:(id)a1 healthStore:(id)a2;
- (id)_buildLastQuantityDisplayType;
- (id)_buildContextWithTime:(id)a0 value:(id)a1;
- (id)_stringValueFromQuantity:(id)a0 unit:(id)a1;
- (id)_buildFullTitle:(id)a0;

@end
