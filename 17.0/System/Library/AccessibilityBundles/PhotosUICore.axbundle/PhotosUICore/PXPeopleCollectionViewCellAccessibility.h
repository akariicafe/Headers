@interface PXPeopleCollectionViewCellAccessibility : __PXPeopleCollectionViewCellAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityCustomActions;
- (id)_accessibilityUserTestingChildren;
- (BOOL)isAccessibilityElement;
- (id)accessibilityValue;
- (id)_accessibilityFavoriteButton;
- (id)_accessibilityPersonName;
- (BOOL)_accessibilityToggleFavoriteActivate:(id)a0;
- (id)_accessibilityUnfavoriteButton;
- (unsigned long long)_axPeopleHomeCellSelectionMode;
- (void)_setAXPeopleHomeCellSelectionMode:(unsigned long long)a0;
- (unsigned long long)axPeopleHomeCellSelectionMode;
- (BOOL)isDetectionTypeHuman;
- (void)setAXPeopleHomeCellSelectionMode:(unsigned long long)a0;

@end
