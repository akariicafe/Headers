@class PKAlternativeStrokesAnimation, PKTool, NSString, PKPaintAreaViewSurface, PKDrawingGestureRecognizer, NSMutableArray, PKShapeDrawingController;
@protocol PKPaintAreaViewDelegate;

@interface PKPaintAreaView : UIView <PKDrawingGestureRecognizerDelegate, PKDrawingGestureTarget, PKShapeDrawingControllerDelegate> {
    PKDrawingGestureRecognizer *_drawingGestureRecognizer;
    PKPaintAreaViewSurface *_currentPaintSurfaceObject;
    NSMutableArray *_liveSurfaces;
}

@property (readonly, nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } strokeTransform;
@property (retain, nonatomic) PKShapeDrawingController *shapeDrawingController;
@property (nonatomic) double liveAnimationStartTime;
@property (retain, nonatomic) PKAlternativeStrokesAnimation *alternativeStrokesAnimation;
@property (weak, nonatomic) id<PKPaintAreaViewDelegate> delegate;
@property (nonatomic) BOOL switchSurfacesDuringStrokes;
@property (nonatomic) BOOL fingerDrawingEnabled;
@property (retain, nonatomic) PKTool *tool;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)vsync:(double)a0;
- (void).cxx_destruct;
- (BOOL)canBecomeFirstResponder;
- (id)initWithCoder:(id)a0;
- (void)_commonInit;
- (id)_rendererController;
- (BOOL)canAddStroke;
- (id)_drawingController;
- (BOOL)_isLiveAnimating;
- (void)checkAnimationsDidEndAtTime:(double)a0;
- (struct CGPoint { double x0; double x1; })applyTransformToTouchLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)_endAlternativeStrokeIfNecessaryAccepted:(BOOL)a0;
- (BOOL)drawingGestureRecognizer:(id)a0 shouldBeginDrawingWithTouches:(id)a1 event:(id)a2;
- (id)shapeDrawingControllerRendererController:(id)a0;
- (void)shapeDrawingControllerShapeGestureDetected:(id)a0;
- (void)shapeDrawingControllerShapeDetectionCancelled:(id)a0;
- (void)drawingBegan:(id)a0;
- (void)drawingMoved:(id)a0 withEvent:(id)a1;
- (void)drawingEnded:(id)a0;
- (void)drawingCancelled;
- (void)drawingEstimatedPropertiesUpdated:(id)a0;
- (id)hitSurface:(struct CGPoint { double x0; double x1; })a0;
- (void)switchToNewPaintSurface:(id)a0;
- (struct CGPoint { double x0; double x1; })applyTransformToTouchLocation:(struct CGPoint { double x0; double x1; })a0 previousPoint:(struct CGPoint { double x0; double x1; })a1 newSurface:(id *)a2;

@end
