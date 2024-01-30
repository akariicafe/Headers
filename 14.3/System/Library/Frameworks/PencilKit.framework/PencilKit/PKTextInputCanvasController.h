@class NSString, NSSet, NSMutableDictionary, PKTextInputFloatingBackgroundView, NSMutableSet, PKTiledCanvasView, PKStroke, UIColor;
@protocol PKTextInputCanvasControllerChangeObserver, UICoordinateSpace, PKTextInputCanvasControllerDelegate;

@interface PKTextInputCanvasController : NSObject <PKTiledCanvasViewDelegate, PKTextInputDebugStateReporting> {
    NSMutableSet *_recentlyRemovedStrokeIDs;
    BOOL _useSlidingCanvas;
    struct vector<CGPoint, std::__1::allocator<CGPoint> > { struct CGPoint *__begin_; struct CGPoint *__end_; struct __compressed_pair<CGPoint *, std::__1::allocator<CGPoint> > { struct CGPoint *__value_; } __end_cap_; } _currentStrokePoints;
    NSMutableDictionary *_strokeColorForStrokeUUID;
    PKStroke *_currentStroke;
}

@property (retain, nonatomic) PKTiledCanvasView *_canvasView;
@property (retain, nonatomic) PKTextInputFloatingBackgroundView *_floatingBackgroundView;
@property (retain, nonatomic, setter=_setStrokeColor:) UIColor *strokeColor;
@property (weak, nonatomic) id<PKTextInputCanvasControllerDelegate> delegate;
@property (weak, nonatomic) id<PKTextInputCanvasControllerChangeObserver> changeObserver;
@property (nonatomic) BOOL wantsCanvasVisible;
@property (nonatomic) BOOL wantsCanvasViewLoaded;
@property (readonly, nonatomic) UIColor *defaultStrokeColor;
@property (readonly, nonatomic) BOOL isDrawing;
@property (readonly, nonatomic) BOOL canvasHasVisibleStrokes;
@property (readonly, nonatomic) PKStroke *inProgressStroke;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } renderedStrokesBounds;
@property (readonly, nonatomic) NSSet *recentlyRemovedStrokeIDs;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } floatingBackgroundRect;
@property (readonly, nonatomic) id<UICoordinateSpace> canvasCoordinateSpace;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)prewarmFutureCanvasesIfNecessary;
+ (id)defaultInkWithColor:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id).cxx_construct;
- (id)_containerView;
- (void)_updateCanvasView;
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
- (void)removeStuckStrokesAndSimulateCrashIfNecessary;
- (void)reloadPreferredStrokeColor;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toCanvasFromCoordinateSpace:(id)a1;
- (void)_setStrokeColor:(id)a0 animated:(BOOL)a1;
- (void)_updateCanvasViewInkAnimated:(BOOL)a0;
- (void)_trackRecentlyRemovedStrokes:(id)a0;
- (void)_updateFloatingBackground;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertCanvasRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toCoordinateSpace:(id)a1;
- (void)_recordColorForStroke:(id)a0;
- (void)_clearRecordedColorForStroke:(id)a0;
- (void)_updateCanvasViewOffsetFromTouch:(id)a0;
- (void)_canvasViewDrawingMoved:(id)a0 withTouch:(id)a1 inputPoint:(struct { struct CGPoint { double x0; double x1; } x0; double x1; double x2; double x3; double x4; double x5; BOOL x6; long long x7; double x8; BOOL x9; })a2;
- (id)_resolvedDynamicColorForCurrentWindowScene:(id)a0;
- (void)removeStrokes:(id)a0 animationDuration:(double)a1;
- (void)animateAndRemoveStrokes:(id)a0 destinationFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 animationDuration:(double)a2 useImpreciseAnimation:(BOOL)a3;

@end
