@interface PXPeopleCollectionViewCellAccessibility : __PXPeopleCollectionViewCellAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (BOOL)isAccessibilityElement;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (id)accessibilityCustomActions;
- (id)accessibilityValue;
- (unsigned long long)_axPeopleHomeCellSelectionMode;
- (void)_setAXPeopleHomeCellSelectionMode:(unsigned long long)a0;
- (id)_accessibilityPersonName;
- (id)_accessibilityFavoriteButton;
- (BOOL)_accessibilityFavoriteButtonActivate:(id)a0;
- (unsigned long long)axPeopleHomeCellSelectionMode;
- (void)setAXPeopleHomeCellSelectionMode:(unsigned long long)a0;

@end
