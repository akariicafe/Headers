@class UITouch, NSString;
@protocol PKDrawingGestureRecognizerDelegate, PKDrawingGestureTarget;

@interface PKDrawingGestureRecognizer : UIGestureRecognizer <PKDrawingGestureRecognizerProtocol> {
    double _squaredThreshold;
    struct CGPoint { double x; double y; } _drawTouchStartPoint;
    BOOL _drawingTargetIsDrawing;
    BOOL _gestureDetected;
    BOOL _ignoreFingerTouchesUntilReset;
}

@property (retain, nonatomic) UITouch *drawingTouch;
@property (nonatomic) double thresholdDistance;
@property (readonly, nonatomic) BOOL isReplaying;
@property (weak, nonatomic) id<PKDrawingGestureRecognizerDelegate> delegate;
@property (weak, nonatomic) id<PKDrawingGestureTarget> drawingTarget;
@property (readonly, nonatomic) unsigned long long activeInputProperties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)end;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)touchesEstimatedPropertiesUpdated:(id)a0;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)cancel;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)reset;
- (void)_beginDrawingWithTouch:(id)a0;
- (void)_cancelDrawing;
- (void)_drawingBegan;
- (void)_drawingCancelled;
- (void)_drawingEnded;
- (void)_drawingMoved:(id)a0;
- (void)_endDrawing;
- (BOOL)_shouldBeginDrawing:(id)a0 withEvent:(id)a1;
- (void)_updateDrawingWithEvent:(id)a0;

@end
