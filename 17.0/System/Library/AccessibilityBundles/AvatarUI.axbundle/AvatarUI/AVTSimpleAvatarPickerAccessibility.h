@interface AVTSimpleAvatarPickerAccessibility : __AVTSimpleAvatarPickerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)loadView;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_axMarkupCellWithAXInfo:(id)a0 indexPath:(id)a1;

@end
