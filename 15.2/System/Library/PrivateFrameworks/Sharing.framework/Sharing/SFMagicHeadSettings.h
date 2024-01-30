@interface SFMagicHeadSettings : PTSettings

@property (nonatomic) BOOL showRangingValues;
@property (nonatomic) BOOL showSelectionGateLock;
@property (nonatomic) BOOL showSelectionMarkers;
@property (nonatomic) BOOL selectionDisabled;
@property (nonatomic) double tapDarkeningAlpha;
@property (nonatomic) double circlesFadeInDurationS;
@property (nonatomic) double circlesFadeOutDurationS;
@property (nonatomic) BOOL rollEnabled;
@property (nonatomic) double rollMaxDegrees;
@property (nonatomic) double rollRubberbandingStretchiness;
@property (nonatomic) BOOL guidanceEnabled;
@property (nonatomic) double guidanceGoodAngleThreshold;
@property (nonatomic) double guidanceWorstAngleDegreesDelta;
@property (nonatomic) double guidanceDipSpeed;
@property (nonatomic) double guidanceRubberbandingStretchiness;
@property (nonatomic) double guidanceFadeHeadDegrees;
@property (nonatomic) double guidanceRestoreHeadDegreesDelta;
@property (nonatomic) double guidanceTooFarDegrees;
@property (nonatomic) double guidanceRecoveredDegreesDelta;
@property (nonatomic) double guidanceTiltedTooFarAlpha;
@property (nonatomic) double guidanceSuppressHapticsEnabled;
@property (nonatomic) double guidanceSuppressHapticsDurationS;
@property (nonatomic) double guidanceContractDotsHapticEnabled;
@property (nonatomic) double guidanceExpandDotsHapticEnabled;
@property (nonatomic) BOOL rotationGatedSelectionEnabled;
@property (nonatomic) double rotationGateThresholdDegrees;
@property (nonatomic) long long rotationStartGatingResponsiveness;
@property (nonatomic) long long rotationStopGatingResponsiveness;
@property (nonatomic) long long rotationStartBigHeadGatingResponsiveness;
@property (nonatomic) long long rotationStopBigHeadGatingResponsiveness;
@property (nonatomic) double selectionScaleFriction;
@property (nonatomic) double selectionAlphaFriction;
@property (nonatomic) double selectionPositionFriction;
@property (nonatomic) double dismissScaleFriction;
@property (nonatomic) double dismissAlphaFriction;
@property (nonatomic) double dismissPositionFriction;
@property (nonatomic) BOOL hapticForCozyUpSelectionEnabled;
@property (nonatomic) BOOL cozyUpAnimationEnabled;
@property (nonatomic) double cozyUpSelectDurationS;
@property (nonatomic) BOOL selectedPulseEnabled;
@property (nonatomic) double selectedPulseScaleAmount;
@property (nonatomic) double selectedPulseDurationS;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
