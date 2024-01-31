@interface ProximityStatusViewControllerAccessibility : __ProximityStatusViewControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)viewWillAppear:(BOOL)a0;
- (BOOL)accessibilityPerformEscape;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_accessibilityUpdateAccessibilityElements;
- (double)_axCaseBatteryLevel;
- (id)_axCaseDevice;
- (id)_axCombinedDevice;
- (id)_axCreateAggregateStatusView:(id)a0 primaryTitle:(id)a1 batteryLevelLabel:(id)a2 chargingImage:(id)a3 warningImage:(id)a4;
- (double)_axLeftBatteryLevel;
- (id)_axLeftDevice;
- (double)_axRightBatteryLevel;
- (id)_axRightDevice;
- (void)_axSetCaseBatteryLevel:(double)a0;
- (void)_axSetCaseDevice:(id)a0;
- (void)_axSetCombinedDevice:(id)a0;
- (void)_axSetLeftBatteryLevel:(double)a0;
- (void)_axSetLeftDevice:(id)a0;
- (void)_axSetRightBatteryLevel:(double)a0;
- (void)_axSetRightDevice:(id)a0;
- (void)_updateBatteryLevelLeft:(double)a0 levelRight:(double)a1 levelCase:(double)a2;

@end
