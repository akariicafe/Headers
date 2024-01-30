@class NSUUID, NSString, PKSpaceInsertionController, UIDropInteraction, PKSelectionView, PKTranscriptionController, PKTiledView, NSObject, PKSelectionGestureView, PKStrokeSelection;
@protocol OS_dispatch_queue;

@interface PKSelectionController : NSObject <UIDropInteractionDelegate_Private, PKSelectionRenderingDelegate, PKSelectionObserving> {
    struct CGPoint { double x; double y; } _dropPosition;
    NSUUID *_previousDrawingUUIDForSelection;
    int _selectionViewCount;
    long long _currentIntersectionAlgorithm;
    PKTranscriptionController *_transcriptionController;
    NSObject<OS_dispatch_queue> *_intersectionQueue;
    NSObject<OS_dispatch_queue> *_selectionHullQueue;
    id /* block */ _intersectStrokesBetweenLollipopBlock;
    UIDropInteraction *_dropInteraction;
    BOOL _isChangingColor;
    id /* block */ _deferredChangingColorBlock;
    BOOL _hasCurrentSelection;
    BOOL _isClearingSelection;
    BOOL _insertSpaceEnabled;
    BOOL _isCurrentlyAddingSpace;
    PKTiledView *_tiledView;
    PKStrokeSelection *_currentStrokeSelection;
    PKSpaceInsertionController *_spaceInsertionController;
    PKSelectionView *_selectionView;
    PKSelectionGestureView *_selectionGestureView;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } _selectionTransform;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *selectionHullQueue;

- (BOOL)isRTL;
- (id)dropInteraction:(id)a0 previewForDroppingItem:(id)a1 withDefault:(id)a2;
- (long long)_dropInteraction:(id)a0 dataOwnerForSession:(id)a1;
- (BOOL)dropInteraction:(id)a0 canHandleSession:(id)a1;
- (id)dropInteraction:(id)a0 sessionDidUpdate:(id)a1;
- (struct CGColor { } *)selectionColor;
- (void)dropInteraction:(id)a0 sessionDidEnter:(id)a1;
- (void)dropInteraction:(id)a0 sessionDidExit:(id)a1;
- (void)dropInteraction:(id)a0 performDrop:(id)a1;
- (void).cxx_destruct;
- (void)didEndScroll;
- (void)dealloc;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformFromStrokeSpaceToViewInDrawing:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })attachmentBoundsForDrawing:(id)a0;
- (double)scaleForDrawing:(id)a0;
- (id)_firstStrokesInStrokes:(id)a0;
- (id)_lastStrokesInStrokes:(id)a0;
- (long long)currentIntersectionAlgorithm;
- (void)didBeginModifyDrawing;
- (void)didEndModifyDrawing;
- (void)didSelectStrokesNotification:(id)a0;
- (void)didSelect:(id)a0 lassoStroke:(id)a1 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2 drawing:(id)a3 selectionType:(long long)a4 completion:(id /* block */)a5;
- (void)didSelect:(id)a0 lassoStroke:(id)a1 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2 drawing:(id)a3;
- (void)_addItemsToPasteboard:(id)a0;
- (void)didBeginSpaceInsertionWithLassoStroke:(id)a0 drawing:(id)a1 addDefaultSpace:(BOOL)a2 strokesAbove:(id)a3 strokesBelow:(id)a4 externalElements:(id)a5;
- (id)selectionHullQueue;

@end
