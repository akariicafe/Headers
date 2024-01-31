@interface PXPeopleCollectionViewControllerAccessibility : __PXPeopleCollectionViewControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)setMode:(unsigned long long)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_accessibilityModifyCellMode:(id)a0;
- (void)_accessibilityUpdateVisibleCells;

@end
