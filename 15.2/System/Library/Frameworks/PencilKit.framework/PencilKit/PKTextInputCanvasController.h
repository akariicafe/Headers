@class UIColor, NSString, NSMutableDictionary, NSMutableSet, PKTextInputFloatingBackgroundView, PKStroke, PKTiledCanvasView;
@protocol PKTextInputCanvasControllerChangeObserver, PKTextInputCanvasControllerDelegate;

@interface PKTextInputCanvasController : NSObject <PKTiledCanvasViewDelegate, PKTextInputDebugStateReporting> {
    NSMutableSet *_recentlyRemovedStrokeIDs;
    BOOL _useSlidingCanvas;
    struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint *__begin_; struct CGPoint *__end_; struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { struct CGPoint *__value_; } __end_cap_; } _currentStrokePoints;
    NSMutableDictionary *_strokeColorForStrokeUUID;
    PKStroke *_currentStroke;
    BOOL _wantsCanvasVisible;
    BOOL _wantsCanvasViewLoaded;
    id<PKTextInputCanvasControllerDelegate> _delegate;
    id<PKTextInputCanvasControllerChangeObserver> _changeObserver;
    UIColor *_strokeColor;
    PKTiledCanvasView *__canvasView;
    PKTextInputFloatingBackgroundView *__floatingBackgroundView;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _floatingBackgroundRect;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (void)reportDebugStateDescription:(id /* block */)a0;
- (void)canvasViewDidBeginDrawing:(id)a0;
- (void)canvasViewDidEndDrawing:(id)a0;
- (void)canvasView:(id)a0 beganStroke:(id)a1;
- (void)canvasView:(id)a0 endedStroke:(id)a1;
- (void)canvasView:(id)a0 cancelledStroke:(id)a1;
- (void)canvasViewWillBeginNewStroke:(id)a0 withTouch:(id)a1;
- (void)canvasView:(id)a0 drawingDidChange:(id)a1;
- (void)canvasViewDrawingMoved:(id)a0 withTouch:(id)a1;
- (void)canvasViewDidFinishAnimatingStrokes:(id)a0;
- (void)canvasViewHasVisibleStrokesChanged:(id)a0;
- (id)canvasViewTouchView:(id)a0;
- (void)canvasView:(id)a0 didPresentWithCanvasOffset:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)canvasViewShouldDisableShapeRecognition:(id)a0;
- (void)replayCanvasViewDrawingMoved:(id)a0 inputPoint:(struct { struct CGPoint { double x0; double x1; } x0; double x1; double x2; double x3; double x4; double x5; BOOL x6; long long x7; double x8; BOOL x9; })a1;
- (id)canvasView:(id)a0 inkForStroke:(id)a1;

@end
