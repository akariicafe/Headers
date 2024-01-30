@class NSString, UIMultiSelectInteraction, UICollectionView, UIMultiSelectInteractionState;

@interface _UICollectionViewMultiSelectController : NSObject <UIMultiSelectInteractionDelegate> {
    unsigned long long _computedAxisConstraint;
}

@property (weak, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIMultiSelectInteraction *multiSelectInteraction;
@property (retain, nonatomic) UIMultiSelectInteractionState *selectionState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldAllowSelectionExtensionAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithCollectionView:(id)a0;
- (id)selectionStartIndexPath;
- (void).cxx_destruct;
- (BOOL)multiSelectInteractionGestureShouldPreventDragLiftGesture:(id)a0;
- (id)selectionEndIndexPath;
- (void)dealloc;
- (void)_extendSelectionToPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)_point:(struct CGPoint { double x0; double x1; })a0 liesBeyondFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inDirection:(double)a2;
- (BOOL)_shouldBeginInteractionAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)isInMultiSelectMode;
- (BOOL)shouldBeginMultiSelectInteraction:(id)a0 ofType:(long long)a1 atPoint:(struct CGPoint { double x0; double x1; })a2 withVelocity:(struct CGPoint { double x0; double x1; })a3;
- (BOOL)shouldAllowSelectionExtensionAtIndexPath:(id)a0;
- (BOOL)_isUsingTableLayoutSPI;
- (id)_collectionViewDelegate;
- (unsigned long long)_hitTestForSystemEditControlAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)_antecedentIndexPathsForLayoutAttributes:(id)a0 inDirection:(double)a1;
- (id)indexPathsBetweenIndexPath:(id)a0 andIndexPath:(id)a1;
- (BOOL)_shouldBeginInteractionAtIndexPath:(id)a0;
- (BOOL)interaction:(id)a0 shouldAutomaticallyTransitionToMultiSelectModeAtPoint:(struct CGPoint { double x0; double x1; })a1 withVelocity:(struct CGPoint { double x0; double x1; })a2;
- (void)didEndMultiSelectInteraction:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)_deselectIndexPaths:(id)a0;
- (BOOL)supportsMultiSelectInteraction:(id)a0;
- (void)automaticallyTransitionToMultiSelectModeKeepingCurrentSelection:(BOOL)a0;
- (void)multiSelectInteraction:(id)a0 toggleSelectionStateUpToPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)_selectIndexPaths:(id)a0;
- (void)uninstallFromCollectionView;
- (void)updateSelectedIndexPaths:(id)a0;
- (void)selectedIndexPathsChanged:(id)a0;
- (void)multiSelectInteraction:(id)a0 appendSelectionAtPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)willBeginMultiSelectInteraction:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)didCancelMultiSelectInteraction:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (unsigned long long)axisConstraint;

@end
