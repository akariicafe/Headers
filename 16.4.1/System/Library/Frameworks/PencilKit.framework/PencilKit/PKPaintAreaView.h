@class PKAlternativeStrokesAnimation, PKTool, NSString, PKPaintAreaViewSurface, PKDrawingGestureRecognizer, NSMutableArray, PKShapeDrawingController;
@protocol PKPaintAreaViewDelegate, MTLDevice;

@interface PKPaintAreaView : UIView <PKDrawingGestureRecognizerDelegate, PKDrawingGestureTarget, PKShapeDrawingControllerDelegate> {
    PKDrawingGestureRecognizer *_drawingGestureRecognizer;
    PKPaintAreaViewSurface *_currentPaintSurfaceObject;
    NSMutableArray *_liveSurfaces;
    id<MTLDevice> _device;
}

@property (retain, nonatomic) PKShapeDrawingController *shapeDrawingController;
@property (retain, nonatomic) PKAlternativeStrokesAnimation *alternativeStrokesAnimation;
@property (readonly, nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } strokeTransform;
@property (nonatomic) double liveAnimationStartTime;
@property (weak, nonatomic) id<PKPaintAreaViewDelegate> delegate;
@property (nonatomic) BOOL switchSurfacesDuringStrokes;
@property (nonatomic) BOOL fingerDrawingEnabled;
@property (nonatomic) BOOL drawingDisabled;
@property (retain, nonatomic) PKTool *tool;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_commonInit;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)canBecomeFirstResponder;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)_drawingBegan:(struct { union { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; BOOL x8; long long x9; double x10; BOOL x11; })a0 locationInView:(struct CGPoint { double x0; double x1; })a1 inputType:(long long)a2;
- (id)_drawingController;
- (void)_endAlternativeStrokeIfNecessaryAccepted:(BOOL)a0;
- (BOOL)_isLiveAnimating;
- (id)_rendererController;
- (struct CGPoint { double x0; double x1; })applyTransformToTouchLocation:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })applyTransformToTouchLocation:(struct CGPoint { double x0; double x1; })a0 previousPoint:(struct CGPoint { double x0; double x1; })a1 newSurface:(id *)a2;
- (BOOL)beginDrawingAtPoint:(struct { union { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; BOOL x8; long long x9; double x10; BOOL x11; })a0 surface:(id)a1 locationInView:(struct CGPoint { double x0; double x1; })a2 inputType:(long long)a3;
- (BOOL)canAddStroke;
- (void)checkAnimationsDidEndAtTime:(double)a0;
- (void)drawingBegan:(id)a0;
- (void)drawingCancelled;
- (void)drawingEnded;
- (void)drawingEnded:(id)a0;
- (void)drawingEstimatedPropertiesUpdated:(id)a0;
- (BOOL)drawingGestureRecognizer:(id)a0 shouldBeginDrawingWithTouches:(id)a1 event:(id)a2;
- (void)drawingMoved:(id)a0 withEvent:(id)a1;
- (void)drawingMovedToPoint:(struct { union { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; BOOL x8; long long x9; double x10; BOOL x11; })a0 locationInView:(struct CGPoint { double x0; double x1; })a1;
- (id)hitSurface:(struct CGPoint { double x0; double x1; })a0;
- (id)shapeDrawingControllerRendererController:(id)a0;
- (void)shapeDrawingControllerShapeDetectionCancelled:(id)a0;
- (void)shapeDrawingControllerShapeGestureDetected:(id)a0;
- (void)switchToNewPaintSurface:(id)a0;
- (void)vsync:(double)a0;

@end
