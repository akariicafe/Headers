@class UIView, PKSelectionController, NSOrderedSet, PKSpaceInsertionView, PKDrawing, PKStroke, UIPanGestureRecognizer, PKImageView, NSMutableOrderedSet, PKStrokeSelection;

@interface PKSpaceInsertionController : NSObject {
    NSMutableOrderedSet *_strokesBelow;
    NSMutableOrderedSet *_strokesAbove;
    UIView *_tapToDismissView;
    PKSpaceInsertionView *_topInsertionView;
    PKSpaceInsertionView *_bottomInsertionView;
    struct CGPoint { double x; double y; } _beginDragLocation;
    struct CGPoint { double x; double y; } _initialViewLocation;
    UIPanGestureRecognizer *_dragTopLollipopGR;
    UIPanGestureRecognizer *_dragBottomLollipopGR;
    PKStrokeSelection *_bottomStrokeSelection;
    PKStrokeSelection *_topStrokeSelection;
    PKImageView *_topImageView;
    PKImageView *_bottomImageView;
    BOOL _topHandleRemovesWhitespace;
    PKStrokeSelection *_strokeSelectionBeforeInsertingSpace;
    long long _selectionTypeBeforeInsertingSpace;
    PKStrokeSelection *_cachedStrokeSelection;
    NSOrderedSet *_cachedStrokesBelow;
    NSOrderedSet *_cachedStrokesAbove;
    BOOL _shouldUseCachedStrokes;
    BOOL _insertSpaceAffordancePanDidEnd;
}

@property (nonatomic) BOOL isCurrentlyAddingSpace;
@property (retain, nonatomic) PKStroke *lassoStroke;
@property (retain, nonatomic) PKDrawing *drawing;
@property (readonly, weak, nonatomic) PKSelectionController *selectionController;
@property (readonly, nonatomic) BOOL didMoveStrokes;
@property (copy, nonatomic) NSOrderedSet *externalElements;

- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)didScroll:(struct CGPoint { double x0; double x1; })a0;
- (void)_addSpacingViewsWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_blitStrokesToViewForSpaceInsertionType:(unsigned long long)a0 withCompletion:(id /* block */)a1;
- (void)_didEndCreatingSpace;
- (void)_didGrabInsertSpaceAffordance:(id)a0;
- (void)_dismissHandlesAndReselectExistingSelectionInDrawing:(id)a0;
- (void)_dismissSpacingResizeHandles;
- (void)_dragLollipop:(id)a0;
- (double)_initalBufferBetweenLollipops;
- (void)_layoutViewsIfNecessary;
- (void)_makeSpaceWithOffset:(double)a0 spaceInsertionType:(unsigned long long)a1;
- (void)_panGestureDidBegin:(id)a0;
- (void)_panGestureDidCancelOrFail:(id)a0;
- (void)_panGestureDidChange:(id)a0;
- (void)_panGestureDidEnd:(id)a0;
- (void)_sortStrokesAboveOrBelowWithStrokesAbove:(id)a0 strokesBelow:(id)a1;
- (void)_temporarilyShiftStrokesWithOffset:(double)a0 spaceInsertionType:(unsigned long long)a1;
- (id)_visibleStrokesOnPage:(id)a0;
- (void)commitSpacingResize;
- (void)didBeginCreatingSpaceWithLassoStroke:(id)a0 drawing:(id)a1 addDefaultSpace:(BOOL)a2 strokesAbove:(id)a3 strokesBelow:(id)a4 externalElements:(id)a5;
- (void)fetchStrokesAmbiguouslyBelowAndAboveInsertSpaceHandleWithStrokes:(id)a0 inDrawing:(id)a1 completion:(id /* block */)a2;
- (void)initTopAndBottomSelectionIfNecessary;
- (id)initWithSelectionController:(id)a0;
- (void)insertDefaultSpace:(double)a0;
- (void)invalidateCachedStrokes;
- (double)offsetInStrokeSpaceFromViewOffset:(double)a0 inDrawing:(id)a1;
- (void)projectPath:(struct CGPath { } *)a0 toEndOfFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)shiftStrokesWithOffset:(double)a0;

@end
