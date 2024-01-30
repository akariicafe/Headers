@interface PHAssetAccessibility : __PHAssetAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (unsigned long long)accessibilityTraits;
- (id)accessibilityURL;
- (id)accessibilityCustomContent;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (id)_accessibilityOrientation;
- (id)_accessibilityPHAssetLocalIdentifier;
- (BOOL)_accessibilityIsPHAssetLocallyAvailable;
- (long long)_accessibilityWellKnownPHPhotoLibraryIdentifier;
- (BOOL)_accessibilitySavePhotoLabel:(id)a0;
- (id)_accessibilityCreationDate;
- (id)_accessibilityCreationTime;
- (id)_accessibilityAssetDuration;
- (id)_accessibilityCaptionLabel;
- (id)_accessibilityPeopleInPhoto;
- (id)_accessibilityFacesInfo;
- (id)_accessibilityiCloudPhotoLabel;
- (BOOL)_axICloudLabelWasSet;
- (void)_axSetICloudLabelWasSet:(BOOL)a0;
- (void)_setAXValueCallback:(id /* block */)a0;
- (id /* block */)_axValueCallback;
- (BOOL)shouldMeasureBlurriness;
- (void)accessibilityApplyValueBlock:(id /* block */)a0;

@end
