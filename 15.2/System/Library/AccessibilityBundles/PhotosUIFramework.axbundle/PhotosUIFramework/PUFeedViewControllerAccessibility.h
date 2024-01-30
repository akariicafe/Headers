@interface PUFeedViewControllerAccessibility : __PUFeedViewControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (void)_configureImageCell:(id)a0 forAssetAtIndexPath:(id)a1 inCollectionView:(id)a2;
- (void)_accessibilityLoadAccessibilityInformation;

@end
