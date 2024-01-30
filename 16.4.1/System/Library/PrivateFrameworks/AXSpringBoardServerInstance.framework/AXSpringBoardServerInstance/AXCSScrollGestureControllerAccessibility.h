@interface AXCSScrollGestureControllerAccessibility : __AXCSScrollGestureControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)setScrollingStrategy:(long long)a0;
- (id)_accessibilitySavedScrollingStrategy;
- (id)_accessibilityForcedScrollingStrategy;
- (void)_accessibilitySetForcedScrollingStrategy:(id)a0;
- (void)_accessibilitySetSavedScrollingStrategy:(id)a0;
- (void)accessibilitySetSystemDashBoardGesturesEnabled:(BOOL)a0;

@end
