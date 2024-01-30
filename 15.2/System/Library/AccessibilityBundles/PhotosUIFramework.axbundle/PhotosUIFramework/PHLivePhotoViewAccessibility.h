@interface PHLivePhotoViewAccessibility : __PHLivePhotoViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (unsigned long long)accessibilityTraits;
- (id)accessibilityURL;
- (id)accessibilityCustomContent;
- (BOOL)isAccessibilityElement;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (BOOL)_accessibilitySkipImageTraitDescription;
- (id)_accessibilityElementStoredUserLabel;
- (id)_accessibilityPHAssetLocalIdentifier;
- (BOOL)_accessibilityIsPHAssetLocallyAvailable;
- (long long)_accessibilityWellKnownPHPhotoLibraryIdentifier;
- (BOOL)_accessibilitySavePhotoLabel:(id)a0;
- (id)_axPHAsset;

@end
