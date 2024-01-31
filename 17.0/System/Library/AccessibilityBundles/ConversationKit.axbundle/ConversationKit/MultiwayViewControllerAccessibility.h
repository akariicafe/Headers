@interface MultiwayViewControllerAccessibility : __MultiwayViewControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)setDeviceOrientation:(long long)a0;
- (BOOL)accessibilityPerformEscape;
- (void)_accessibilityLoadAccessibilityInformation;
- (BOOL)axShouldDisableAutoHidingControls;
- (void)setControlsState:(long long)a0 animated:(BOOL)a1;
- (void)_accessibilityExpandControls;
- (BOOL)_axGetDidExpandControls;
- (long long)_axGetExpectedExpandedState;
- (id)_axParticipantShutters;
- (void)_axSetDidExpandControls:(BOOL)a0;
- (void)_axSetExpectedExpandedState:(long long)a0;

@end
