@interface PXFocusableUIImageViewAccessibility : __PXFocusableUIImageViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (id)accessibilityIdentifier;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityURL;
- (id)accessibilityCustomContent;
- (id)accessibilityHint;
- (BOOL)isAccessibilityElement;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (id)_accessibilityPHAssetLocalIdentifier;
- (BOOL)_accessibilityIsPHAssetLocallyAvailable;
- (long long)_accessibilityWellKnownPHPhotoLibraryIdentifier;
- (void)_setAXIndexPathHolder:(id)a0;
- (void)_setAXSelectionManager:(id)a0;
- (id)_axSelectionManager;
- (id)_axIndexPathHolder;
- (void)_axSetIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (void)_axSetSelectionManager:(id)a0;

@end
