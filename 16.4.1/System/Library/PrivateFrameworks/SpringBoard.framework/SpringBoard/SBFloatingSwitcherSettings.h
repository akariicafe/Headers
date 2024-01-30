@class SBFFluidBehaviorSettings, MTLumaDodgePillSettings;

@interface SBFloatingSwitcherSettings : PTSettings

@property BOOL showFloats;
@property double switcherCardScale;
@property double cardSpacing;
@property double dimmingAlpha;
@property double leadingEdgeRubberbandingRange;
@property double perCardAdditionalScaleCoefficient;
@property double scaleCurveExponent;
@property double opacityMinimumDistanceThreshold;
@property double opacityFadeDistance;
@property double darkeningMinimumDistanceThreshold;
@property double darkeningFadeDistance;
@property double maximumDarkening;
@property double titleAndIconOpacityMinimumDistanceThreshold;
@property double titleAndIconOpacityFadeDistance;
@property double titleOpacityMinimumDistanceThreshold;
@property double titleOpacityFadeDistance;
@property double overshootPullbackDelayOffscreen;
@property double overshootPullbackDelayOnscreen;
@property double rightEdgePeekDelay;
@property double rightEdgePeekTimeout;
@property (retain) SBFFluidBehaviorSettings *tongueContainerPositionAnimationSettings;
@property (retain) SBFFluidBehaviorSettings *tongueContainerTransformAnimationSettings;
@property (retain) SBFFluidBehaviorSettings *tongueCollapsedToExpandedAnimationSettings;
@property (retain) SBFFluidBehaviorSettings *tongueExpandedToCollapsedAnimationSettings;
@property (retain) MTLumaDodgePillSettings *homeAffordanceSettings;

+ (id)settingsControllerModule;

- (id)archiveValueForKey:(id)a0;
- (void)setDefaultValues;
- (void).cxx_destruct;

@end
