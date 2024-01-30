@interface PUScrubberSettings : PXSettings

@property (nonatomic) unsigned long long previewInteractiveLoupeBehavior;
@property (nonatomic) BOOL usePreviewScrubberMargins;
@property (nonatomic) BOOL useTrianglePositionIndicator;
@property (nonatomic) unsigned long long interactiveLoupeBehavior;
@property (nonatomic) double tapAnimationDuration;
@property (nonatomic) double smoothingAnimationDuration;
@property (nonatomic) double settleAnimationDuration;
@property (nonatomic) double settleRequiredDecelerationDistance;
@property (nonatomic) double decelerationTargetExpansionDistance;
@property (nonatomic) double verticalMargin;
@property (nonatomic) double topOutset;
@property (nonatomic) double slitAspectRatio;
@property (nonatomic) double maxAspectRatio;
@property (nonatomic) double interItemSpacing;
@property (nonatomic) double interSectionSpacing;
@property (nonatomic) BOOL useSmoothingAnimation;
@property (nonatomic) double minVideoDuration;
@property (nonatomic) double baseVideoWidth;
@property (nonatomic) double filmstripAspectRatio;
@property (nonatomic) BOOL dynamicSeekTolerance;
@property (nonatomic) long long defaultPlaybackIndicator;
@property (nonatomic) long long initialPlaybackIndicator;
@property (nonatomic) long long scrubbingPlaybackIndicator;
@property (nonatomic) long long chromeShownPlaybackIndicator;
@property (nonatomic) long long playingPlaybackIndicator;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (id)parentSettings;
- (void)setDefaultValues;

@end
