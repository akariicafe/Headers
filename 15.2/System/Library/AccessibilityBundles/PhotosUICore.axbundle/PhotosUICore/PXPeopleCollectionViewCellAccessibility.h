@interface PXPeopleCollectionViewCellAccessibility : __PXPeopleCollectionViewCellAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (unsigned long long)accessibilityTraits;
- (id)_accessibilityUserTestingChildren;
- (BOOL)isAccessibilityElement;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (id)accessibilityCustomActions;
- (unsigned long long)_axPeopleHomeCellSelectionMode;
- (void)_setAXPeopleHomeCellSelectionMode:(unsigned long long)a0;
- (id)_accessibilityPersonName;
- (id)_accessibilityUnfavoriteButton;
- (id)_accessibilityFavoriteButton;
- (BOOL)_accessibilityToggleFavoriteActivate:(id)a0;
- (unsigned long long)axPeopleHomeCellSelectionMode;
- (void)setAXPeopleHomeCellSelectionMode:(unsigned long long)a0;

@end
