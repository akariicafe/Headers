@class _UIVelocityIntegrator, NSMutableSet, CADisplayLink;

@interface UITouchForceGestureRecognizer : UIGestureRecognizer {
    CADisplayLink *_continuousEvaluationDisplayLink;
    NSMutableSet *_currentTouches;
    unsigned long long _eventTouchCount;
    double _currentTouchForce;
    struct CGPoint { double x; double y; } _initialCentroidOfTouches;
    struct CGPoint { double x; double y; } _currentCentroidOfTouches;
    _UIVelocityIntegrator *_velocityIntegrator;
    BOOL _automaticallyIncreaseTouchForce;
    double _touchesBeganTimestamp;
}

@property (nonatomic) double touchForce;
@property (nonatomic) double velocity;
@property (nonatomic, getter=isSteady) BOOL steady;
@property (nonatomic) double minimumRequiredTouchForce;
@property (nonatomic) double allowableMovement;
@property (readonly, nonatomic) BOOL hasExceededAllowableMovement;
@property (nonatomic) unsigned long long maximumNumberOfTouches;
@property (nonatomic) double automaticTouchForce;
@property (nonatomic) double automaticTouchForceDuration;
@property (readonly, nonatomic) double touchDuration;
@property (copy, nonatomic) id /* block */ configurationBlock;

- (BOOL)canPreventGestureRecognizer:(id)a0;
- (BOOL)_shouldReceiveTouch:(id)a0 forEvent:(id)a1 recognizerView:(id)a2;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (BOOL)_hasExceededMaximumNumberOfTouches;
- (double)_evaluateAutomaticTouchForceForTimeInterval:(double)a0 actualTouchForce:(double)a1;
- (void)setView:(id)a0;
- (void)_endIfNeeded:(BOOL)a0;
- (void)_updateForContinuousEvaluation:(id)a0;
- (void).cxx_destruct;
- (BOOL)_hasExceededAllowableMovement;
- (void)_beginForContinuousEvaluationForTouches:(id)a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)_endContinuousEvaluation;
- (void)_updateTouchForce:(double)a0;
- (void)_evaluateWithTouchForce:(double)a0 centroidAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)_validateHysteresis;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)reset;
- (void)_evaluateTouches:(id)a0 withEvent:(id)a1;

@end
