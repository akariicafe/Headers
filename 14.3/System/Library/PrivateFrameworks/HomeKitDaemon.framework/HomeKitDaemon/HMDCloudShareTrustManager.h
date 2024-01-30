@class HMDCloudShareMessenger, HMFTimer, HMDCloudShareParticipantsManager, NSString, HMBCloudZone, HMBShareUserID, NSObject, HMBLocalZone, HMFUnfairLock;
@protocol HMDDatabase, HMDCloudShareTrustManagerDelegate, OS_dispatch_queue, HMDCloudShareTrustManagerDataSource;

@interface HMDCloudShareTrustManager : HMFObject <HMBCloudZoneDelegate, HMBLocalZoneDelegate, HMDCloudShareMessengerDelegate, HMDCloudShareParticipantsManagerDataSource, HMDCloudShareParticipantsManagerDelegate, HMDDatabaseDelegate, HMFLogging, HMFTimerDelegate> {
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

- (void)_configure;
- (void)configure;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (void)timerDidFire:(id)a0;
- (id)logIdentifier;
- (id)localZone:(id)a0 didProcessModelDeletion:(id)a1;
- (id)localZone:(id)a0 didProcessModelCreation:(id)a1;
- (id)localZone:(id)a0 didProcessModelUpdate:(id)a1;
- (void)cloudZone:(id)a0 didRemoveParticipantWithClientIdentifier:(id)a1;
- (BOOL)manager:(id)a0 shouldShareWithUser:(id)a1;
- (BOOL)canUseUntrustedAccountHandlesForParticipantManager:(id)a0;
- (void)manager:(id)a0 didRequestSendForInvitation:(id)a1 toUser:(id)a2;
- (void)messenger:(id)a0 didReceiveInvitationData:(id)a1 completion:(id /* block */)a2;
- (void)messengerDidReceiveInvitationRequest:(id)a0;
- (void)database:(id)a0 didCreateZoneWithName:(id)a1 isPrivate:(BOOL)a2;
- (void)database:(id)a0 didRemoveZoneWithName:(id)a1 isPrivate:(BOOL)a2;
- (id)initWithDatabase:(id)a0 isOwnedTrust:(BOOL)a1 messageTargetUUID:(id)a2 queue:(id)a3 shareMessenger:(id)a4 ownerCloudShareID:(id)a5;
- (void)homeDidBecomeTrustZoneCapable:(id)a0;
- (void)_configureWithOwnedZone;
- (void)_configureWithSharedZone;
- (void)_configureWithFetchZoneResult:(id)a0 error:(id)a1;
- (void)_requestShareInvitationForSharedZone;
- (void)_startRequestInviteTimer;
- (void)_configureOwnerCloudShareIDWithCloudZone:(id)a0;
- (void)_finishConfigure;
- (void)updateCurrentUserCloudShareID;
- (void)updateSharedUsersCloudShareIDs;
- (void)discoverUntrustedUsers;
- (void)_homeDidBecomeTrustZoneCapable:(id)a0;
- (void)_didCreateZone;
- (void)_didRemoveZone;
- (void)_cancelRequestInviteTimer;
- (id)initWithDatabase:(id)a0 isOwnedTrust:(BOOL)a1 messageTargetUUID:(id)a2 queue:(id)a3 ownerCloudShareID:(id)a4;
- (void)removeTrust;

@end
