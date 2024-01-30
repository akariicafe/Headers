@interface UIScreenAccessibility : __UIScreenAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)_searchForFocusRegionsInContext:(id)a0;
- (BOOL)_accessibilityIsFKARunningForFocusItem;
- (id)_focusSystem;
- (id)_accessibilityNativeFocusElement;

@end
