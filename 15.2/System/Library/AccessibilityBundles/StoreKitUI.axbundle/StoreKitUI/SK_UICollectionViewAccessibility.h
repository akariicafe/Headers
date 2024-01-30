@interface SK_UICollectionViewAccessibility : __SK_UICollectionViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (id)_accessibilityScrollStatus;
- (id)_accessibilitySortedElementsWithinWithOptions:(id)a0;
- (double)_accessibilityRightOpaqueScrollViewContentOffsetLimit;
- (double)_accessibilityLeftOpaqueScrollViewContentOffsetLimit;
- (BOOL)_accessibilityOnlyComparesByXAxis;
- (void)_accessibilityLoadAccessibilityInformation;
- (BOOL)_axIsCollectionViewCarousel;
- (unsigned long long)_accessibilityModelCellCount;
- (unsigned long long)_accessibilityActualCellCount;
- (BOOL)_accessibilityShouldOverrideScrollViewContentOffsetLimits;
- (double)_accessibilityCellWidth;
- (BOOL)_accessibilityUseXRightOffsetForScrollOpaqueElementIntoViewDirection:(long long)a0;

@end
