@interface UIStatusBarForegroundViewAccessibility : __UIStatusBarForegroundViewAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;

- (BOOL)_accessibilityHitTestShouldFallbackToNearestChild;
- (id)_accessibilityFuzzyHitTestElements;
- (void)_setStatusBarData:(id)a0 actions:(int)a1 animated:(BOOL)a2;

@end
