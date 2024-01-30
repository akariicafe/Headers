@interface PXPhotosSectionHeaderViewAccessibility : __PXPhotosSectionHeaderViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (id)accessibilityLabel;
- (id)_accessibilityUserTestingChildren;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (id)_accessibilitySupplementaryFooterViews;
- (void)_updateActionButton;
- (void)_updateTitleLabel;
- (void)_accessibilityLoadAccessibilityInformation;
- (BOOL)_accessibilitySupportsContentSizeCategory:(id)a0;
- (void)_updateLocationsLabelVisibility;
- (void)_updateDateLabel;
- (void)_axUpdateActionLabel;
- (void)_axUpdateDateLabel;
- (void)_axUpdateLocationLabel;

@end
