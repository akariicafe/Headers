@class UITouch, NSMutableArray, NSTimer;
@protocol FMMapGestureRecognizerDelegate;

@interface FMMapGestureRecognizer : UIGestureRecognizer

@property (nonatomic) struct CGPoint { double x; double y; } initialTouchLocation;
@property (retain, nonatomic) UITouch *previousTouch;
@property (nonatomic) struct CGPoint { double x; double y; } lastTouchPoint;
@property (nonatomic) double swipeThreshold;
@property (nonatomic) double velocity;
@property (nonatomic) BOOL isTrackingTouches;
@property (nonatomic) BOOL isSwipingFromTheEdge;
@property (nonatomic) BOOL isSwipingGestureEnded;
@property (nonatomic) BOOL isRTLOrientation;
@property (retain, nonatomic) NSMutableArray *otherGestures;
@property (retain, nonatomic) NSTimer *doubleTapTimer;
@property (weak, nonatomic) id<FMMapGestureRecognizerDelegate> touchDelegate;
@property (nonatomic) int touchRadius;
@property (nonatomic) BOOL isSwipeEnabled;

- (BOOL)canBePreventedByGestureRecognizer:(id)a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (BOOL)canPreventGestureRecognizer:(id)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)dealloc;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (double)distanceBetweenPointA:(struct CGPoint { double x0; double x1; })a0 andPointB:(struct CGPoint { double x0; double x1; })a1;
- (void)finishSwipeGesture:(double)a0;
- (void)invalidateGesture;
- (void)mapTappedTimer;

@end
