@interface _PXUIScrollViewAccessibility : ___PXUIScrollViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (id)accessibilityElements;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)isAccessibilityOpaqueElementProvider;
- (id)_accessibilitySortedElementsWithin;
- (BOOL)_accessibilityOnlyComparesByXAxis;
- (BOOL)_accessibilityScrollAcrossPageBoundaries;
- (void)_axSetPXGScrollViewElements:(id)a0;
- (BOOL)_axUsesPhotosGridKit;
- (long long)_axCompareView:(id)a0 toView:(id)a1;
- (id)_axPXGScrollViewElements;
- (void)_setAXPXGScrollViewElements:(id)a0;
- (BOOL)_accessibilityIsInStoryFeedViewController;

@end
