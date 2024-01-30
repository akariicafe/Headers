@interface SADeviceConfiguration : SABaseClientBoundCommand

@property (nonatomic) double audioSessionActivationDelay;
@property (nonatomic) double audioSessionActivationDelayAboveMediaPlaybackVolumeThreshold;
@property (nonatomic) BOOL hasAudioSessionActivationDelay;
@property (nonatomic) double initialInterstitialDelay;
@property (nonatomic) double initialInterstitialDelayForCarPlay;
@property (nonatomic) double initialInterstitialDelayForVoiceTriggerOneShotWithoutAudioDucking;
@property (nonatomic) double mediaPlaybackVolumeThresholdForAudioSessionActivationDelay;

+ (id)deviceConfiguration;
+ (id)deviceConfigurationWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
