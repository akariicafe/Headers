@interface UIImageViewAccessibility__PhotosUI__UIKit : __UIImageViewAccessibility__PhotosUI__UIKit_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityDragSourceDescriptors;
- (id)accessibilityValue;
- (BOOL)accessibilityZoomInAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)accessibilityZoomOutAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)accessibilityCustomContent;
- (id)accessibilityURL;
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
