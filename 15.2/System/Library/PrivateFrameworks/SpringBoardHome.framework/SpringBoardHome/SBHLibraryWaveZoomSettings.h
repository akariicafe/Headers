@class SBHInterpolationSettings, SBFAnimationSettings, PTPointSettings;

@interface SBHLibraryWaveZoomSettings : SBHIconZoomSettings

@property (nonatomic) double interPodWaveDelay;
@property (nonatomic) double upperPodRelativeCrossfadeDuration;
@property (nonatomic) double upperPodRelativeStackAlphaDuration;
@property (nonatomic) double relativeBackgroundDuration;
@property (nonatomic) double relativeSearchDuration;
@property (nonatomic) double searchScale;
@property (nonatomic) double podRelativeFadeDelay;
@property (retain, nonatomic) SBFAnimationSettings *podFadeSettings;
@property (retain, nonatomic) PTPointSettings *zEffectControlPoint1Settings;
@property (retain, nonatomic) PTPointSettings *zEffectControlPoint2Settings;
@property (retain, nonatomic) SBHInterpolationSettings *retargetedMassSettings;
@property (retain, nonatomic) SBHInterpolationSettings *retargetedStiffnessSettings;
@property (retain, nonatomic) SBHInterpolationSettings *retargetedInitialVelocitySettings;
@property (retain, nonatomic) SBHInterpolationSettings *retargetedBasicDurationSettings;

+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (void).cxx_destruct;

@end
