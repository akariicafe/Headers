@interface SSRUtils : NSObject

+ (void)segmentVoiceTriggerFromAudioFile:(id)a0 withVTEventInfo:(id)a1 withStorePayloadPortion:(BOOL)a2 withCompletion:(id /* block */)a3;
+ (void)streamAudioFromFileUrl:(id)a0 audioStreamBasicDescriptor:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })a1 samplesPerStreamChunk:(unsigned long long)a2 audioDataAvailableHandler:(id /* block */)a3;
+ (id)readJsonFileAtPath:(id)a0;
+ (BOOL)encryptFileAt:(id)a0 andSaveTo:(id)a1 error:(id *)a2;
+ (id)getImplicitEnrollmentUtterancesFromDirectory:(id)a0;
+ (unsigned long long)getVoiceProfileProductCategoryFromVersionFilePath:(id)a0;
+ (unsigned long long)explicitSpIdTypeForSpId:(unsigned long long)a0;
+ (id)ssrAudioLogsDir;
+ (id)satConfigFileNameForCSSpIdType:(unsigned long long)a0 forModelType:(unsigned long long)a1 forAssetType:(unsigned long long)a2;
+ (void)logSpeakerRecognitionGradingMetadataAtFilepath:(id)a0 withScoreInfo:(id)a1;
+ (id)stringForInvocationStyle:(unsigned long long)a0;
+ (BOOL)isCurrentDeviceCompatibleWithVoiceProfileAt:(id)a0;
+ (id)getVoiceProfileForSiriProfileId:(id)a0 forLanguageCode:(id)a1;
+ (BOOL)isCurrentDeviceCompatibleWithNewerVoiceProfileAt:(id)a0;
+ (void)createDirectoryIfDoesNotExist:(id)a0;
+ (id)stringForVoiceProfileRetrainerType:(unsigned long long)a0;
+ (id)psrConfigFileNameForCSSpIdType:(unsigned long long)a0;
+ (BOOL)isSpeakerRecognitionSupportedInLocale:(id)a0;
+ (id)moveContentsOfSrcDirectory:(id)a0 toDestDirectory:(id)a1;
+ (id)getExplicitMarkedEnrollmentUtterancesFromDirectory:(id)a0;
+ (id)removeItemAtPath:(id)a0;
+ (id)getContentsOfDirectory:(id)a0;
+ (id)spidAudioTrainUtterancesDir;
+ (unsigned long long)spIdTypeForString:(id)a0;
+ (void)getEnrollmentUtterancesCountFromDirectory:(id)a0 withCountBlock:(id /* block */)a1;
+ (unsigned long long)deviceCategoryForDeviceProductType:(id)a0;
+ (id)getVoiceProfileIdentityFromVersionFilePath:(id)a0;
+ (void)dumpFilesInDirectory:(id)a0;
+ (id)getImplicitUtteranceCacheDirectory;
+ (id)satConfigFileNameForCSSpIdType:(unsigned long long)a0;
+ (long long)getNumberOfAudioFilesInDirectory:(id)a0;
+ (id)getEnrollmentUtterancesFromDirectory:(id)a0;
+ (id)_getUtterancesFromDirectory:(id)a0;
+ (void)getHomeUserIdForVoiceProfile:(id)a0 withCompletion:(id /* block */)a1;
+ (BOOL)ssrAudioLogsCountWithinPrivacyLimit;
+ (id)stringForCSSpIdType:(unsigned long long)a0;
+ (id)spIdVoiceProfileImportRootDir;
+ (id)stringForSpeakerRecognizerType:(unsigned long long)a0;
+ (id)combineScoreFromPSR:(id)a0 fromSAT:(id)a1 withCombinedWt:(float)a2;
+ (id)getVoiceProfilesForSiriProfileId:(id)a0;
+ (id)getExplicitEnrollmentUtterancesFromDirectory:(id)a0;
+ (void)cleanupOrphanedVoiceIdGradingFiles;
+ (id)deviceCategoryStringRepresentationForCategoryType:(unsigned long long)a0;

@end
