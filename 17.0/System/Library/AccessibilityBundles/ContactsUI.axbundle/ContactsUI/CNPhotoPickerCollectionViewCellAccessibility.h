@interface CNPhotoPickerCollectionViewCellAccessibility : __CNPhotoPickerCollectionViewCellAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (id)accessibilityUserInputLabels;
- (id)_axProviderItem;
- (BOOL)_axIsAddItem;
- (BOOL)_axIsVariant;
- (id)_axProviderGroup;
- (void)_axSetIsAddItem:(BOOL)a0;
- (void)_axSetIsVariant:(BOOL)a0;
- (void)_axSetProviderGroup:(id)a0;
- (void)_axSetProviderItem:(id)a0;

@end
