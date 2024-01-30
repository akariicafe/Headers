@interface _UIMotionAnalyzerSettings : _UISettings

@property double idleLeeway;
@property double delayBeforeIdle;
@property BOOL showIdleIndicator;
@property BOOL jumpEnabled;
@property double jumpThreshold;
@property BOOL playJumpSound;
@property BOOL directionalLockEnabled;
@property double directionalLockThreshold;
@property double directionalLockStickiness;
@property double directionalLockSharpness;
@property BOOL showDirectionalLockIndicators;
@property BOOL referenceShiftEnabled;
@property double referenceShiftDistanceDependence;
@property double inputSmoothingFactor;
@property double referenceShiftSpeed;

- (unsigned long long)hash;
- (void)setDefaultValues;
- (BOOL)isEqual:(id)a0;

@end
