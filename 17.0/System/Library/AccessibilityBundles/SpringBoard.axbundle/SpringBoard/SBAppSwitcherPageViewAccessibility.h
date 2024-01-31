@interface SBAppSwitcherPageViewAccessibility : __SBAppSwitcherPageViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (BOOL)canBecomeFocused;
- (id)_viewToAddFocusLayer;
- (BOOL)isAccessibilityElement;
- (id)_providedFocusFallbackScroller;
- (id)accessibilityPath;
- (id)accessibilityValue;
- (BOOL)_accessibilityScrollToVisible;
- (BOOL)_accessibilityIsNotFirstElement;
- (id)_accessibilityBundleIdentifier;
- (id)_accessibilityCustomActionGroupIdentifier;
- (BOOL)_accessibilityElementVisibilityAffectsLayout;
- (id)_accessibilityNativeFocusPreferredElement;
- (id)_accessibilityPreferredScrollActions;
- (BOOL)_accessibilityRetainsCustomRotorActionSetting;
- (id)_accessibilityScrollStatus;
- (BOOL)_accessibilityShouldIncludeArrowKeyCommandsForDirectionalFocusMovement;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_accessibilityVisibleFrame;

@end
