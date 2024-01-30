@class PKRulerGestureRecognizer, NSString, PKRulerView, UIImpactFeedbackGenerator, UIView, PKRulerLayer;
@protocol PKRulerDelegate, PKRulerHostingDelegate;

@interface PKRulerController : NSObject <UIGestureRecognizerDelegate> {
    UIView *_rulerHostingView;
    BOOL _wantsSharedRuler;
}

@property (retain, nonatomic) PKRulerLayer *rulerLayer;
@property (nonatomic) struct { int arcType; BOOL before; double snapAngle; } rulerState;
@property (nonatomic) struct { int arcType; BOOL before; double snapAngle; } previousRulerState;
@property (nonatomic) BOOL rulerWasShownViaGesture;
@property (nonatomic) BOOL isInteractingWithRuler;
@property (nonatomic) BOOL canRulerSnapToAngle;
@property (nonatomic) BOOL lastTouchWasMaskedByRuler;
@property (nonatomic) BOOL lastDrawingWasMaskedByRuler;
@property (nonatomic) BOOL lastDrawingWasSnappedToRuler;
@property (retain, nonatomic) UIImpactFeedbackGenerator *snapImpactBehavior;
@property (nonatomic) BOOL rulerSnappedToAngle;
@property (retain, nonatomic) PKRulerGestureRecognizer *rulerGestureRecognizer;
@property (weak, nonatomic) id<PKRulerDelegate> delegate;
@property (weak, nonatomic) id<PKRulerHostingDelegate> rulerHostingDelegate;
@property (readonly, nonatomic) BOOL rulerSelected;
@property (nonatomic) BOOL rulerIsRotating;
@property (retain, nonatomic) PKRulerView *rulerView;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } rulerStartTransform;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } defaultRulerTransform;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedRulerView;

- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void).cxx_destruct;
- (void)hideUI;
- (void)dealloc;
- (BOOL)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithDelegate:(id)a0;
- (void)setupGestures;
- (void)showRuler;
- (void)hideRuler;
- (struct CGPoint { double x0; double x1; })applyTransformToTouchLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)drawingBegan:(id)a0;
- (void)drawingMoved:(id)a0 withEvent:(id)a1;
- (void)drawingEnded:(id)a0;
- (void)drawingCancelled:(id /* block */)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })pixelSnapRulerTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })canvasTransform;
- (void)hideRulerAnimated:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_rulerFrame;
- (void)_adjustViewForHostingRulerView;
- (BOOL)_enableRulerOnCanvasIfSharedRulerIsVisible;
- (id)_viewForHostingRuler;
- (void)_configureRuler;
- (void)adjustFrames;
- (void)startRulerDrawing;
- (void)endRulerDrawing;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_transformFromRulerViewToTiledView;
- (void)resetRulerTouches;
- (void)rulerMoveGesture:(id)a0;
- (void)eatPencilGesture:(id)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })angleSnapRulerTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 aroundOrigin:(struct CGPoint { double x0; double x1; })a1;
- (void)updateAngle:(id)a0;
- (void)updateRuler:(id)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })ensureRulerFullyOnscreen:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (double)getRulerCenterTValueOnScreenForTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (void)resetRuler;
- (void)resetRulerTransform;
- (void)cancelNonDrawingGestures;

@end
