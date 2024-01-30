@interface VUIMediaShowcasingConfig : NSObject

@property (nonatomic) double playbackDelayInterval;
@property (nonatomic) double animationTransitionDuration;
@property (nonatomic) float backgroundVolume;
@property (nonatomic) float foregroundVolume;
@property (nonatomic) BOOL backgroundMediaTransferEnabled;
@property (nonatomic) double backgroundMediaTransferAnimationDuration;
@property (nonatomic) double backgroundMediaFullscreenTransitionDuration;
@property (nonatomic) double volumeTransitionAnimationDuration;
@property (nonatomic) unsigned long long numberOfVolumeIncrements;
@property (nonatomic, getter=isRubberBandingEnabled) BOOL rubberBandingEnabled;
@property (nonatomic) double swipingEndAnimationDuration;
@property (nonatomic) double autoSwipeAnimationDuration;
@property (nonatomic) BOOL carouselBehaviorEnabled;
@property (nonatomic) float navigationBarTransitionDistance;
@property (nonatomic) float titleViewTransitionDistance;
@property (nonatomic, getter=isAutoAdvanceToNextPageEnabled) BOOL autoAdvanceToNextPageEnabled;
@property (nonatomic) double advanceToNextPageDelayDuration;
@property (nonatomic) double advanceToNextPageDelayDurationImageOnly;
@property (nonatomic, getter=isParallaxEnabled) BOOL parallaxEnabled;
@property (nonatomic) float parallaxRatio;
@property (nonatomic) float metadataFadeOutSpeed;
@property (nonatomic) float metadataFadeInSpeed;
@property (nonatomic) double itemHoverDelayDuration;
@property (nonatomic) BOOL shouldShowFullScreenButton;
@property (nonatomic) BOOL gradientUsesImageColor;
@property (nonatomic) double hideMuteButtonDelayDuration;
@property (nonatomic) double hidePageIndicatorsDelayDuration;

- (id)init;

@end
