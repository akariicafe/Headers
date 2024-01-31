@interface CKDetailsSearchViewControllerAccessibility : __CKDetailsSearchViewControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)dequeueReusableCellWithReuseIdentifier:(id)a0 forIndexPath:(id)a1;
- (id)dequeueReusableSupplementaryViewOfKind:(id)a0 withReuseIdentifier:(id)a1 forIndexPath:(id)a2;
- (id)cellForItemInCollectionView:(id)a0 atIndexPath:(id)a1 withIdentifier:(id)a2;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_axAddCellToMapWithSection:(id)a0 cell:(id)a1;
- (id)_axSectionMap;
- (void)_setAXSectionMap:(id)a0;
- (id)cellForSupplementryItemInCollectionView:(id)a0 atIndexPath:(id)a1 forSupplementryViewKind:(id)a2;

@end
