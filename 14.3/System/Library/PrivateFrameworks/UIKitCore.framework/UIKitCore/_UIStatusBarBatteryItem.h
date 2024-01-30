@class _UIStatusBarStringView, _UIBatteryView, _UIStatusBarIdentifier, _UIStaticBatteryView, _UIStatusBarImageView;

@interface _UIStatusBarBatteryItem : _UIStatusBarItem

@property (class, readonly) _UIStatusBarIdentifier *iconDisplayIdentifier;
@property (class, readonly) _UIStatusBarIdentifier *staticIconDisplayIdentifier;
@property (class, readonly) _UIStatusBarIdentifier *chargingDisplayIdentifier;
@property (class, readonly) _UIStatusBarIdentifier *percentDisplayIdentifier;

@property (retain, nonatomic) _UIBatteryView *batteryView;
@property (retain, nonatomic) _UIStaticBatteryView *staticBatteryView;
@property (retain, nonatomic) _UIStatusBarImageView *chargingView;
@property (retain, nonatomic) _UIStatusBarStringView *percentView;
@property (nonatomic) BOOL highlighted;

- (void).cxx_destruct;
- (void)_create_percentView;
- (void)_create_chargingView;
- (void)_create_batteryView;
- (id)applyUpdate:(id)a0 toDisplayItem:(id)a1;
- (id)viewForIdentifier:(id)a0;
- (void)_create_staticBatteryView;
- (id)dependentEntryKeys;

@end
