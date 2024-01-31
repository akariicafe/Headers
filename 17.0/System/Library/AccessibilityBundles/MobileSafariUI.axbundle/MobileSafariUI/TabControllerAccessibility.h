@interface TabControllerAccessibility : __TabControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)tabCollectionView:(id)a0 didSelectItem:(id)a1;
- (void)tabCollectionView:(id)a0 closeItem:(id)a1;
- (void)moveTabDocument:(id)a0 overTabDocument:(id)a1;
- (id)_axTabBarItemViewForTabDocument:(id)a0;

@end
