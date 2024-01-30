@interface PUVideoPlayerViewAccessibility : __PUVideoPlayerViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (id)accessibilityURL;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (id)_accessibilityElementStoredUserLabel;
- (id)_accessibilityPHAssetLocalIdentifier;
- (BOOL)_accessibilityIsPHAssetLocallyAvailable;
- (long long)_accessibilityWellKnownPHPhotoLibraryIdentifier;
- (BOOL)_accessibilitySavePhotoLabel:(id)a0;
- (id)_axPHAsset;

@end
