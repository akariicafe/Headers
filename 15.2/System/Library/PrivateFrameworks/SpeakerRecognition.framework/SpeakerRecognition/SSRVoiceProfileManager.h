@class NSUUID, SSRRemoteControlClient, NSObject;
@protocol OS_dispatch_queue;

@interface SSRVoiceProfileManager : NSObject

@property (nonatomic) unsigned long long currentDeviceCategory;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSUUID *endpointUUID;
@property (retain, nonatomic) SSRRemoteControlClient *remoteControlClient;

+ (id)sharedInstance;
+ (id)sharedInstanceWithEndpointId:(id)a0;

- (BOOL)_isLegacyEnrollmentMarkedWith:(id)a0 forLanguageCode:(id)a1;
- (id)baseDir;
- (void)notifyUserVoiceProfileDownloadReadyForUser:(id)a0 getData:(id /* block */)a1 completion:(id /* block */)a2;
- (BOOL)hasVoiceProfileIniCloudForLanguageCode:(id)a0;
- (id)_downloadAndEnrollVoiceProfileForProfileId:(id)a0 withDownloadTriggerBlock:(id /* block */)a1;
- (void)notifyUserVoiceProfileUploadComplete;
- (void)triggerVoiceProfileCleanupWithCompletion:(id /* block */)a0;
- (void)notifyUserVoiceProfileUpdateReady;
- (void)discardSiriEnrollmentForLanguageCode:(id)a0;
- (id)_getVoiceProfilesForSiriProfileId:(id)a0 withLanguageCode:(id)a1;
- (BOOL)isSpeakerRecognitionAvailable;
- (id)SSRBasePathForAppDomain:(id)a0;
- (id)_CSSATCachePathForAppDomain:(id)a0;
- (id)_CSSATCachePath;
- (id)voiceProfileForId:(id)a0;
- (BOOL)_isDirectory:(id)a0;
- (id)deleteUserVoiceProfile:(id)a0;
- (void)cleanupVoiceProfileModelFilesForLocale:(id)a0;
- (id)updateVoiceProfile:(id)a0 withUserName:(id)a1;
- (BOOL)isSATEnrollmentMigratedForSiriProfileId:(id)a0 forLanguageCode:(id)a1;
- (id)provisionedVoiceProfilesForLocale:(id)a0;
- (id)markSATEnrollmentSuccessForVoiceProfile:(id)a0;
- (id)_copyVoiceProfileAtPath:(id)a0 toPath:(id)a1;
- (id)discardSiriEnrollmentForProfileId:(id)a0 forLanguageCode:(id)a1;
- (id)getCacheDirectoryForAppDomain:(id)a0;
- (id)_enableVoiceTriggerIfLanguageMatches:(id)a0;
- (void)enableVoiceTriggerUponVoiceProfileSyncForLanguage:(id)a0;
- (void)triggerVoiceProfileDownload;
- (id)_enrollVoiceProfileForSiriProfileId:(id)a0 fromCacheDirectoryPath:(id)a1 withCategoryType:(unsigned long long)a2;
- (id)getCachedVoiceProfileAvailabilityMetaBlob;
- (id)newVoiceProfileWithLocale:(id)a0 withAppDomain:(id)a1;
- (id)_getUserVoiceProfileDownloadCacheDirectoryForProfileId:(id)a0 forDeviceCategory:(unsigned long long)a1 forVoiceProfileVersion:(unsigned long long)a2;
- (BOOL)_isMarkedForVoiceProfileTrainingSyncForLanguage:(id)a0;
- (id)getVoiceProfileAnalyticsForAppDomain:(id)a0 withLocale:(id)a1;
- (id)getUserVoiceProfileUpdateDirectory;
- (void)_copyExplicitEnrollmentFilesFromPath:(id)a0 toPath:(id)a1 withCompletion:(id /* block */)a2;
- (BOOL)triggerVoiceProfileDuplicatesCleanup;
- (id)initWithEndpointId:(id)a0;
- (id)provisionedVoiceProfilesForAppDomain:(id)a0 withLocale:(id)a1;
- (id)_prepareVoiceProfileWithSiriProfileId:(id)a0 withUploadBlock:(id /* block */)a1;
- (id)_CSSATLegacyUploadPath;
- (void).cxx_destruct;
- (void)notifyImplicitTrainingUtteranceAvailable:(id)a0 forVoiceProfileId:(id)a1 withRecordDeviceInfo:(id)a2 withRecordCtxt:(id)a3 withVoiceTriggerCtxt:(id)a4 withOtherCtxt:(id)a5 withCompletion:(id /* block */)a6;
- (id)getUserVoiceProfileUploadPathWithEnrolledLanguageList:(id *)a0;
- (id)init;
- (void)_downloadVoiceProfileForProfileId:(id)a0 forDeviceCategory:(unsigned long long)a1 withDownloadTriggerBlock:(id /* block */)a2 withCompletion:(id /* block */)a3;
- (void)triggerRetrainingVoiceProfile:(id)a0 withContext:(id)a1 withCompletion:(id /* block */)a2;
- (void)isImplicitTrainingRequiredForVoiceProfileId:(id)a0 locale:(id)a1 completion:(id /* block */)a2;
- (void)uploadUserVoiceProfileForSiriProfileId:(id)a0 withUploadTrigger:(id /* block */)a1 completion:(id /* block */)a2;
- (id)_getVoiceProfilePathsToBeUploadedForSiriProfileId:(id)a0;
- (id)_getUserVoiceProfileDownloadCacheDirectoryWithUpdatePath:(id)a0;
- (id)_CSSATDownloadPath;
- (id)getSATEnrollmentPath;
- (void)_markVoiceProfileTrainingSyncForLanguage:(id)a0;
- (BOOL)_checkIfDownloadRequiredForProfileId:(id)a0;
- (void)notifyUserVoiceProfileUploadCompleteForSiriProfileId:(id)a0 withError:(id)a1;
- (id)devicesWithVoiceProfileIniCloudForLanguage:(id)a0;
- (void)addUtterances:(id)a0 toProfile:(id)a1 withContext:(id)a2 withCompletion:(id /* block */)a3;
- (BOOL)_isRemoteVoiceTriggerAvailable;
- (id)SSRSpeakerProfilesBasePath;
- (id)_CSSATUploadPathForSiriProfileId:(id)a0;
- (BOOL)hasVoiceProfileIniCloudForLanguageCode:(id)a0 withBackupMetaBlob:(id)a1;
- (void)pruneImplicitUtterancesOfProfile:(id)a0 withAsset:(id)a1;
- (BOOL)isSATEnrolledForSiriProfileId:(id)a0 forLanguageCode:(id)a1;
- (void)triggerVoiceProfileMigrationWithCompletion:(id /* block */)a0;
- (void)isVoiceProfileUploadedToiCloudForLanguageCode:(id)a0 withCompletionBlock:(id /* block */)a1;
- (void)deleteAllVoiceProfilesForAppDomain:(id)a0;
- (id)modelDirectoryPathForProfile:(id)a0;

@end
