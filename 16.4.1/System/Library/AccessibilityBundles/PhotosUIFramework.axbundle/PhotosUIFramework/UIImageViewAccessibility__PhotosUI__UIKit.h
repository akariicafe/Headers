@interface UIImageViewAccessibility__PhotosUI__UIKit : __UIImageViewAccessibility__PhotosUI__UIKit_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityDragSourceDescriptors;
- (id)accessibilityValue;
- (id)accessibilityCustomContent;
- (id)accessibilityURL;
- (void)accessibilityZoomInAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)accessibilityZoomOutAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)_accessibilityPhotoDescription;
- (id)_accessibilityElementStoredUserLabel;
- (BOOL)_accessibilityIsPHAssetLocallyAvailable;
- (id)_accessibilityPHAssetLocalIdentifier;
- (id)_accessibilityPhotoLibraryURL;
- (BOOL)_accessibilitySavePhotoLabel:(id)a0;
- (BOOL)_accessibilitySkipImageTraitDescription;
- (long long)_accessibilitySortPriority;
- (id)_axPHAsset;
- (BOOL)_accessibilityZoomAtPoint:(struct CGPoint { double x0; double x1; })a0 zoomIn:(BOOL)a1;
- (id)_liftableSubjectView;

@end
