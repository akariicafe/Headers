@class CSVoiceIdXPCClient, NSObject;
@protocol OS_dispatch_queue;

@interface SSRVoiceProfileManager : NSObject

@property (nonatomic) unsigned long long currentDeviceCategory;
@property (retain, nonatomic) CSVoiceIdXPCClient *xpcClient;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (BOOL)hasVoiceProfileIniCloudForLanguageCode:(id)a0;
- (void)enableVoiceTriggerUponVoiceProfileSyncForLanguage:(id)a0;
- (void)isVoiceProfileUploadedToiCloudForLanguageCode:(id)a0 withCompletionBlock:(id /* block */)a1;
- (id)baseDir;
- (id)getSATEnrollmentPath;
- (BOOL)isSATEnrolledForSiriProfileId:(id)a0 forLanguageCode:(id)a1;
- (id)SSRSpeakerProfilesBasePath;
- (id)devicesWithVoiceProfileIniCloudForLanguage:(id)a0;
- (id)provisionedVoiceProfilesForAppDomain:(id)a0 withLocale:(id)a1;
- (id)voiceProfileForId:(id)a0;
- (BOOL)_isDirectory:(id)a0;
- (BOOL)_isRemoteVoiceTriggerAvailable;
- (BOOL)isSpeakerRecognitionAvailable;
- (id)getVoiceProfileAnalyticsForAppDomain:(id)a0 withLocale:(id)a1;
- (BOOL)isSATEnrollmentMigratedForSiriProfileId:(id)a0 forLanguageCode:(id)a1;
- (id)newVoiceProfileWithLocale:(id)a0 withAppDomain:(id)a1;
- (void)addUtterances:(id)a0 toProfile:(id)a1 withContext:(id)a2 withCompletion:(id /* block */)a3;
- (id)updateVoiceProfile:(id)a0 withUserName:(id)a1;
- (id)provisionedVoiceProfilesForLocale:(id)a0;
- (id)deleteUserVoiceProfile:(id)a0;
- (void)triggerVoiceProfileCleanupWithCompletion:(id /* block */)a0;
- (BOOL)triggerVoiceProfileDuplicatesCleanup;
- (void)triggerVoiceProfileMigrationWithCompletion:(id /* block */)a0;
- (void)cleanupVoiceProfileModelFilesForLocale:(id)a0;
- (void)pruneImplicitUtterancesOfProfile:(id)a0 withAsset:(id)a1;
- (void)triggerRetrainingVoiceProfile:(id)a0 withContext:(id)a1 withCompletion:(id /* block */)a2;
- (id)SSRBasePathForAppDomain:(id)a0;
- (id)discardSiriEnrollmentForProfileId:(id)a0 forLanguageCode:(id)a1;
- (id)_getVoiceProfilesForSiriProfileId:(id)a0 withLanguageCode:(id)a1;
- (void)_markVoiceProfileTrainingSyncForLanguage:(id)a0;
- (id)_CSSATDownloadPath;
- (id)_getUserVoiceProfileDownloadCacheDirectoryWithUpdatePath:(id)a0;
- (id)_downloadAndEnrollVoiceProfileForProfileId:(id)a0 withDownloadTriggerBlock:(id /* block */)a1;
- (id)_enrollVoiceProfileForSiriProfileId:(id)a0 fromCacheDirectoryPath:(id)a1 withCategoryType:(unsigned long long)a2;
- (void)_downloadVoiceProfileForProfileId:(id)a0 forDeviceCategory:(unsigned long long)a1 withDownloadTriggerBlock:(id /* block */)a2 withCompletion:(id /* block */)a3;
- (id)_getUserVoiceProfileDownloadCacheDirectoryForProfileId:(id)a0 forDeviceCategory:(unsigned long long)a1 forVoiceProfileVersion:(unsigned long long)a2;
- (id)_enableVoiceTriggerIfLanguageMatches:(id)a0;
- (id)_CSSATUploadPathForSiriProfileId:(id)a0;
- (id)_prepareVoiceProfileWithSiriProfileId:(id)a0 withUploadBlock:(id /* block */)a1;
- (id)_CSSATLegacyUploadPath;
- (id)_getVoiceProfilePathsToBeUploadedForSiriProfileId:(id)a0;
- (void)_copyExplicitEnrollmentFilesFromPath:(id)a0 toPath:(id)a1 withCompletion:(id /* block */)a2;
- (id)_copyVoiceProfileAtPath:(id)a0 toPath:(id)a1;
- (BOOL)_isMarkedForVoiceProfileTrainingSyncForLanguage:(id)a0;
- (BOOL)_isLegacyEnrollmentMarkedWith:(id)a0 forLanguageCode:(id)a1;
- (id)_CSSATCachePath;
- (id)modelDirectoryPathForProfile:(id)a0;
- (void)discardSiriEnrollmentForLanguageCode:(id)a0;
- (void)notifyImplicitTrainingUtteranceAvailable:(id)a0 forVoiceProfileId:(id)a1 withRecordDeviceInfo:(id)a2 withRecordCtxt:(id)a3 withVoiceTriggerCtxt:(id)a4 withOtherCtxt:(id)a5 withCompletion:(id /* block */)a6;
- (id)getUserVoiceProfileUpdateDirectory;
- (void)notifyUserVoiceProfileDownloadReadyForUser:(id)a0 getData:(id /* block */)a1 completion:(id /* block */)a2;
- (void)notifyUserVoiceProfileUpdateReady;
- (void)notifyUserVoiceProfileUploadCompleteForSiriProfileId:(id)a0 withError:(id)a1;
- (void)uploadUserVoiceProfileForSiriProfileId:(id)a0 withUploadTrigger:(id /* block */)a1 completion:(id /* block */)a2;
- (id)getUserVoiceProfileUploadPathWithEnrolledLanguageList:(id *)a0;
- (void)notifyUserVoiceProfileUploadComplete;
- (id)getCachedVoiceProfileAvailabilityMetaBlob;
- (BOOL)hasVoiceProfileIniCloudForLanguageCode:(id)a0 withBackupMetaBlob:(id)a1;
- (id)markSATEnrollmentSuccessForVoiceProfile:(id)a0;
- (void)deleteAllVoiceProfilesForAppDomain:(id)a0;

@end
