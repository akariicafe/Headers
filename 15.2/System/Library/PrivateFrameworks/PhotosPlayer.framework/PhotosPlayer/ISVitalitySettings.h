@class NSString, ISVitalitySpecificSettings;

@interface ISVitalitySettings : ISSettings <ISVitalitySettings>

@property (nonatomic) BOOL useLegacyBehavior;
@property (retain, nonatomic) ISVitalitySpecificSettings *oneUpSettings;
@property (retain, nonatomic) ISVitalitySpecificSettings *shareViewSettings;
@property (retain, nonatomic) ISVitalitySpecificSettings *activityViewSettings;
@property (retain, nonatomic) ISVitalitySpecificSettings *orbPreviewSettings;
@property (nonatomic) BOOL shouldPreroll;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (double)maximumDelayBeforePlayback;
- (double)preDuration;
- (double)endTimeOffset;
- (double)playbackRate;
- (long long)behavior;
- (double)maxVitalityDelay;
- (void).cxx_destruct;
- (double)postDuration;
- (double)minimumVisibilityFactor;
- (id)_defaultSettings;
- (double)minimumPhotoTransitionDuration;

@end
