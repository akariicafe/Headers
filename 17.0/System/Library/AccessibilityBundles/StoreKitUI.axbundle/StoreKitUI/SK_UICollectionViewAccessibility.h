@interface SK_UICollectionViewAccessibility : __SK_UICollectionViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (double)_accessibilityLeftOpaqueScrollViewContentOffsetLimit;
- (void)_accessibilityLoadAccessibilityInformation;
- (BOOL)_accessibilityOnlyComparesByXAxis;
- (double)_accessibilityRightOpaqueScrollViewContentOffsetLimit;
- (id)_accessibilityScrollStatus;
- (id)_accessibilitySortedElementsWithinWithOptions:(id)a0;
- (unsigned long long)_accessibilityActualCellCount;
- (double)_accessibilityCellWidth;
- (unsigned long long)_accessibilityModelCellCount;
- (BOOL)_accessibilityShouldOverrideScrollViewContentOffsetLimits;
- (BOOL)_accessibilityUseXRightOffsetForScrollOpaqueElementIntoViewDirection:(long long)a0;
- (BOOL)_axIsCollectionViewCarousel;

@end
