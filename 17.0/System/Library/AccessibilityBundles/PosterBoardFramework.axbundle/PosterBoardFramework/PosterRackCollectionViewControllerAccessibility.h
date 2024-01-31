@interface PosterRackCollectionViewControllerAccessibility : __PosterRackCollectionViewControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)viewDidLayoutSubviews;
- (BOOL)accessibilityScroll:(long long)a0;
- (void)_accessibilityLoadAccessibilityInformation;
- (id)_axCollectionView;
- (BOOL)_axScrollDown:(id)a0 scrollView:(id)a1;
- (BOOL)_axScrollLeft:(BOOL)a0 pageControl:(id)a1 collectionView:(id)a2;
- (void)_axSetPageControlValue;

@end
