@class UITouch, _UIGestureRecognizerTransformAnalyzer;

@interface UIPinchGestureRecognizer : UIGestureRecognizer {
    double _initialTouchDistance;
    double _initialScale;
    double _lastEventTime;
    double _velocity;
    double _previousVelocity;
    double _lastNonZeroTimestampDelta;
    struct CGPoint { double x; double y; } _anchorSceneReferencePoint;
    UITouch *_touches[2];
    _UIGestureRecognizerTransformAnalyzer *_transformAnalyzer;
    unsigned char _loggedPinchStatistic : 1;
    unsigned char _loggedZoomStatistic : 1;
    unsigned char _endsOnSingleTouch : 1;
}

@property (nonatomic) double scaleThreshold;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } anchorPoint;
@property (nonatomic, getter=_hysteresis, setter=_setHysteresis:) double hysteresis;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } transform;
@property (nonatomic) BOOL _enableNestedHysteresis;
@property (nonatomic) double scale;
@property (readonly, nonatomic) double velocity;

+ (BOOL)supportsSecureCoding;
+ (BOOL)_shouldDefaultToTouches;

- (void)_resetGestureRecognizer;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)_setEndsOnSingleTouch:(BOOL)a0;
- (void)_transformChangedWithEvent:(id)a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (struct CGPoint { double x0; double x1; })locationInView:(id)a0;
- (void)_cancelOrFail;
- (void)_endOrFail;
- (void)_applyScale:(double)a0 atLocation:(struct CGPoint { double x0; double x1; })a1 touchDistance:(double)a2 withEvent:(id)a3;
- (void).cxx_destruct;
- (void)_logStatisticsForScale:(double)a0;
- (id)initWithCoder:(id)a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (BOOL)_endsOnSingleTouch;
- (double)_hysteresisForTouches:(id)a0;

@end
