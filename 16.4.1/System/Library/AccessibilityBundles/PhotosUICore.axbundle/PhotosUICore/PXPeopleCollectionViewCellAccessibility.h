@interface PXPeopleCollectionViewCellAccessibility : __PXPeopleCollectionViewCellAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (id)accessibilityLabel;
- (id)accessibilityCustomActions;
- (id)_accessibilityUserTestingChildren;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (id)accessibilityValue;
- (id)_accessibilityFavoriteButton;
- (id)_accessibilityPersonName;
- (BOOL)_accessibilityToggleFavoriteActivate:(id)a0;
- (id)_accessibilityUnfavoriteButton;
- (unsigned long long)_axPeopleHomeCellSelectionMode;
- (void)_setAXPeopleHomeCellSelectionMode:(unsigned long long)a0;
- (unsigned long long)axPeopleHomeCellSelectionMode;
- (void)setAXPeopleHomeCellSelectionMode:(unsigned long long)a0;

@end
