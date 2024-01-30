@class SSRVoiceProfileStorePrefs, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface SSRVoiceProfileStore : NSObject

@property (retain) NSMutableArray *voiceProfileArray;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) SSRVoiceProfileStorePrefs *storePrefs;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)updateVoiceProfile:(id)a0 withUserName:(id)a1;
- (id)deleteUserVoiceProfile:(id)a0;
- (void)cleanupVoiceProfileModelFilesForLocale:(id)a0;
- (id)userVoiceProfilesForAppDomain:(id)a0;
- (id)userVoiceProfilesForAppDomain:(id)a0 forLocale:(id)a1;
- (void)addUserVoiceProfile:(id)a0 withContext:(id)a1 withCompletion:(id /* block */)a2;
- (void)addImplicitUtterance:(id)a0 toVoiceProfile:(id)a1 withAsset:(id)a2 withTriggerSource:(id)a3 withAudioInput:(id)a4 withCompletion:(id /* block */)a5;
- (BOOL)checkIfVoiceProfile:(id)a0 needsUpdatedWith:(id)a1 withCategory:(unsigned long long)a2;
- (id)userVoiceProfilesForLocale:(id)a0;
- (id)userVoiceProfileForVoiceProfileID:(id)a0;
- (void)migrateVoiceProfilesIfNeededWithCompletionBlock:(id /* block */)a0;
- (BOOL)cleanupDuplicatedProfiles;
- (void)cleanupVoiceProfileStore:(id /* block */)a0;
- (void)retrainVoiceProfile:(id)a0 withContext:(id)a1 withCompletion:(id /* block */)a2;
- (id)initStore;
- (void)_loadVoiceProfiles;
- (void)_updateTrainedUsersWithAction:(unsigned long long)a0 UserVoiceProfile:(id)a1;
- (id)_deleteUserVoiceProfile:(id)a0;
- (void)_synchronizeSiriVoiceProfilesWithAssistant;
- (void)_retrainLiveOnOnboardedProfilesForLanguage:(id)a0 withForceRetrain:(BOOL)a1 withCompletion:(id /* block */)a2;
- (void)_logVoiceProfileConfusionWithCleanup:(BOOL)a0;
- (BOOL)evaluateImplicitAdditionPolicyWithScores:(id)a0 forProfile:(id)a1 withImplicitThreshold:(float)a2 withDeltaThreshold:(float)a3;
- (id)_getTopScoringProfileIdFromScores:(id)a0;
- (id)_retrainVoiceProfile:(id)a0 withContext:(id)a1;
- (id)_enrolledVoiceProfiles;
- (void)_saveTrainedUsers:(id)a0;
- (id)_retrainVoiceProfile:(id)a0 withContext:(id)a1 withUtterances:(id)a2;
- (void)logVoiceProfileConfusionWithCleanup:(BOOL)a0;
- (BOOL)_checkIfRetrainingRequiredForProfile:(id)a0;
- (id)copyAudioFiles:(id)a0 toProfile:(id)a1 forModelType:(unsigned long long)a2;

@end
