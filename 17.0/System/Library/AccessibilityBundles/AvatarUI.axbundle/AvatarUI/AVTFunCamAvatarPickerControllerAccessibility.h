@interface AVTFunCamAvatarPickerControllerAccessibility : __AVTFunCamAvatarPickerControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)viewDidLayoutSubviews;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)_accessibilityLoadAccessibilityInformation;
- (id)_axLabelForIndexPath:(id)a0;
- (id)_axFunCamAvatarCarousel;
- (BOOL)_axFunCamAvatarPickerDidSetupCells;
- (id)_axRecordForIndexPath:(id)a0;
- (void)_setAXFunCamAvatarCarousel:(id)a0;
- (void)_setAXFunCamAvatarPickerDidSetupCells:(BOOL)a0;
- (void)_setupAccessibilityForCell:(id)a0 atIndexPath:(id)a1;

@end
