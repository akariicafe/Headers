@interface _UIPageControlPlatterSettings : PTSettings

@property (nonatomic) double expandedScale;
@property (nonatomic) double stretchX;
@property (nonatomic) double stretchY;
@property (nonatomic) double rbStretchLimit;
@property (nonatomic) double dampingRatio;
@property (nonatomic) double platterResponse;
@property (nonatomic) double scrubResponse;
@property (nonatomic) double dampingRatioSmoothing;
@property (nonatomic) double responseSmoothing;
@property (nonatomic) double targetSmoothing;
@property (nonatomic) double targetDeceleration;
@property (nonatomic) double jogRateBase;
@property (nonatomic) double jogMaxDotSpan;
@property (nonatomic) double jogInitialVal;
@property (nonatomic) double hapticsBookEnd;
@property (nonatomic) double hapticsJogging;
@property (nonatomic) double panDistanceThreshold;
@property (nonatomic) long long pagesRequiredForScrubbing;
@property (nonatomic) double flickVelocityThreshold;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
