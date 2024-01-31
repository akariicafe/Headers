@interface _PXUIScrollViewAccessibility : ___PXUIScrollViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityElements;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)_accessibilityOnlyComparesByXAxis;
- (BOOL)_accessibilityScrollAcrossPageBoundaries;
- (id)_accessibilitySortedElementsWithin;
- (BOOL)isAccessibilityOpaqueElementProvider;
- (BOOL)_accessibilityIsInFeedViewController;
- (long long)_axCompareView:(id)a0 toView:(id)a1;
- (id)_axPXGScrollViewElements;
- (void)_axSetPXGScrollViewElements:(id)a0;
- (BOOL)_axUsesPhotosGridKit;
- (void)_setAXPXGScrollViewElements:(id)a0;

@end
