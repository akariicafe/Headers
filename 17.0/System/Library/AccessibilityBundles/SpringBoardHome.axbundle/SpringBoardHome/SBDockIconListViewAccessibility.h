@interface SBDockIconListViewAccessibility : __SBDockIconListViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (id)accessibilityElements;
- (long long)accessibilityContainerType;
- (BOOL)shouldGroupAccessibilityChildren;
- (double)_accessibilityAllowedGeometryOverlap;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)_accessibilityHitTestShouldFallbackToNearestChild;
- (BOOL)_accessibilityIsGroupedParent;
- (id)_accessibilityScannerGroupElements;
- (id)_accessibilityEmptyListDropString;

@end
