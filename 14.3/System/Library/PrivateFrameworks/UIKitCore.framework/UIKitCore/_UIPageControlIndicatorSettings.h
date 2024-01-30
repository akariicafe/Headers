@interface _UIPageControlIndicatorSettings : PTSettings

@property (nonatomic) double indicatorSpacing;
@property (nonatomic) long long defaultIndicators;
@property (nonatomic) long long minimumIndicators;
@property (nonatomic) long long maximumIndicators;
@property (nonatomic) long long minimumPagesForScrub;
@property (nonatomic) double verticalPadding;
@property (nonatomic) double horizontalPadding;
@property (nonatomic) double dampingRatio;
@property (nonatomic) double response;
@property (nonatomic) double dampingRatioSmoothing;
@property (nonatomic) double responseSmoothing;
@property (nonatomic) double targetSmoothing;
@property (nonatomic) double targetDeceleration;
@property (nonatomic) double fadeInDuration;
@property (nonatomic) double rippleFadeOutDuration;
@property (nonatomic) double discreteFadeOutDuration;
@property (nonatomic) double successiveTapDelay;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
