@interface PXFocusableUIImageViewAccessibility : __PXFocusableUIImageViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (id)accessibilityLabel;
- (id)accessibilityIdentifier;
- (id)accessibilityHint;
- (unsigned long long)accessibilityTraits;
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
