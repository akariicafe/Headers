@class UISwipeActionController, UICollectionViewLayout, NSString;

@interface _UICollectionViewLayoutSwipeActionsModule : NSObject <UISwipeActionHost_Internal>

@property (weak, nonatomic) UICollectionViewLayout *host;
@property (retain, nonatomic) UISwipeActionController *swipeActionController;
@property (nonatomic) BOOL layoutUpdateOrRefreshPending;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)itemContainerViewForSwipeActionController:(id)a0;
- (void)teardown;
- (void)swipeActionController:(id)a0 willBeginSwipeForItemAtIndexPath:(id)a1;
- (id)swipeActionController:(id)a0 leadingSwipeConfigurationForItemAtIndexPath:(id)a1;
- (id)swipeActionController:(id)a0 trailingSwipeConfigurationForItemAtIndexPath:(id)a1;
- (long long)layoutDirectionForSwipeActionController:(id)a0;
- (BOOL)swipeActionController:(id)a0 insertActionsView:(id)a1 forItemAtIndexPath:(id)a2;
- (void)transformCellLayoutAttributes:(id)a0 isDisappearing:(BOOL)a1;
- (BOOL)hasActiveSwipe;
- (BOOL)swipeActionController:(id)a0 mayBeginSwipeForItemAtIndexPath:(id)a1;
- (void)updateWithUpdateItems:(id)a0;
- (void)_invalidateSwipeActionsLayoutRefreshingActiveConfigurations:(BOOL)a0;
- (void)swipeItemAtIndexPath:(id)a0 direction:(unsigned long long)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (void)swipeActionController:(id)a0 swipeOccurrence:(id)a1 didChangeStateFrom:(long long)a2 to:(long long)a3;
- (void).cxx_destruct;
- (void)swipeActionController:(id)a0 didBeginSwipeForItemAtIndexPath:(id)a1;
- (void)_updateSwipeActionsConfiguration:(id)a0 forIndexPath:(id)a1;
- (void)swipeActionController:(id)a0 cleanupActionsView:(id)a1 forItemAtIndexPath:(id)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })swipeActionController:(id)a0 extraInsetsForItemAtIndexPath:(id)a1;
- (id)propertyAnimatorForCollectionViewUpdates:(id)a0 withCustomAnimator:(id)a1;
- (void)transformDecorationLayoutAttributes:(id)a0 isDisappearing:(BOOL)a1;
- (id)swipeViewManipulatorForSwipeActionController:(id)a0;
- (void)editingStateDidChange;
- (id)initWithHost:(id)a0;
- (id)swipeActionController:(id)a0 viewForItemAtIndexPath:(id)a1;
- (void)swipeActionController:(id)a0 didEndSwipeForItemAtIndexPath:(id)a1;
- (id)_cellWithCustomGroupingAtIndexPath:(id)a0;
- (BOOL)_canSwipeItemAtIndexPath:(id)a0;
- (id)swipeActionController:(id)a0 indexPathForTouchLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)revealTrailingSwipeActionsForIndexPath:(id)a0;
- (void)_transformLayoutAttributes:(id)a0 ofSeparatorAtBottom:(BOOL)a1 forSwipeOccurrence:(id)a2 isDisappearing:(BOOL)a3;
- (id)gestureRecognizerViewForSwipeActionController:(id)a0;
- (void)processLayoutInvalidationWithContext:(id)a0 updateConfigurations:(BOOL)a1;

@end
