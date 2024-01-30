@interface UIStatusBarForegroundViewAccessibility : __UIStatusBarForegroundViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;

- (void)_setStatusBarData:(id)a0 actions:(int)a1 animated:(BOOL)a2;
- (BOOL)_accessibilityHitTestShouldFallbackToNearestChild;
- (id)_accessibilityFuzzyHitTestElements;

@end
