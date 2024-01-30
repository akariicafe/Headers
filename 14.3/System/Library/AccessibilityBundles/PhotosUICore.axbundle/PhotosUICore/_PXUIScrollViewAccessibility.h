@interface _PXUIScrollViewAccessibility : ___PXUIScrollViewAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (id)accessibilityElements;
- (id)_accessibilitySortedElementsWithin;
- (BOOL)_accessibilityOnlyComparesByXAxis;
- (BOOL)_accessibilityScrollAcrossPageBoundaries;
- (BOOL)isAccessibilityOpaqueElementProvider;
- (void)_axSetPXGScrollViewElements:(id)a0;
- (BOOL)_axUsesPhotosGridKit;
- (long long)_axCompareView:(id)a0 toView:(id)a1;
- (id)_axPXGScrollViewElements;
- (void)_setAXPXGScrollViewElements:(id)a0;

@end
