@class SBFFluidBehaviorSettings;

@interface SBHHomePullToSearchSettings : PTSettings

@property (retain, nonatomic) SBFFluidBehaviorSettings *pullTransitionAnimationSettings;
@property (nonatomic) double pullTransitionDistance;
@property (nonatomic) double pullTransitionActivationThreshold;
@property (nonatomic) double pullGestureBeganFromTopLeeway;
@property (nonatomic) double pullTransitionSearchFadeInThreshold;
@property (nonatomic) double searchAffordanceMaxScaleX;
@property (nonatomic) double searchAffordanceMaxScaleY;
@property (nonatomic) double searchAffordanceScaleRubberbandingRange;
@property (nonatomic) double searchAffordanceMaxOffset;
@property (nonatomic) double searchAffordanceOffsetRubberbandingRange;
@property (nonatomic) double searchAffordanceTransientFadeInThreshold;
@property (nonatomic) double searchContentFadeOutThreshold;
@property (nonatomic) BOOL allowsKeyboardWhileInteractive;
@property (nonatomic) BOOL keyboardFollowsSpotlightContent;

+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (void).cxx_destruct;

@end
