@interface CSPreferences : NSObject

+ (id)sharedPreferences;

- (void)disableAdaptiveSiriVolume:(id)a0;
- (id)voiceTriggerAudioLogDirectory;
- (float)adaptiveSiriVolumePermanentOffset;
- (void)setFileLoggingIsEnabled:(BOOL)a0;
- (int)adaptiveSiriVolumeRecentIntent;
- (BOOL)isAttentiveSiriAudioLoggingEnabled;
- (BOOL)enableAudioInjection:(BOOL)a0;
- (id)getStartOfSpeechAudioLogFilePath;
- (void)setAudioInjectionFilePath:(id)a0;
- (BOOL)voiceTriggerEnabled;
- (BOOL)twoShotNotificationEnabled;
- (BOOL)isPHSSupported;
- (BOOL)useSiriActivationSPIForHomePod;
- (BOOL)fileLoggingIsEnabled;
- (id)trialBaseAssetDirectory;
- (BOOL)smartSiriVolumeContextAwareEnabled;
- (BOOL)isAdaptiveSiriVolumeTemporaryIntentValid;
- (BOOL)isAdaptiveSiriVolumePermanentOffsetEnabled;
- (BOOL)isAttentiveSiriEnabled;

@end
