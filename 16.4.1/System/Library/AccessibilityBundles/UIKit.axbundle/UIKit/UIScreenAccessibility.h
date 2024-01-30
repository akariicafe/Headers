@interface UIScreenAccessibility : __UIScreenAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)_searchForFocusRegionsInContext:(id)a0;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (id)_focusSystem;
- (BOOL)_accessibilityIsFKARunningForFocusItem;
- (id)_accessibilityNativeFocusElement;

@end
