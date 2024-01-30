@class NSString;

@interface ISVitalitySpecificSettings : ISSettings <ISVitalitySettings>

@property (nonatomic) long long behavior;
@property (nonatomic) double preDuration;
@property (nonatomic) double postDuration;
@property (nonatomic) double startSeekTolerance;
@property (nonatomic) double playbackRate;
@property (nonatomic) double endTimeOffset;
@property (nonatomic) double minimumVisibilityFactor;
@property (nonatomic) double maximumDelayBeforePlayback;
@property (nonatomic) double maxVitalityDelay;
@property (nonatomic) double minimumPhotoTransitionDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
