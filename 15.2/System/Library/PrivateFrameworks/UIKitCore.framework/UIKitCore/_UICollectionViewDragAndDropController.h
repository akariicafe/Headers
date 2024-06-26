@class _UICollectionViewDragSourceController, NSMutableDictionary, NSIndexPath, NSMapTable, UICollectionViewDropProposal, NSMutableArray, _UIDropAnimationHandlers, NSString, NSMutableSet, _UICollectionViewDragDestinationController, NSArray, _UICollectionViewPlaceholderContext, NSUUID;
@protocol UIDropSession;

@interface _UICollectionViewDragAndDropController : _UICollectionViewShadowUpdatesController <_UICollectionViewPlaceholderContextDelegate, _UICollectionViewDragSourceControllerDelegate, _UICollectionViewDragDestinationControllerDelegate, _UICollectionViewDropCoordinator, UICollectionViewDropCoordinator>

@property (retain, nonatomic) NSMutableArray *_reorderedItems;
@property (retain, nonatomic) _UICollectionViewPlaceholderContext *currentlyInsertingPlaceholderContext;
@property (retain, nonatomic) NSMutableDictionary *placeholderContextsByIndexPath;
@property (retain, nonatomic) NSMutableSet *placeholderContexts;
@property (retain, nonatomic) NSMutableDictionary *cellAppearanceStatesByIndexPaths;
@property (retain, nonatomic) NSMapTable *cellAppearanceStatesByCellPointers;
@property (retain, nonatomic) NSMutableArray *dropCoordinatorItems;
@property (retain, nonatomic) NSMapTable *dropCoordinatorItemsMap;
@property (retain, nonatomic) NSMutableSet *cellsDeferredForReuse;
@property (nonatomic) long long sessionRefCount;
@property (retain, nonatomic) _UIDropAnimationHandlers *defaultAnimationHandlers;
@property (retain, nonatomic) NSUUID *currentDropInsertionShadowUpdateIdentifier;
@property (nonatomic) int sessionKind;
@property (retain, nonatomic) _UICollectionViewDragDestinationController *destinationController;
@property (retain, nonatomic) _UICollectionViewDragSourceController *sourceController;
@property (readonly, nonatomic) unsigned long long reorderedItemCount;
@property (readonly, nonatomic) NSArray *reorderedItems;
@property (readonly, nonatomic) unsigned long long reorderingCapabilities;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UICollectionViewDropProposal *dropProposal;
@property (readonly, nonatomic) id<UIDropSession> dropSession;
@property (readonly, nonatomic) NSArray *items;
@property (readonly, nonatomic) NSIndexPath *destinationIndexPath;
@property (readonly, nonatomic) UICollectionViewDropProposal *proposal;
@property (readonly, nonatomic) id<UIDropSession> session;

- (long long)numberOfSections;
- (void)transferOwnershipOfCellForDeferredReuseAfterDropAnimations:(id)a0;
- (void)rebaseCellAppearanceStatesWithUpdateMap:(id)a0;
- (void)_addAnimationHandlers:(id)a0 toAnimator:(id)a1;
- (void)didRebaseWithNewBaseUpdateMap:(id)a0;
- (void)dragSourceController:(id)a0 didCompleteLiftForItemsAtIndexPaths:(id)a1;
- (void)_rollbackCurrentDropInsertion;
- (long long)numberOfItemsInSection:(long long)a0;
- (id)dropToPlaceholderInsertedAtIndexPath:(id)a0 reuseIdentifier:(id)a1 forDragItem:(id)a2 cellUpdateHandler:(id /* block */)a3;
- (id)_shadowUpdateReuseIdentifierForItemItemAtIndexPath:(id)a0;
- (void)_addDropCoordinatorItem:(id)a0;
- (void)_updateCellAppearanceForCell:(id)a0 appearance:(long long)a1;
- (BOOL)_shouldPerformTranslationForDelegateBasedFlowLayoutSizing;
- (id)indexPathForDragAndDropInsertion;
- (void)_removeAnyDeferredReuseCells;
- (void)dragSourceController:(id)a0 didEndForItemsAtIndexPaths:(id)a1;
- (id)dropItem:(id)a0 toTarget:(id)a1;
- (void)_beginDragAndDropInsertingItemAtIndexPath:(id)a0;
- (void)_shadowUpdatesWereReverted;
- (id)indexPathForCurrentReorderedItem;
- (void)dragSourceController:(id)a0 didUpdateItemCountOfSelectedItems:(long long)a1;
- (id)initWithCollectionView:(id)a0;
- (void)_updateCellIfNeeded:(id)a0 atIndexPath:(id)a1;
- (void)dragDestinationControllerSessionWillBegin:(id)a0;
- (id)dataSourceIndexPathForPresentationIndexPath:(id)a0;
- (id)dropItem:(id)a0 intoItemAtIndexPath:(id)a1 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (BOOL)placeholderContext:(id)a0 didCommitInsertionWithDataSourceUpdates:(id /* block */)a1;
- (void)_updateAppearanceForCell:(id)a0 atIndexPath:(id)a1 appearance:(long long)a2;
- (void)_performCancelDropToIndexPath:(id)a0 forDragItem:(id)a1;
- (int)_determineSessionKind;
- (id /* block */)cancelReordering;
- (void)_cleanupAfterOutstandingSessionCompletion;
- (void)dragDestinationController:(id)a0 didCompleteDropAnimationForDragItem:(id)a1;
- (BOOL)isCellPerformingLegacyReorderingAtIndexPath:(id)a0;
- (id)dropItem:(id)a0 toItemAtIndexPath:(id)a1;
- (void)_invokeAllCompletionHandlers;
- (id)_indexPathForCellAppearanceState:(id)a0;
- (void)_updateCellAppearancesForItemsAtIndexPaths:(id)a0;
- (id)dropItem:(id)a0 toPlaceholder:(id)a1;
- (id)insertPlaceholderForItemAtIndexPath:(id)a0 forDragItem:(id)a1 reuseIdentifier:(id)a2 cellUpdateHandler:(id /* block */)a3;
- (void)dragSourceController:(id)a0 didUpdateItemsAtIndexPaths:(id)a1;
- (void)_resetReorderedItems;
- (void)dropToItemAtIndexPath:(id)a0 forDragItem:(id)a1;
- (void)dragSourceController:(id)a0 didCancelLiftForItemsAtIndexPaths:(id)a1;
- (id)dropItem:(id)a0 toPlaceholderInsertedAtIndexPath:(id)a1 withReuseIdentifier:(id)a2 cellUpdateHandler:(id /* block */)a3;
- (void).cxx_destruct;
- (BOOL)_hasReorderingMoved;
- (void)dropToLocation:(struct CGPoint { double x0; double x1; })a0 inContainerView:(id)a1 withTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2 forDragItem:(id)a3;
- (BOOL)hasShadowUpdates;
- (BOOL)_removeMoveShadowUpdateMatchingReorderedItem:(id)a0;
- (void)dragSourceController:(id)a0 willEndForItemsAtIndexPaths:(id)a1 withDropOperation:(unsigned long long)a2;
- (BOOL)beginReorderingForItemAtIndexPath:(id)a0 cell:(id)a1;
- (id)_cellForDropCoordinatorItem:(id)a0;
- (id)presentationIndexPathForDataSourceIndexPath:(id)a0;
- (id)_cellAppearanceStateForCell:(id)a0 addIfNotFound:(BOOL)a1;
- (void)dragDestinationController:(id)a0 didPerformDropAtIndexPath:(id)a1;
- (void)dragSourceController:(id)a0 didSupplyCancellationPreviewForItemAtIndexPath:(id)a1;
- (id /* block */)endReordering;
- (BOOL)_isReordering;
- (id)placeholderContextDidDismiss:(id)a0;
- (BOOL)updateWillCauseInternalInconsistency:(id)a0;
- (BOOL)isDragDestinationInteractivelyReordering;
- (BOOL)cancelReorderingShouldRevertOrdering;
- (void)_resetAnyDragStateModifiedVisibleCells;
- (id)_cellAppearanceStateForIndexPath:(id)a0;
- (void)_resetAllAnimationHandlers;
- (id)_dropCoordinatorItemForIndexPath:(id)a0;
- (void)dragSourceController:(id)a0 willBeginAnimatingCancelForItemsAtIndexPaths:(id)a1 withAnimator:(id)a2;
- (void)dragSourceController:(id)a0 willBeginLiftForItemsAtIndexPaths:(id)a1;
- (void)placeholderContextNeedsCellUpdate:(id)a0;
- (id)sourceIndexPaths;
- (id)_dropCoordinatorItemForDragItem:(id)a0;
- (BOOL)cellShouldRemainInHierarchy:(id)a0 indexPath:(id)a1;
- (void)dragSourceControllerSessionWillBegin:(id)a0;
- (void)_beginReorderingForItemAtIndexPath:(id)a0 cell:(id)a1;
- (void)updateReorderingTargetIndexPath:(id)a0;
- (id)_presentationIndexPathForIndexPath:(id)a0 allowingAppendingInserts:(BOOL)a1;
- (void)dragDestinationController:(id)a0 willPerformDropAtIndexPath:(id)a1;
- (void)reset;
- (BOOL)_deleteShadowUpdateWithIdentifier:(id)a0;
- (void)updateAppearanceForCell:(id)a0 atIndexPath:(id)a1;
- (void)dragDestinationController:(id)a0 willBeginDropAnimationForDragItem:(id)a1 animator:(id)a2;
- (void)_decrementSessionRefCount;
- (long long)_determineAppearanceForItemAtIndexPath:(id)a0;
- (void)dragSourceController:(id)a0 didCompleteAnimatingCancelForItemsAtIndexPaths:(id)a1;
- (void)_updateReorderedCellStatesRemovingFromViewHierarchyIfRequired;
- (id)dropToPlaceholderCellAtIndexPath:(id)a0 reuseIdentifier:(id)a1 forDragItem:(id)a2 cellUpdateHandler:(id /* block */)a3;
- (void)_incrementSessionRefCount;
- (void)dragDestinationControllerSessionDidEnd:(id)a0;
- (id)placeholderContextForDragItem:(id)a0;
- (void)dragDestinationControllerDidConcludeDrop:(id)a0;
- (id)indexPathForOriginalReorderedItem;
- (void)dropToTarget:(id)a0 forDragItem:(id)a1;

@end
