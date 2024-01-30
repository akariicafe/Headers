@interface SK_UICollectionViewAccessibility : __SK_UICollectionViewAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (id)_accessibilitySortedElementsWithin;
- (double)_accessibilityRightOpaqueScrollViewContentOffsetLimit;
- (double)_accessibilityLeftOpaqueScrollViewContentOffsetLimit;
- (BOOL)_accessibilityOnlyComparesByXAxis;
- (void)_accessibilityLoadAccessibilityInformation;
- (id)_accessibilityScrollStatus;
- (BOOL)_axIsCollectionViewCarousel;
- (unsigned long long)_accessibilityModelCellCount;
- (unsigned long long)_accessibilityActualCellCount;
- (BOOL)_accessibilityShouldOverrideScrollViewContentOffsetLimits;
- (double)_accessibilityCellWidth;
- (BOOL)_accessibilityUseXRightOffsetForScrollOpaqueElementIntoViewDirection:(long long)a0;

@end
