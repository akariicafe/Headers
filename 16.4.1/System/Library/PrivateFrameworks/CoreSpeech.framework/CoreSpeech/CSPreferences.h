@interface CSPreferences : NSObject

+ (id)sharedPreferences;

- (id)getStartOfSpeechAudioLogFilePath;
- (BOOL)twoShotNotificationEnabled;
- (BOOL)smartSiriVolumeContextAwareEnabled;
- (BOOL)isAttentiveSiriAudioLoggingEnabled;
- (BOOL)voiceTriggerEnabled;
- (void)setFileLoggingIsEnabled:(BOOL)a0;
- (BOOL)fileLoggingIsEnabled;
- (int)adaptiveSiriVolumeRecentIntent;
- (void)setAudioInjectionFilePath:(id)a0;
- (id)voiceTriggerAudioLogDirectory;
- (id)trialBaseAssetDirectory;
- (float)getAttendingTimeoutConfig;
- (BOOL)isPHSSupported;
- (float)adaptiveSiriVolumePermanentOffset;
- (BOOL)isAdaptiveSiriVolumePermanentOffsetEnabled;
- (BOOL)enableAudioInjection:(BOOL)a0;
- (void)disableAdaptiveSiriVolume:(id)a0;
- (BOOL)useSiriActivationSPIForHomePod;
- (BOOL)isAdaptiveSiriVolumeTemporaryIntentValid;
- (BOOL)isAttentiveSiriEnabled;

@end
