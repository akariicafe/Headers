@class HDAssertion, HDCloudSyncOwnerIdentifierManager, NSDate, NSString, HKObserverSet, HDProfile, NSObject, HDCloudSyncSharedSummaryManager;
@protocol OS_dispatch_queue;

@interface HDCloudSyncManager : NSObject <HDContentProtectionObserver, HDDatabaseProtectedDataObserver, HDProfileReadyObserver, HDAnalyticsSubmissionCoordinatorDelegate> {
    HDAssertion *_preparedDatabaseAccessibilityAssertion;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSDate *_lock_lastSuccessfulPullDate;
    NSDate *_lock_lastSuccessfulPushDate;
    NSDate *_lock_lastDataUploadRequestStartDate;
    NSDate *_lock_lastDataUploadRequestCompletionDate;
    long long _lock_uploadRequestStatus;
    HKObserverSet *_observers;
    long long _inProgressSyncCount;
}

@property (readonly, weak, nonatomic) HDProfile *profile;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) HDCloudSyncOwnerIdentifierManager *ownerIdentifierManager;
@property (readonly) HDAssertion *preparedDatabaseAccessibilityAssertion;
@property (readonly) long long bytesPerChangeRecordAssetThreshold;
@property (readonly) long long bytesPerChangeRecordAssetThresholdHardLimit;
@property (readonly, nonatomic) BOOL supportsRebase;
@property (readonly, nonatomic) NSDate *lastSuccessfulPullDate;
@property (readonly, nonatomic) NSDate *lastSuccessfulPushDate;
@property (readonly, nonatomic) HDCloudSyncSharedSummaryManager *sharedSummaryManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_containerIdentifiersWithEncryptionSupportEnabled:(BOOL)a0 accountManateeEnabled:(BOOL)a1 internalSettingManateeEnabled:(BOOL)a2 resultHandler:(id /* block */)a3;

- (id)initWithProfile:(id)a0;
- (void)contentProtectionStateChanged:(long long)a0 previousState:(long long)a1;
- (void)_scheduleResetReceivedCloudSyncAnchorsAndRebaseForHFDRecovery;
- (void)addObserver:(id)a0 queue:(id)a1;
- (void)subscribeToDataAvailableNotificationsWithCompletion:(id /* block */)a0;
- (id)setupSharingToAccountWithIdentityLookupInfo:(id)a0 requireExistingRelationship:(BOOL)a1 requireZoneDeviceMode:(id)a2 completion:(id /* block */)a3;
- (void)profileDidBecomeReady:(id)a0;
- (id)_containerWithIdentifier:(id)a0 error:(id *)a1;
- (void)acceptShare:(id)a0 completion:(id /* block */)a1;
- (void)didCompleteSuccessfulPullWithDate:(id)a0;
- (BOOL)setShareOwnerParticipant:(id)a0 error:(id *)a1;
- (id)syncMedicalIDDataWithContext:(id)a0 completion:(id /* block */)a1;
- (void)removeObserver:(id)a0;
- (BOOL)persistRestoreCompletionDate:(id)a0 withError:(id *)a1;
- (void)fetchSyncStatusWithCompletion:(id /* block */)a0;
- (id)shareOwnerParticipantWithError:(id *)a0;
- (void)fetchCloudKitAccountInfoWithCompletion:(id /* block */)a0;
- (id)syncSessionForSyncStore:(id)a0 reason:(id)a1 delegate:(id)a2 accessibilityAssertion:(id)a3 excludedStores:(id)a4;
- (id)fetchShareParticipantsForSharingType:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)didCompleteSuccessfulPullOfUpdateWithDate:(id)a0;
- (id)fetchDescriptionWithContext:(id)a0 completion:(id /* block */)a1;
- (id)fetchSharingStatusForCurrentAppleIDWithOwnerEmailAddress:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)resetWithContext:(id)a0 completion:(id /* block */)a1;
- (id)removeParticipants:(id)a0 fromSharesWithCompletion:(id /* block */)a1;
- (void)cloudSyncRepositoriesWithCompletion:(id /* block */)a0;
- (void)database:(id)a0 protectedDataDidBecomeAvailable:(BOOL)a1;
- (void)didCompleteSuccessfulPushWithDate:(id)a0;
- (id)syncWithContext:(id)a0 completion:(id /* block */)a1;
- (void)unitTest_setSupportsRebase:(BOOL)a0;
- (void)subscribeToDataUploadRequestsWithCompletion:(id /* block */)a0;
- (id)disableAndDeleteAllSyncDataWithCompletion:(id /* block */)a0;
- (void)accountDeviceToDeviceEncryptionAvailabilityStatusWithCompletion:(id /* block */)a0;
- (void)configureForShareSetupMetadata:(id)a0 acceptedShares:(id)a1 completion:(id /* block */)a2;
- (void)reportDailyAnalyticsWithCoordinator:(id)a0 completion:(id /* block */)a1;
- (id)removeAllParticipantsForSharingType:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)fetchServerPreferredPushEnvironmentWithCompletion:(id /* block */)a0;
- (void)dealloc;
- (id)prepareForSharingWithCompletion:(id /* block */)a0;
- (id)leaveSharesWithCompletion:(id /* block */)a0;
- (BOOL)canPerformCloudSyncWithError:(id *)a0;
- (id)lastPushForwardProgressDate;
- (id)lookupParticipantWithIdentityLookUpInfo:(id)a0 completion:(id /* block */)a1;
- (void)prepareForPeriodicSync;
- (void)updateErrorRequiringUserAction:(id)a0;
- (void)requestDataUploadWithCompletion:(id /* block */)a0;

@end
