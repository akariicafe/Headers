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

- (BOOL)_hasExceededAllowableMovement;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)_endContinuousEvaluation;
- (BOOL)_shouldReceiveTouch:(id)a0 forEvent:(id)a1 recognizerView:(id)a2;
- (void)_updateTouchForce:(double)a0;
- (BOOL)canPreventGestureRecognizer:(id)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)setView:(id)a0;
- (void)_evaluateTouches:(id)a0 withEvent:(id)a1;
- (void)_endIfNeeded:(BOOL)a0;
- (double)_evaluateAutomaticTouchForceForTimeInterval:(double)a0 actualTouchForce:(double)a1;
- (BOOL)_hasExceededMaximumNumberOfTouches;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)_beginForContinuousEvaluationForTouches:(id)a0;
- (void)_updateForContinuousEvaluation:(id)a0;
- (BOOL)_validateHysteresis;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)_evaluateWithTouchForce:(double)a0 centroidAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void).cxx_destruct;
- (void)reset;

@end
