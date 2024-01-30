@interface ISPlayerSettings : ISSettings

@property (nonatomic) BOOL easingEnabled;
@property (nonatomic) double vitalityEaseDuration;
@property (nonatomic) float vitalityEaseMinRate;
@property (nonatomic) long long startBehavior;
@property (nonatomic) BOOL scaleDuringPlayback;
@property (nonatomic) BOOL loopingEnabled;
@property (nonatomic) BOOL crossfadeEnabled;
@property (nonatomic) BOOL audioEnabled;
@property (nonatomic) BOOL playIsSticky;
@property (nonatomic) BOOL longExposureVitality;
@property (nonatomic) BOOL playDuringHint;
@property (nonatomic) BOOL showStateOverlay;
@property (nonatomic) BOOL prerollBeforePlaying;
@property (nonatomic) BOOL useDedicatedQueues;
@property (nonatomic) BOOL allowFrameBlending;
@property (nonatomic) BOOL allowVideoPreRoll;
@property (nonatomic) double forceScrubRewindFactor;
@property (nonatomic) double forceScrubMinRateChange;
@property (nonatomic) double forceScrubMinimumRate;
@property (nonatomic) double forceScrubMaximumInteractiveRate;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
