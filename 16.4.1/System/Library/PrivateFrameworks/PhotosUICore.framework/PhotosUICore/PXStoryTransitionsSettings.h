@class NSArray;

@interface PXStoryTransitionsSettings : PXSettings

@property (class, readonly) NSArray *supportedTransitions;

@property (nonatomic) unsigned long long transitionQuality;
@property (nonatomic) BOOL suppressUnsupportedTransitionErrors;
@property (nonatomic) BOOL suppressInvalidTransitionErrors;
@property (nonatomic) BOOL suppressInterruptedTransitionErrors;
@property (nonatomic) double exposureBleedTransitionMidpoint;
@property (nonatomic) double exposureBleedTransitionExposure;
@property (nonatomic) double exposureBleedTransitionBlurRadius;
@property (nonatomic) double exposureBleedTransitionCueAlignment;
@property (nonatomic) double fadeToBlackTransitionBlackRelativeDuration;
@property (nonatomic) double fadeToBlackTransitionCueAlignment;
@property (nonatomic) BOOL useSplitWipeTransitionsFromOneUp;
@property (nonatomic) double dividerAnimationDurationFraction;
@property (nonatomic) double reverseDividerAnimationDurationFraction;
@property (nonatomic) double wipeTransitionCueAlignment;
@property (nonatomic) double panTransitionMaxIntensity;
@property (nonatomic) double panTransitionBlurMidpoint;
@property (nonatomic) double panTransitionBlurOffset;
@property (nonatomic) double panTransitionCueAlignment;
@property (nonatomic) double scaleTransitionRelativeFactor;
@property (nonatomic) double scaleTransitionBlurMidpoint;
@property (nonatomic) double scaleTransitionMaxBlurIntensity;
@property (nonatomic) double scaleTransitionCueAlignment;
@property (nonatomic) double rotateTransitionAngle;
@property (nonatomic) double rotateTransitionBlurMidpoint;
@property (nonatomic) double rotateTransitionMaxBlurIntensity;
@property (nonatomic) double rotateTransitionBlurAnimationRelativeDuration;
@property (nonatomic) double rotateTransitionCueAlignment;
@property (nonatomic) double zoomTransitionRelativeFactor;
@property (nonatomic) double zoomTransitionCueAlignment;
@property (nonatomic) double crossfadeTransitionCueAlignment;
@property (nonatomic) BOOL disableUnsupportedTransitionsAtChapterBoundary;
@property (nonatomic) char forcedTransitionKindAtChapterBoundary;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (id)parentSettings;
- (void)setDefaultValues;
- (double)cueAlignmentForTransitionKind:(char)a0;

@end
