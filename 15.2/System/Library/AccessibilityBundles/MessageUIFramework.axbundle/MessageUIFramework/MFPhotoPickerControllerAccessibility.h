@interface MFPhotoPickerControllerAccessibility : __MFPhotoPickerControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)viewDidLoad;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (BOOL)accessibilityPerformEscape;
- (void)_accessibilityLoadAccessibilityInformation;

@end
