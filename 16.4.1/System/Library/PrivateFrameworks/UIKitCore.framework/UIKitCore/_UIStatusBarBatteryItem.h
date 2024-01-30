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
@property (nonatomic) BOOL usesCondensedPercentageDisplay;

- (id)viewForIdentifier:(id)a0;
- (id)applyUpdate:(id)a0 toDisplayItem:(id)a1;
- (id)dependentEntryKeys;
- (void)_create_percentView;
- (void)_create_chargingView;
- (void)_create_batteryView;
- (void)_create_staticBatteryView;
- (void).cxx_destruct;

@end
