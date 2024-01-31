@interface MTAWorldClockCollectionViewControllerAccessibility : __MTAWorldClockCollectionViewControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)collectionView:(id)a0 moveItemAtIndexPath:(id)a1 toIndexPath:(id)a2;
- (void)viewDidLoad;
- (void)_installReorderingGestureIfNecessary;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_axModifyCollectionView;
- (void)_axModifyReorderingGesture;
- (void)movedItemAtIndexPath:(id)a0 toIndexPath:(id)a1;
- (id)nameForWorldClockCell:(id)a0;

@end
