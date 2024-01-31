@interface SBMainSwitcherWindowAccessibility : __SBMainSwitcherWindowAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (long long)_accessibilityInterfaceOrientationForScreenCoordinates;
- (BOOL)_accessibilityUseWindowBoundsForOutOfBoundsChecking;
- (BOOL)_accessibilityWindowVisible;
- (BOOL)_axIsVisible;
- (id)_axMainSwitcher;
- (BOOL)_axIsAnySwitcherVisible;
- (BOOL)_axIsControlCenterVisible;
- (BOOL)_axMultiAppNubletsVisible;
- (id)_axSideAppDivider;
- (id)_axTongueGrabber;

@end
