@interface CKGroupAcknowledgmentVotingViewControllerAccessibility : __CKGroupAcknowledgmentVotingViewControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)viewDidLoad;
- (id)collapseButton;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)_animateToLayout:(unsigned long long)a0 aroundSection:(long long)a1;
- (void)acknowledgmentVotingViewAnimatorDidFinishAnimation:(id)a0;

@end
