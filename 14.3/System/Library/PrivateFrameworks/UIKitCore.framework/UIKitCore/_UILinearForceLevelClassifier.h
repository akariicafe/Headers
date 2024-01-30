@interface _UILinearForceLevelClassifier : _UIForceLevelClassifier {
    double _smoothedForce;
    BOOL _anyForceObservations;
    double _smoothedImpulse;
    long long _impulseObservationState;
    double _lastForceForImpulse;
    double _lastTimestampForImpulse;
}

@property (nonatomic) double revealThreshold;
@property (nonatomic) double standardThreshold;
@property (nonatomic) double strongThreshold;
@property (nonatomic) double smoothingFactor;
@property (readonly, nonatomic) double currentImpulse;
@property (nonatomic) double impulseSmoothingFactor;

- (long long)_forceLevelForTouchForceValue:(double)a0;
- (id)init;
- (void)touchForceMultiplierDidChange;
- (void)reset;
- (double)_instantaneousImpulseForTouchForceValue:(double)a0 atTimestamp:(double)a1;
- (void)dealloc;
- (double)_calculateProgressOfTouchForceValue:(double)a0 toForceLevel:(long long)a1 minimumRequiredForceLevel:(long long)a2;
- (void)_updateForceWithTouchForceValue:(double)a0 atTimestamp:(double)a1;
- (void)debuggingPropertyForKey:(id)a0 changedToValue:(id)a1;
- (void)_updateImpulseWithTouchForceValue:(double)a0 atTimestamp:(double)a1;
- (void)observeTouchWithForceValue:(double)a0 atTimestamp:(double)a1 withCentroidAtLocation:(struct CGPoint { double x0; double x1; })a2;
- (id)transformerFromTouchForceMessageToProgressToForceLevel:(long long)a0 minimumRequiredForceLevel:(long long)a1;
- (double)_thresholdForForceLevel:(long long)a0;

@end
