@interface PXFocusableUIImageViewAccessibility : __PXFocusableUIImageViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityIdentifier;
- (id)accessibilityHint;
- (BOOL)isAccessibilityElement;
- (id)accessibilityValue;
- (id)accessibilityCustomContent;
- (id)accessibilityURL;
- (BOOL)_accessibilityIsPHAssetLocallyAvailable;
- (id)_accessibilityPHAssetLocalIdentifier;
- (id)_accessibilityPhotoLibraryURL;
- (id)_axIndexPathHolder;
- (id)_axSelectionManager;
- (void)_axSetIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (void)_axSetSelectionManager:(id)a0;
- (void)_setAXIndexPathHolder:(id)a0;
- (void)_setAXSelectionManager:(id)a0;

@end
