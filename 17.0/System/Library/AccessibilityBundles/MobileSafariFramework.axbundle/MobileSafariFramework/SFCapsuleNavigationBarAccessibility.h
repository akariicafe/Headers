@interface SFCapsuleNavigationBarAccessibility : __SFCapsuleNavigationBarAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityElements;
- (id)accessibilityCustomActions;
- (void)setTrailingButtons:(id)a0;
- (BOOL)accessibilityScroll:(long long)a0;
- (BOOL)shouldGroupAccessibilityChildren;
- (BOOL)_accessibilityHitTestShouldFallbackToNearestChild;
- (BOOL)_accessibilityOnlyComparesByXAxis;
- (long long)_accessibilitySortPriority;
- (id)_accessibilityBrowserController;

@end
