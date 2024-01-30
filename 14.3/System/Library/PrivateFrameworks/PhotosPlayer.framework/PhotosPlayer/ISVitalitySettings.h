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

- (long long)behavior;
- (double)playbackRate;
- (void).cxx_destruct;
- (double)preDuration;
- (id)_defaultSettings;
- (void)setDefaultValues;
- (double)minimumPhotoTransitionDuration;
- (double)minimumVisibilityFactor;
- (double)maximumDelayBeforePlayback;
- (double)maxVitalityDelay;
- (double)endTimeOffset;
- (double)postDuration;

@end
