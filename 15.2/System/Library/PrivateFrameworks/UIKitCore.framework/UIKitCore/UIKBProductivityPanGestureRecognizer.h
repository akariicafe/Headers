@class NSMutableDictionary, NSMutableSet, _UIGestureRecognizerTransformAnalyzer;

@interface UIKBProductivityPanGestureRecognizer : UIPanGestureRecognizer

@property (nonatomic) double beginPanTimestamp;
@property (nonatomic) struct CGPoint { double x; double y; } beginPanCentroid;
@property (retain, nonatomic) NSMutableSet *activeTouches;
@property (retain, nonatomic) NSMutableSet *shiftTouches;
@property (retain, nonatomic) _UIGestureRecognizerTransformAnalyzer *transformAnalyzer;
@property (retain, nonatomic) NSMutableDictionary *beginTouchLocations;
@property (nonatomic) BOOL tooMuchSingleMovement;

+ (id)productivityPanGestureRecognizerWithTarget:(id)a0 action:(SEL)a1 delegate:(id)a2;

- (BOOL)shouldBeRequiredToFailByGestureRecognizer:(id)a0;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (BOOL)isShiftOrMoreKeyForTouch:(id)a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)reset;
- (struct CGPoint { double x0; double x1; })centroidOfTouches:(id)a0;

@end
