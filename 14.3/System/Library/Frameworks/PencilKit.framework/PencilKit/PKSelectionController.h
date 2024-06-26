@class PKStrokeSelection, PKSelectionInteraction, PKSelectionView, NSString, NSUUID, UIDropInteraction, PKTranscriptionController, NSObject, PKTiledView, PKSelectionGestureView, PKSpaceInsertionController;
@protocol OS_dispatch_queue;

@interface PKSelectionController : NSObject <UIDropInteractionDelegate_Private, PKSelectionRenderingDelegate, PKSelectionObserving> {
    struct CGPoint { double x; double y; } _dropPosition;
    NSUUID *_previousDrawingUUIDForSelection;
    int _selectionViewCount;
    long long _currentIntersectionAlgorithm;
    PKTranscriptionController *_transcriptionController;
    NSObject<OS_dispatch_queue> *_intersectionQueue;
    id /* block */ _intersectStrokesBetweenLollipopBlock;
    UIDropInteraction *_dropInteraction;
    BOOL _isChangingColor;
    id /* block */ _deferredChangingColorBlock;
}

@property (retain, nonatomic) PKSpaceInsertionController *spaceInsertionController;
@property (weak, nonatomic) PKTiledView *tiledView;
@property (nonatomic) BOOL hasCurrentSelection;
@property (readonly, nonatomic) BOOL isClearingSelection;
@property (readonly, nonatomic) BOOL shouldClampInputPoints;
@property (retain, nonatomic) PKStrokeSelection *currentStrokeSelection;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } selectionTransform;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *selectionHullQueue;
@property (readonly, nonatomic) PKSelectionInteraction *selectionInteraction;
@property (nonatomic) BOOL insertSpaceEnabled;
@property (nonatomic) BOOL isCurrentlyAddingSpace;
@property (retain, nonatomic) PKSelectionView *selectionView;
@property (readonly, nonatomic) PKSelectionGestureView *selectionGestureView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_selectStrandedBitmapStrokesForIntersectedStrokesIfNecessary:(id)a0 visibleOnscreenStrokes:(id)a1;
+ (id)_orderedStrokes:(id)a0 relativeToStrokeOrderInDrawing:(id)a1;

- (void)cut:(id)a0;
- (void)selectAll:(id)a0;
- (void)paste:(id)a0;
- (BOOL)dropInteraction:(id)a0 canHandleSession:(id)a1;
- (void)dropInteraction:(id)a0 performDrop:(id)a1;
- (void)dropInteraction:(id)a0 sessionDidExit:(id)a1;
- (id)topView;
- (BOOL)isRTL;
- (void)copy:(id)a0;
- (long long)_dropInteraction:(id)a0 dataOwnerForSession:(id)a1;
- (void)dropInteraction:(id)a0 sessionDidEnter:(id)a1;
- (void)delete:(id)a0;
- (id)dropInteraction:(id)a0 previewForDroppingItem:(id)a1 withDefault:(id)a2;
- (id)dropInteraction:(id)a0 sessionDidUpdate:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (struct CGColor { } *)selectionColor;
- (void)didScroll:(struct CGPoint { double x0; double x1; })a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_selectionDrawingTransformForDrawing:(id)a0;
- (void)clearSelectionIfNecessaryWithCompletion:(id /* block */)a0;
- (void)generateImageForStrokeSelection:(id)a0 scaleStrategy:(long long)a1 withCompletion:(id /* block */)a2;
- (void)duplicate:(id)a0;
- (void)copyTranscription:(id)a0;
- (void)insertSpace:(id)a0;
- (void)insertSpaceAtPoint:(struct CGPoint { double x0; double x1; })a0 addDefaultSpace:(BOOL)a1 strokesAbove:(id)a2 strokesBelow:(id)a3;
- (id)_drawingForSelectionRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didBeginDraggingSelection;
- (struct CGPoint { double x0; double x1; })autoscrollForPointIfNecessary:(struct CGPoint { double x0; double x1; })a0;
- (void)didEndDraggingSelection;
- (BOOL)_isValidDropPointForStrokes:(struct CGPoint { double x0; double x1; })a0 didInsertNewAttachment:(BOOL *)a1;
- (void)didMoveStrokeSelectionToLocation:(struct CGPoint { double x0; double x1; })a0 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1;
- (void)selectStrokes:(id)a0 forSelectionType:(long long)a1 inDrawing:(id)a2;
- (void)fetchStrokesToSelectAtPoint:(struct CGPoint { double x0; double x1; })a0 inDrawing:(id)a1 withSelectionType:(long long)a2 inputType:(long long)a3 existingSelection:(id)a4 completion:(id /* block */)a5;
- (void)findTranscriptionWithCompletion:(id /* block */)a0;
- (id)initWithTiledView:(id)a0;
- (void)clearSelectionIfNecessary;
- (void)changeColorOfSelection:(id)a0;
- (id)_drawingForMenuController:(id)a0;
- (void)_layoutViewsIfNecessary;
- (void)updateCurrentSelectionWithNewDrawingIfNecessary:(id)a0;
- (BOOL)didResizeWhitespace;
- (void)commitSpacingResize;
- (void)_didAddDrawingAttachmentView;
- (void)_selectionRefreshWithChangeToDrawings:(id)a0 completion:(id /* block */)a1;
- (void)applyCommand:(id)a0 toDrawing:(id)a1;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformFromStrokeSpaceToViewInDrawing:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })selectedStrokesViewClipRectForDrawing:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsForDrawing:(id)a0;
- (BOOL)_isValidDropPointForStrokes:(struct CGPoint { double x0; double x1; })a0;
- (void)_setAdditionalStrokes:(id)a0 inDrawing:(id)a1 completion:(id /* block */)a2;
- (void)_resetSelectedStrokeStateForRenderer;
- (double)scaleForDrawing:(id)a0;
- (id)_firstStrokesInStrokes:(id)a0;
- (id)_lastStrokesInStrokes:(id)a0;
- (long long)currentIntersectionAlgorithm;
- (void)didBeginModifyDrawing;
- (void)didEndModifyDrawing;
- (void)lassoSelectStrokesInDrawing:(id)a0 withPath:(id)a1;
- (void)didBeginSpaceInsertionWithLassoPath:(id)a0 atLocation:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)_liveDrawingIsAtEndOfDocument;
- (void)selectStrokes:(id)a0 forSelectionType:(long long)a1 inDrawing:(id)a2 completion:(id /* block */)a3;
- (long long)contentTypeForIntersectedStrokes:(id)a0 inDrawing:(id)a1;
- (id)_visibleOnscreenStrokesForDrawing:(id)a0;
- (void)clearSelectionIfNecessaryAnimated:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)fetchStrokesToSelectBetweenTopPoint:(struct CGPoint { double x0; double x1; })a0 bottomPoint:(struct CGPoint { double x0; double x1; })a1 inDrawing:(id)a2 liveScrollOffset:(struct CGPoint { double x0; double x1; })a3 existingSelection:(id)a4 completion:(id /* block */)a5;
- (void)didSelectStrokesNotification:(id)a0;
- (id)setupSpaceInsertionControllerIfNecessary;
- (id)_visibleOnscreenStrokesIncludingCurrentSelection:(id)a0 forDrawing:(id)a1;
- (void)_findIntersectedStrokesWithoutRecognitionToSelectBetweenTopPoint:(struct CGPoint { double x0; double x1; })a0 bottomPoint:(struct CGPoint { double x0; double x1; })a1 inDrawing:(id)a2 visibleOnscreenStrokes:(id)a3 completion:(id /* block */)a4;
- (void)didSelect:(id)a0 lassoStroke:(id)a1 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2 drawing:(id)a3 selectionType:(long long)a4 completion:(id /* block */)a5;
- (void)_selectionBeganInDrawing:(id)a0 withPath:(id)a1;
- (id)_strokeForLassoPath:(id)a0 inDrawing:(id)a1;
- (void)didSelect:(id)a0 lassoStroke:(id)a1 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2 drawing:(id)a3;
- (void)moveSelectionViewBasedOnStrokeTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 drawing:(id)a1;
- (void)_addViewForStrokeSelection:(id)a0 isDragSource:(BOOL)a1 drawing:(id)a2 selectionType:(long long)a3 withCompletion:(id /* block */)a4;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_calculateFrameForSelectionView:(id)a0 inDrawing:(id)a1;
- (void)_removeSelectionViewAnimated:(BOOL)a0 withCompletion:(id /* block */)a1;
- (id)cachedImageConfigForSelection:(id)a0 scaleStrategy:(long long)a1;
- (id)_commitStrokeSelection:(id)a0 toDrawing:(id)a1 selectionAction:(long long)a2 inkChanges:(id)a3 selectionType:(long long)a4 withCompletion:(id /* block */)a5;
- (id)newStrokesForSelection:(id)a0 toDrawing:(id)a1;
- (void)registerCommandWithUndoManager:(id)a0;
- (id)_newInk:(id)a0 withChange:(id)a1;
- (id)drawingForUUID:(id)a0;
- (void)_selectionRefreshWithChangeToDrawings:(id)a0;
- (void)_removeSelectionView;
- (void)_refreshTiledViewWithSelectionForDrawing:(id)a0 completion:(id /* block */)a1;
- (void)eraseSelection;
- (void)_addItemsToPasteboard:(id)a0;
- (void)_pasteStrokeSelection:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1 inDrawing:(id)a2 withSelectionType:(long long)a3;
- (struct CGSize { double x0; double x1; })viewSizeForStrokeSelection:(id)a0;
- (struct CGPoint { double x0; double x1; })closestPointForPastedSelectionRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withDrawing:(id *)a1;
- (void)changeColorOfSelection:(id)a0 withCompletion:(id /* block */)a1;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_selectionTransformForStrokes:(id)a0 atLocation:(struct CGPoint { double x0; double x1; })a1 dragOffsetInDragView:(struct CGPoint { double x0; double x1; })a2 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a3 constrainSelection:(BOOL)a4 inDrawing:(id)a5;
- (id)_commitStrokeSelection:(id)a0 toDrawing:(id)a1 selectionAction:(long long)a2 selectionType:(long long)a3;
- (void)_createSelectionViewForDropSession:(id)a0 removeFromSource:(BOOL)a1 withStrokeSelection:(id)a2;
- (struct CGPoint { double x0; double x1; })_pointInStrokeSpace:(struct CGPoint { double x0; double x1; })a0 inDrawing:(id)a1;
- (void)didBeginSpaceInsertionWithLassoStroke:(id)a0 drawing:(id)a1 addDefaultSpace:(BOOL)a2 strokesAbove:(id)a3 strokesBelow:(id)a4;
- (id)strokeForInsertSpaceAtPoint:(struct CGPoint { double x0; double x1; })a0 inDrawing:(id)a1;
- (void)_createSelectionViewForDropSession:(id)a0 removeFromSource:(BOOL)a1;
- (void)updateCurrentStrokeSelectionTransformForLocation:(id)a0 atLocation:(struct CGPoint { double x0; double x1; })a1 offsetInTouchView:(struct CGPoint { double x0; double x1; })a2 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_scrollViewDrawingFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_extendedBoundsForDrawing:(id)a0;
- (struct CGPoint { double x0; double x1; })_scrollContent:(struct CGPoint { double x0; double x1; })a0;
- (id)_attachmentForSelectionRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)addTranscriptionToPasteboard:(id)a0;
- (void)fetchStrokesToSelectAtPoint:(struct CGPoint { double x0; double x1; })a0 inDrawing:(id)a1 withSelectionType:(long long)a2 inputType:(long long)a3 completion:(id /* block */)a4;
- (void)setImageOnSelectionViewForStrokeSelection:(id)a0 withCompletion:(id /* block */)a1;
- (id)_rotateImageIfNecessary:(id)a0;
- (BOOL)needsToClearSelection;
- (void)commitStrokesWithCompletion:(id /* block */)a0;
- (id)applySpaceInsertionWithStrokeSelection:(id)a0 inDrawing:(id)a1 offset:(double)a2 completion:(id /* block */)a3;
- (void)hideStrokes:(id)a0 inDrawing:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_scrollViewVisibleBounds;
- (id)_visibleStrokesWithinExtendedBounds:(id)a0 forDrawing:(id)a1;
- (struct CGPoint { double x0; double x1; })_selectionOffsetForDrawing:(id)a0;

@end
