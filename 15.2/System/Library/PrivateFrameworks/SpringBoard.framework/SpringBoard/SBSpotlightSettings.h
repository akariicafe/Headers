@class SBFFluidBehaviorSettings;

@interface SBSpotlightSettings : PTSettings

@property (retain, nonatomic) SBFFluidBehaviorSettings *opacityAnimationSettings;
@property (retain, nonatomic) SBFFluidBehaviorSettings *snappyOpacityAnimationSettings;
@property (retain, nonatomic) SBFFluidBehaviorSettings *scaleAnimationSettings;
@property (retain, nonatomic) SBFFluidBehaviorSettings *snappyScaleAnimationSettings;
@property (nonatomic) double anchorPointY;
@property (nonatomic) double hiddenScale;
@property (nonatomic) double hiddenBlurRadius;
@property (nonatomic) double minTranslationToShowSpotlight;
@property (nonatomic) double maxTranslationForSpotlightScale;
@property (nonatomic) double spotlightScaleRubberbandingMin;
@property (nonatomic) double spotlightScaleRubberbandingMax;
@property (nonatomic) double spotlightScaleRubberbandingRange;
@property (nonatomic) double maxTranslationForHomeScreenScale;
@property (nonatomic) double homeScreenScaleRubberbandingMin;
@property (nonatomic) double homeScreenScaleRubberbandingMax;
@property (nonatomic) double homeScreenScaleRubberbandingRange;
@property (nonatomic) double maxTranslationForDimmingView;
@property (nonatomic) double dimmingViewRubberbandingMin;
@property (nonatomic) double dimmingViewRubberbandingMax;
@property (nonatomic) double dimmingViewRubberbandingRange;
@property (nonatomic) double spotlightTranslationRubberbandingRange;

+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (void).cxx_destruct;

@end
