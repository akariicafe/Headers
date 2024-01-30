@class HMDCloudShareMessenger, HMFTimer, HMDCloudShareParticipantsManager, NSString, HMDCloudShareTrustManagerMetricsEventDispatcher, HMBCloudZone, NSObject, HMBShareUserID, HMBLocalZone, HMFUnfairLock;
@protocol HMDDatabase, HMDCloudShareTrustManagerDelegate, OS_dispatch_queue, HMDCloudShareTrustManagerDataSource;

@interface HMDCloudShareTrustManager : HMFObject <HMBCloudZoneDelegate, HMBLocalZoneDelegate, HMDCloudShareMessengerDelegate, HMDCloudShareParticipantsManagerDataSource, HMDCloudShareParticipantsManagerDelegate, HMDCloudShareTrustManagerMetricsEventDispatcherDataSource, HMDDatabaseDelegate, HMFLogging, HMFTimerDelegate> {
    HMFUnfairLock *_lock;
}

@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) id<HMDDatabase> database;
@property (readonly) HMDCloudShareMessenger *cloudShareMessenger;
@property (readonly, getter=isOwnedTrust) BOOL ownedTrust;
@property long long configureState;
@property (retain) HMBCloudZone *cloudZone;
@property (retain) HMBLocalZone *localZone;
@property (retain) HMDCloudShareParticipantsManager *cloudShareParticipantManager;
@property (retain) HMFTimer *requestInviteTimer;
@property (retain) HMDCloudShareTrustManagerMetricsEventDispatcher *metricsEventDispatcher;
@property (retain) HMBShareUserID *ownerCloudShareID;
@property (copy) id /* block */ participantsManagerFactory;
@property (copy) id /* block */ requestInviteTimerFactory;
@property (weak) id<HMDCloudShareTrustManagerDataSource> dataSource;
@property (weak) id<HMDCloudShareTrustManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)configure;
- (void)_configure;
- (void)timerDidFire:(id)a0;
- (id)attributeDescriptions;
- (id)logIdentifier;
- (void).cxx_destruct;
- (id)localZone:(id)a0 didProcessModelDeletion:(id)a1;
- (id)localZone:(id)a0 didProcessModelCreation:(id)a1;
- (id)localZone:(id)a0 didProcessModelUpdate:(id)a1;
- (void)cloudZone:(id)a0 didRemoveParticipantWithClientIdentifier:(id)a1;
- (BOOL)canUseUntrustedAccountHandlesForParticipantManager:(id)a0;
- (BOOL)manager:(id)a0 shouldShareWithUser:(id)a1;
- (struct CloudShareTrustManagerTrustStatusCounts { long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; })trustStatusCountsForCloudShareTrustManagerMetricsEventDispatcher:(id)a0;
- (long long)trustConfigureStateForCloudShareTrustManagerMetricsEventDispatcher:(id)a0;
- (BOOL)isFromOwnerForCloudShareTrustManagerMetricsEventDispatcher:(id)a0;
- (id)homeForCloudShareTrustManagerMetricsEventDispatcher:(id)a0;
- (void)database:(id)a0 didCreateZoneWithName:(id)a1 isPrivate:(BOOL)a2;
- (void)database:(id)a0 didRemoveZoneWithName:(id)a1 isPrivate:(BOOL)a2;
- (void)messenger:(id)a0 didReceiveInvitationData:(id)a1 completion:(id /* block */)a2;
- (void)messengerDidReceiveInvitationRequest:(id)a0;
- (void)manager:(id)a0 didRequestSendForInvitation:(id)a1 toUser:(id)a2;
- (id)initWithDatabase:(id)a0 isOwnedTrust:(BOOL)a1 messageTargetUUID:(id)a2 queue:(id)a3 ownerCloudShareID:(id)a4;
- (id)initWithDatabase:(id)a0 isOwnedTrust:(BOOL)a1 messageTargetUUID:(id)a2 queue:(id)a3 shareMessenger:(id)a4 ownerCloudShareID:(id)a5;
- (void)_configureWithOwnedZone;
- (void)_configureWithSharedZone;
- (void)_requestShareInvitationForSharedZone;
- (void)_configureWithFetchZoneResult:(id)a0 error:(id)a1;
- (void)_configureOwnerCloudShareIDWithCloudZone:(id)a0;
- (void)_finishConfigure;
- (BOOL)isTrustConfigured;
- (void)removeTrust;
- (void)updateCurrentUserCloudShareID;
- (void)updateSharedUsersCloudShareIDs;
- (void)discoverUntrustedUsers;
- (void)homeDidBecomeTrustZoneCapable:(id)a0;
- (void)_homeDidBecomeTrustZoneCapable:(id)a0;
- (BOOL)isFromOwner;
- (struct CloudShareTrustManagerTrustStatusCounts { long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; })trustStatusCounts;
- (void)_didCreateZone;
- (void)_didRemoveZone;
- (void)_startRequestInviteTimer;
- (void)_cancelRequestInviteTimer;

@end
