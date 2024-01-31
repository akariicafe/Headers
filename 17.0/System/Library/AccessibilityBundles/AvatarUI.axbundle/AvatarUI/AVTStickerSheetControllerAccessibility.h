@interface AVTStickerSheetControllerAccessibility : __AVTStickerSheetControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_axSetCurrentAvatarDescription:(id)a0;
- (id)_axGetCurrentAvatarDescription;
- (id)_axGetCurrentAvatarRecord;
- (void)_axMarkupCell:(id)a0 indexPath:(id)a1;
- (void)_axSetCurrentAvatarRecord:(id)a0;

@end
