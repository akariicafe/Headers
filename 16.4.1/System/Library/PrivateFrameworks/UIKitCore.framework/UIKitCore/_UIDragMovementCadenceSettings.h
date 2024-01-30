@interface _UIDragMovementCadenceSettings : NSObject

@property (nonatomic) double velocityMagnitudeThreshold;
@property (nonatomic) double dwellTimeThreshold;

+ (id)defaultSettingsForMovementPhase:(long long)a0 cadence:(long long)a1;

- (void)_applyDragPlaceholderInitialPhaseDefaultsForCadence:(long long)a0;
- (void)_applyDragPlaceholderSubsequentPhaseDefaultsForCadence:(long long)a0;
- (void)_applyImmediateSettings;
- (void)_applyInteractiveReorderInitialPhaseDefaultsForCadence:(long long)a0;
- (void)_applyInteractiveReorderSubsequentPhaseDefaultsForCadence:(long long)a0;
- (id)initWithMovementPhase:(long long)a0 cadence:(long long)a1;
- (id)initWithVelocityMagnitudeThreshold:(double)a0 dwellTimeThreshold:(double)a1;

@end
