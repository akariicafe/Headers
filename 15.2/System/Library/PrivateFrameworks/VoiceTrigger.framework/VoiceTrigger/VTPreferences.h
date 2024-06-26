@interface VTPreferences : NSObject

+ (id)deviceCategoryStringRepresentationForCategoryType:(unsigned long long)a0;
+ (id)sharedPreferences;

- (void)setOnetimeRemoteAssetQueryRanSuccessfully:(BOOL)a0;
- (BOOL)corespeechDaemonEnabled;
- (id)getMD5HashForSATEnrollmentAudioForLanguageCode:(id)a0;
- (BOOL)hasVoiceProfileIniCloudForLanguageCode:(id)a0;
- (BOOL)voiceTriggerEnabledForEndpointId:(id)a0;
- (BOOL)_storeModeEnabled;
- (void)setSecondPassAudioLoggingEnabled:(BOOL)a0;
- (BOOL)isSATAvailable;
- (void)_setVoiceTriggerEnabled:(BOOL)a0 sender:(id)a1 deviceType:(unsigned long long)a2 endpointId:(id)a3;
- (void)_setVoiceTriggerEnabled:(BOOL)a0 sender:(id)a1 deviceType:(unsigned long long)a2;
- (void)setFileLoggingIsEnabled:(BOOL)a0;
- (BOOL)useSiriActivationSPIForwatchOS;
- (BOOL)phraseSpotterEnabled;
- (id)_getVoiceTriggerEnabledKeyWithDeviceType:(unsigned long long)a0;
- (id)_languageCode;
- (BOOL)_gibraltarHasBuiltInMic;
- (void)setVoiceTriggerEnabled:(BOOL)a0 sender:(id)a1 endpointId:(id)a2;
- (BOOL)voiceTriggerEnabledWhenChargerDisconnected;
- (void)markSATEnrollmentSuccessForLanguageCode:(id)a0;
- (BOOL)_isLocalVoiceTriggerAvailable;
- (BOOL)voiceTriggerWasEverUsed;
- (void)setVoiceTriggerEnabled:(BOOL)a0;
- (BOOL)voiceTriggerEnabledWithDeviceType:(unsigned long long)a0 endpointId:(id)a1;
- (BOOL)isMultiPhraseVTEnabled;
- (BOOL)_isSATMarkedForMarker:(id)a0 languageCode:(id)a1;
- (void)enableVoiceTriggerUponVoiceProfileSyncForLanguage:(id)a0;
- (id)_localeIdentifier;
- (BOOL)voiceTriggerEnabled;
- (BOOL)useSiriActivationSPIForiOS;
- (void)setVoiceTriggerEnabledWhenChargerDisconnected:(BOOL)a0;
- (BOOL)_isNonEndpointDeviceType:(unsigned long long)a0;
- (void)setPhraseSpotterEnabled:(BOOL)a0;
- (id)init;
- (BOOL)fileLoggingIsEnabled;
- (id)localizedTriggerPhrase;
- (BOOL)voiceTriggerInCoreSpeech;
- (BOOL)isVoiceTriggerAvailable;
- (id)getSATEnrollmentPath;
- (id)audioInjectionFilePath;
- (BOOL)isSATEnrollmentMigratedForLanguageCode:(id)a0;
- (void)setVoiceTriggerEnabled:(BOOL)a0 sender:(id)a1 deviceType:(unsigned long long)a2 endpointId:(id)a3;
- (BOOL)isRemoteVoiceTriggerAvailable;
- (id)fileLoggingLevel;
- (BOOL)_voiceTriggerEnabledWithDeviceType:(unsigned long long)a0;
- (id)devicesWithVoiceProfileIniCloudForLanguage:(id)a0;
- (void)discardSATEnrollmentForLanguageCode:(id)a0;
- (void)synchronize;
- (id)localizedTriggerPhraseForLanguageCode:(id)a0;
- (id)_VTSATCachePath;
- (BOOL)_voiceTriggerEnabledWithDeviceType:(unsigned long long)a0 endpointId:(id)a1;
- (void)setFileLoggingLevel:(id)a0;
- (BOOL)secondPassAudioLoggingEnabled;
- (BOOL)gestureSubscriptionEnabled;
- (id)_getSATEnrollmentAudioPathForLanguageCodeForLegacyVoiceProfile:(id)a0;
- (BOOL)hasExplicitlySetVoiceTriggerEnabled;
- (void)setPhraseSpotterEnabled:(BOOL)a0 sender:(id)a1;
- (id)_getVoiceTriggerEnabledDidChangeNotificationStringWithDeviceType:(unsigned long long)a0;
- (void)discardAllSATEnrollment;
- (BOOL)onetimeRemoteAssetQueryRanSuccessfully;
- (BOOL)isSATEnrolledForLanguageCode:(id)a0;
- (BOOL)voiceTriggerEnabledWhenChargerConnected;
- (void)setVoiceTriggerEnabledWhenChargerConnected:(BOOL)a0;
- (void)setVoiceTriggerEnabled:(BOOL)a0 sender:(id)a1;
- (id)_VTSATBasePath;

@end
