@class NSString, UIMultiSelectInteraction, UICollectionView, UIMultiSelectInteractionState;

@interface _UICollectionViewMultiSelectController : NSObject <UIMultiSelectInteractionDelegate> {
    long long _computedAxisConstraint;
}

@property (weak, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIMultiSelectInteraction *multiSelectInteraction;
@property (retain, nonatomic) UIMultiSelectInteractionState *selectionState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)automaticallyTransitionToMultiSelectModeKeepingCurrentSelection:(BOOL)a0;
- (id)_indexPathsWithinRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)uninstallFromCollectionView;
- (void)updateSelectedIndexPaths:(id)a0;
- (BOOL)multiSelectInteractionGestureShouldPreventDragLiftGesture:(id)a0;
- (id)_collectionViewDelegate;
- (void)_selectIndexPaths:(id)a0;
- (BOOL)shouldAllowSelectionExtensionAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithCollectionView:(id)a0;
- (long long)axisConstraintAtIndexPath:(id)a0;
- (BOOL)supportsKeyboardSelectionExtension;
- (id)keyCommandsForSelectionExtension;
- (BOOL)_shouldBeginInteractionAtIndexPath:(id)a0;
- (BOOL)_allowsBandSelectionStartingAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)_boundingScrollViewForIndexPath:(id)a0;
- (BOOL)shouldAllowSelectionExtensionAtIndexPath:(id)a0;
- (void)didEndMultiSelectInteraction:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (id)indexPathsBetweenIndexPath:(id)a0 andIndexPath:(id)a1;
- (BOOL)_testTouchPolicyAtPoint:(struct CGPoint { double x0; double x1; })a0 withVelocity:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)supportsMultiSelectInteraction:(id)a0;
- (BOOL)_point:(struct CGPoint { double x0; double x1; })a0 liesBeyondFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inDirection:(double)a2;
- (void)multiSelectInteraction:(id)a0 appendSelectionAtPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)didCancelMultiSelectInteraction:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)_extendSelectionToPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)selectedIndexPathsChanged:(id)a0;
- (id)selectionStartIndexPath;
- (void)multiSelectInteraction:(id)a0 selectItemsWithinRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 leadingPoint:(struct CGPoint { double x0; double x1; })a2;
- (void).cxx_destruct;
- (void)multiSelectInteraction:(id)a0 extendSelectionInDirection:(unsigned long long)a1;
- (BOOL)isInMultiSelectMode;
- (BOOL)_allowsPanningAcrossConstrainedAxisToBeginMultiSelectInteractionAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)childScrollViewAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)interaction:(id)a0 shouldAutomaticallyTransitionToMultiSelectModeAtPoint:(struct CGPoint { double x0; double x1; })a1 withVelocity:(struct CGPoint { double x0; double x1; })a2;
- (void)_autoScrollAtIndexPaths:(id)a0 fromPoint:(struct CGPoint { double x0; double x1; })a1;
- (long long)axisConstraintAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)_antecedentIndexPathsForLayoutAttributes:(id)a0 inDirection:(double)a1;
- (void)willBeginMultiSelectInteraction:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (long long)axisConstraintForSingleFingerPanGestureAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_deselectIndexPaths:(id)a0;
- (void)clearSelectionState;
- (void)dealloc;
- (long long)_hitTestForSystemEditControlAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)targetForKeyCommands;
- (BOOL)shouldBeginMultiSelectInteraction:(id)a0 ofType:(long long)a1 atPoint:(struct CGPoint { double x0; double x1; })a2 withVelocity:(struct CGPoint { double x0; double x1; })a3;
- (void)multiSelectInteraction:(id)a0 toggleSelectionStateUpToPoint:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)multiSelectInteraction:(id)a0 shouldStartBandSelectionAtPoint:(struct CGPoint { double x0; double x1; })a1;
- (id)_autoScrollAssistantForIndexPaths:(id)a0;
- (BOOL)_shouldBeginInteractionAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)selectionEndIndexPath;
- (BOOL)_isUsingTableLayoutSPI;
- (void)multiSelectInteraction:(id)a0 toggleSelectionWithinRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 leadingPoint:(struct CGPoint { double x0; double x1; })a2;

@end
