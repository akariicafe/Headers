@class ASActivityDataNotificationManager, ASContactsManager, HDProfile, ASFakeBulletinManager, ASActivityDataBulletinManager, ASRelationshipManager, ASFakingManager, ASActivityDataManager, ASCompetitionBulletinManager, ASGatewayManager, ASCompetitionManager, ASFriendInviteBulletinManager, ASAchievementManager, ASPeriodicUpdateManager, ASSetupManager, HDKeyValueDomain, NSString, ASFriendListManager, NSObject, ASCloudKitManager;
@protocol OS_dispatch_queue, OS_dispatch_group, ASBulletinPostingManager;

@interface ASActivitySharingManager : NSObject <HDHealthDaemonReadyObserver, HDNanoSyncManagerObserver> {
    NSObject<OS_dispatch_queue> *_readWriteQueue;
    NSObject<OS_dispatch_queue> *_submanagerBarrierQueue;
    NSObject<OS_dispatch_group> *_submanagerBarrierGroup;
    BOOL _submanagerInitializationComplete;
    BOOL _submanagerProcessingStarted;
    BOOL _isActivityAppVisible;
    int _pairingStatusChangedToken;
}

@property (readonly, weak, nonatomic) HDProfile *profile;
@property (readonly, nonatomic) BOOL isWatch;
@property (readonly, nonatomic) ASAchievementManager *achievementManager;
@property (readonly, nonatomic) ASActivityDataManager *activityDataManager;
@property (readonly, nonatomic) ASActivityDataNotificationManager *activityDataNotificationManager;
@property (readonly, nonatomic) ASActivityDataBulletinManager *activityDataBulletinManager;
@property (readonly, nonatomic) ASCloudKitManager *cloudKitManager;
@property (readonly, nonatomic) ASCompetitionManager *competitionManager;
@property (readonly, nonatomic) ASCompetitionBulletinManager *competitionBulletinManager;
@property (readonly, nonatomic) ASContactsManager *contactsManager;
@property (readonly, nonatomic) ASFakeBulletinManager *fakeBulletinManager;
@property (readonly, nonatomic) ASFakingManager *fakingManager;
@property (readonly, nonatomic) ASFriendInviteBulletinManager *friendInviteBulletinManager;
@property (readonly, nonatomic) ASFriendListManager *friendListManager;
@property (readonly, nonatomic) ASGatewayManager *gatewayManager;
@property (readonly, nonatomic) ASPeriodicUpdateManager *periodicUpdateManager;
@property (readonly, nonatomic) ASRelationshipManager *relationshipManager;
@property (readonly, nonatomic) id<ASBulletinPostingManager> bulletinPostingManager;
@property (readonly, nonatomic) ASSetupManager *setupManager;
@property (readonly, nonatomic) HDKeyValueDomain *deviceLocalActivitySharingKeyValueDomain;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pushActivityDataToAllFriendsWithCompletion:(id /* block */)a0;
- (void)sendInviteRequestToDestination:(id)a0 callerID:(id)a1 serviceIdentifier:(id)a2 completion:(id /* block */)a3;
- (void)_mainQueue_notifySubmanagersOfManagerReady;
- (void)queryAppBadgeCountWithCompletion:(id /* block */)a0;
- (void)acceptInviteRequestFromFriendWithUUID:(id)a0 completion:(id /* block */)a1;
- (BOOL)_mainQueue_startSubmanagerProcessingIfNeeded;
- (void)fetchAreMultipleDevicesSharingDataForSnapshotIndex:(id)a0 withCompletion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)_handleFitnessAppsAllowed:(id)a0;
- (void)_handleFitnessAppsRestricted:(id)a0;
- (void)sendCompetitionRequestToFriendWithUUID:(id)a0 completion:(id /* block */)a1;
- (void)fetchAllDataIfTimeSinceLastFetchIsGreaterThan:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)dealloc;
- (void)ignoreCompetitionRequestFromFriendWithUUID:(id)a0 completion:(id /* block */)a1;
- (void)_applicationsInstalled:(id)a0;
- (BOOL)_mainQueue_stopSubmanagerProcessingIfNeeded;
- (void)removeFriendListObserver:(id)a0;
- (void)_deactivateActivitySharingManager;
- (void)daemonReady:(id)a0;
- (void)sendWithdrawInviteRequestToFriendWithUUID:(id)a0 completion:(id /* block */)a1;
- (BOOL)_mainQueue_shouldCompleteSetup;
- (void)removeFriendWithUUID:(id)a0 completion:(id /* block */)a1;
- (void)fetchFriendWithRemoteUUID:(id)a0 completion:(id /* block */)a1;
- (void)setMuteEnabled:(BOOL)a0 forFriendWithUUID:(id)a1 completion:(id /* block */)a2;
- (void)_activateActivitySharingManager;
- (void)_mainQueue_completeSetupIfNeeded;
- (void)fetchAllDataWithCompletion:(id /* block */)a0;
- (void)_mainQueue_nanoRegistryInfoChanged;
- (id)initWithProfile:(id)a0 isWatch:(BOOL)a1;
- (void)nanoSyncManager:(id)a0 pairedDevicesChanged:(id)a1;
- (void)acceptCompetitionRequestFromFriendWithUUID:(id)a0 completion:(id /* block */)a1;
- (id)allFriends;
- (void)clearFriendListWithCompletion:(id /* block */)a0;
- (void)setActivityDataVisible:(BOOL)a0 toFriendWithUUID:(id)a1 completion:(id /* block */)a2;
- (void)pushFakeActivityDataToAllFriendsWithCompletion:(id /* block */)a0;
- (void)cloudKitAccountStatusWithCompletion:(id /* block */)a0;
- (void)_applicationsUninstalled:(id)a0;
- (void)completeCompetitionWithFriendWithUUID:(id)a0 completion:(id /* block */)a1;
- (void)handleNotificationResponse:(id)a0 completion:(id /* block */)a1;
- (void)expireChangeTokenWithCompletion:(id /* block */)a0;
- (void)addFriendListObserver:(id)a0;
- (void)ignoreInviteRequestFromFriendWithUUID:(id)a0 completion:(id /* block */)a1;
- (void)_waitUntilSubmanagersReady;

@end
