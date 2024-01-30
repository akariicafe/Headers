@class SBHomeGestureExclusionTrapezoidSettings;

@interface SBHomeGestureSettings : PTSettings

@property (nonatomic, getter=isHomeGestureEnabled) BOOL homeGestureEnabled;
@property (nonatomic) double hysteresis;
@property (nonatomic) BOOL recognizeAlongEdge;
@property (nonatomic) BOOL useZStackResolverResults;
@property (nonatomic) double minimumYDistanceForHomeOrAppSwitcher;
@property (nonatomic) double minimumYDistanceToConsiderAccelerationDip;
@property (nonatomic) double minimumXDistanceForFirstArcSwipe;
@property (nonatomic) double minimumXDistanceToTriggerArcByDistancePortrait;
@property (nonatomic) double minimumXDistanceToTriggerArcByDistanceLandscape;
@property (nonatomic) double maximumYDistanceToTriggerArcByDistance;
@property (nonatomic) double maximumYDistanceToTriggerArcByFlick;
@property (nonatomic) double velocityYThresholdForUnconditionalHome;
@property (nonatomic) double minimumYVelocityForHome;
@property (nonatomic) double velocityXThresholdForUnconditionalArcSwipe;
@property (nonatomic) double minimumYVelocityForArcSwipe;
@property (nonatomic) double normalizedDistanceYThresholdForUnconditionalHome;
@property (nonatomic) double normalizedDistanceYThresholdRangeForUnconditionalHome;
@property (nonatomic) double normalizedDistanceYThresholdForUnconditionalHomeInSlideOver;
@property (nonatomic) double normalizedDistanceYThresholdRangeForUnconditionalHomeInSlideOver;
@property (nonatomic) double pauseVelocityThresholdForAppSwitcher;
@property (nonatomic) double pauseVelocityThresholdForDefiniteAppSwitcher;
@property (nonatomic) double maximumAdaptivePauseVelocityThresholdForAppSwitcher;
@property (nonatomic) BOOL snapToMaxVelocityThresholdAfterAccelerationDip;
@property (nonatomic) double maximumAdaptiveVelocityThresholdForDock;
@property (nonatomic) double appSwitcherVelocityThresholdIncreasingRateFraction;
@property (nonatomic) double dockVelocityThresholdIncreasingRateFraction;
@property (nonatomic) double adaptiveThresholdsDecreasingRateFraction;
@property (nonatomic) double velocitySlopeThresholdForBottomSwipeUpArc;
@property (nonatomic) double velocitySlopeThresholdForScrunchArc;
@property (nonatomic) double velocitySlopeThresholdForCurrentLayout;
@property (nonatomic) double edgeDistanceToCorrectGestureFinalDestination;
@property (nonatomic) double edgeAngleWindow;
@property (nonatomic) double cardFlyInMaximumVelocityThreshold;
@property (nonatomic) double cardFlyInDelayAfterEnteringAppSwitcher;
@property (nonatomic) double maximumDistanceYThresholdToPresentDock;
@property (nonatomic) double homeGestureCenterZoomDownCenterYOffsetFactor;
@property (nonatomic) double verticalRubberbandStart;
@property (nonatomic) double verticalRubberbandEnd;
@property (nonatomic) double verticalRubberbandDistance;
@property (nonatomic) double verticalRubberbandExponent;
@property (nonatomic) double horizontalRubberbandStart;
@property (nonatomic) double horizontalRubberbandEnd;
@property (nonatomic) double horizontalRubberbandDistance;
@property (nonatomic) double horizontalRubberbandExponent;
@property (nonatomic) BOOL injectGestureVelocityForZoomDown;
@property (nonatomic) BOOL onlyInjectVelocityForShortFlicks;
@property (nonatomic) double positionVelocityXPercentOfGestureVelocityX;
@property (nonatomic) double positionVelocityYPercentOfGestureVelocityY;
@property (nonatomic) double scaleVelocityPercentOfGestureVelocityYDividedByViewHeight;
@property (nonatomic) double maximumScaleVelocity;
@property (nonatomic) double secondsToAllowMultipleEdges;
@property (nonatomic) BOOL preventMultipleEdgesAfterAppInteraction;
@property (nonatomic) double secondsToResetSwitcherListAfterTransition;
@property (nonatomic) BOOL resetSwitcherListAfterAppInteraction;
@property (nonatomic) double travelDistanceForTranslatingScreenHeight;
@property (nonatomic) double minimumDistanceThresholdToScaleMultiplier;
@property (retain, nonatomic) SBHomeGestureExclusionTrapezoidSettings *exclusionTrapezoidSettings;

+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (void)setLatchDefaults;
- (void)setHomeGestureTuningDefaults;
- (void).cxx_destruct;

@end
