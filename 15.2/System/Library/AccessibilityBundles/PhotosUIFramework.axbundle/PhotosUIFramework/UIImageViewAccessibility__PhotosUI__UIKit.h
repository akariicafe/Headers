@interface UIImageViewAccessibility__PhotosUI__UIKit : __UIImageViewAccessibility__PhotosUI__UIKit_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (unsigned long long)accessibilityTraits;
- (id)accessibilityURL;
- (id)accessibilityCustomContent;
- (id)accessibilityValue;
- (id)_accessibilityPhotoDescription;
- (id)accessibilityLabel;
- (BOOL)_accessibilitySkipImageTraitDescription;
- (id)_accessibilityElementStoredUserLabel;
- (id)_accessibilityPHAssetLocalIdentifier;
- (BOOL)_accessibilityIsPHAssetLocallyAvailable;
- (long long)_accessibilityWellKnownPHPhotoLibraryIdentifier;
- (long long)_accessibilitySortPriority;
- (void)accessibilityZoomInAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)accessibilityZoomOutAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)_accessibilitySavePhotoLabel:(id)a0;
- (id)_axPHAsset;
- (BOOL)_accessibilityZoomAtPoint:(struct CGPoint { double x0; double x1; })a0 zoomIn:(BOOL)a1;

@end
