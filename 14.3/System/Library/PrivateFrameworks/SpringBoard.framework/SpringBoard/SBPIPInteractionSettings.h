@class SBFFluidBehaviorSettings;

@interface SBPIPInteractionSettings : PTSettings

@property (nonatomic) BOOL alwaysStartAtSmallestSize;
@property (nonatomic) BOOL freelyPositionable;
@property (nonatomic) BOOL panGestureEnabled;
@property (nonatomic) BOOL pinchGestureEnabled;
@property (nonatomic) BOOL rotationGestureEnabled;
@property (nonatomic) double defaultContentSizeResetTimeout;
@property (nonatomic) double inFlightHitTestPadding;
@property (nonatomic) double maximumSizeSpanForPreferredSizeTuning;
@property (nonatomic) double minimumSizeSpanBetweenPreferredSizes;
@property (nonatomic) double positionDecelerationRate;
@property (nonatomic) double positionExtenderMaximumDistance;
@property (nonatomic) double positionVelocityYWeightOverVelocityX;
@property (nonatomic) double rotationExtenderMaximumDistance;
@property (nonatomic) double rotationPreRecognitionWeight;
@property (nonatomic) double rotationRubberBandCoefficient;
@property (nonatomic) double scaleDecelerationRate;
@property (nonatomic) double scaleExtenderMaximumDistance;
@property (nonatomic) double scaleLowPassFilterPreviousWeight;
@property (nonatomic) double stashProgressTabAppearanceThresholdX;
@property (retain, nonatomic) SBFFluidBehaviorSettings *interactiveFluidBehavior;
@property (retain, nonatomic) SBFFluidBehaviorSettings *stashTabFluidBehavior;

+ (id)settingsControllerModule;

- (void).cxx_destruct;
- (void)setDefaultValues;

@end
