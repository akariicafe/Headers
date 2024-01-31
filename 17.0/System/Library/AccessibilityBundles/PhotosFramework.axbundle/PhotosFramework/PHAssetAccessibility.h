@interface PHAssetAccessibility : __PHAssetAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (id)accessibilityCustomContent;
- (id)accessibilityURL;
- (BOOL)_accessibilityIsPHAssetLocallyAvailable;
- (id)_accessibilityOrientation;
- (id)_accessibilityPHAssetLocalIdentifier;
- (id)_accessibilityPhotoLibraryURL;
- (BOOL)_accessibilitySavePhotoLabel:(id)a0;
- (id)_accessibilityCaptionLabel;
- (id)_accessibilityCreationTime;
- (id)_accessibilityAssetDuration;
- (id)_accessibilityCreationDate;
- (id)_accessibilityFacesInfo;
- (id)_accessibilityPeopleInPhoto;
- (id)_accessibilityiCloudPhotoLabel;
- (BOOL)_axICloudLabelWasSet;
- (void)_axSetICloudLabelWasSet:(BOOL)a0;
- (id /* block */)_axValueCallback;
- (void)_setAXValueCallback:(id /* block */)a0;
- (void)accessibilityApplyValueBlock:(id /* block */)a0;
- (BOOL)shouldMeasureBlurriness;

@end
