@interface _UIPreviewInteractionStateRecognizer : NSObject {
    unsigned long long _deepPressCount;
    double _smoothedForce;
    double _maximumForce;
    double _previousEffectiveTouchForce;
    double _timeMark;
    double _currentTime;
    double _previousTime;
    double _popOffsetInitial;
    double _popOffsetLongterm;
    double _popOffsetDecayAlpha;
    double _lowpassForceAlpha;
    double _popDecayingOffset;
    double _popReductionForce;
    double _progressToStrongThreshold;
    BOOL _allowsPopOffsetDecay;
    double _popForceReductionThreshold;
    double _popAlwaysThreshold;
    double _highPopThreshold;
    double _previousPopThreshold;
    double _saturationForce;
    double _revealThreshold;
    double _standardThreshold;
    double _strongThreshold;
    double _hintAndPeekInterval;
    double _hintReductionForce;
    double _actualHintForce;
    double _actualPeekForce;
    double _actualPopForce;
    double _actualHintTime;
    double _actualPeekTime;
    double _actualPopTime;
}

@property (nonatomic) long long currentState;
@property (nonatomic) double currentTouchForce;
@property (readonly, nonatomic) double velocity;
@property (nonatomic) double minimumPreviewDuration;
@property (nonatomic) BOOL shouldDelayReveal;

- (double)currentProgressToState:(long long)a0;
- (id)description;
- (double)_currentTouchForceMultiplier;
- (void)evaluateWithTouchForce:(double)a0 atTimestamp:(double)a1 withCentroidAtLocation:(struct CGPoint { double x0; double x1; })a2;
- (id)init;
- (void)_accessibilityForceSensitivityChanged:(id)a0;
- (double)_normalizedTouchForceValue:(double)a0;
- (void)dealloc;
- (void)reset;
- (double)_denormalizedTouchForceValue:(double)a0;
- (double)velocity;
- (double)_thresholdForForceLevel:(long long)a0;

@end
