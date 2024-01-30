@interface PXPhotosSectionHeaderViewAccessibility : __PXPhotosSectionHeaderViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (unsigned long long)accessibilityTraits;
- (id)_accessibilityUserTestingChildren;
- (BOOL)isAccessibilityElement;
- (void)_updateTitleLabel;
- (void)_updateActionButton;
- (id)accessibilityLabel;
- (void)_updateLocationsLabelVisibility;
- (void)_updateDateLabel;
- (id)_accessibilitySupplementaryFooterViews;
- (BOOL)_accessibilitySupportsContentSizeCategory:(id)a0;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_axUpdateActionLabel;
- (void)_axUpdateDateLabel;
- (void)_axUpdateLocationLabel;

@end
