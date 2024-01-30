@class NSMutableArray, NSMutableDictionary;

@interface UIKBProductivityPinchGestureRecognizer : UIGestureRecognizer {
    BOOL _recognized;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } _transform;
    id _transformAnalyzer;
    BOOL _hasFailedOnOtherDominantMotion;
    unsigned long long _numberOfTouchesRequired;
    BOOL _multitouchTimerEnabled;
}

@property (nonatomic) double beginPinchTimestamp;
@property (nonatomic) double beforeReductionTimeInterval;
@property (nonatomic) double beginPerimeter;
@property (nonatomic) struct CGPoint { double x; double y; } beginCentroid;
@property (retain, nonatomic) NSMutableArray *activeTouches;
@property (nonatomic) double allowableElapsedTimeForAllRequiredTouches;
@property (retain, nonatomic) NSMutableDictionary *beginTouchLocations;
@property (nonatomic) BOOL tooMuchSingleMovement;
@property (readonly, nonatomic) double avgTouchesToCentroidDistance;
@property (readonly, nonatomic) long long pinchDirection;

+ (id)productivityPinchGestureRecognizerWithTarget:(id)a0 action:(SEL)a1 delegate:(id)a2;

- (BOOL)shouldBeRequiredToFailByGestureRecognizer:(id)a0;
- (long long)pinchDirectionWithCurrentTime:(double)a0 perimeter:(double)a1;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (BOOL)sufficientMotionInDirection:(long long)a0 withLocation:(struct CGPoint { double x0; double x1; })a1 withScale:(double)a2 withAngle:(double)a3;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (double)perimeterOfTouches:(id)a0;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (double)scale;
- (void)_updateTransformAnalyzerWeights;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)startMultitouchTimer:(double)a0;
- (double)avgDistanceToCentroid:(id)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)reset;
- (struct CGPoint { double x0; double x1; })centroidOfTouches:(id)a0;
- (void)multitouchExpired:(id)a0;
- (void)clearMultitouchTimer;

@end
