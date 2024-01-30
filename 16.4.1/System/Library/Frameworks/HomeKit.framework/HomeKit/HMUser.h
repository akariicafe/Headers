@class NSUUID, _HMContext, NSDictionary, HMFPairingIdentity, HMHome, NSObject, IDSURI, HMHomeAccessControl, HMUserListeningHistoryUpdateControl, HMPhotosPersonManagerSettings, NSString, HMMutableArray, HMSettingsController, HMSettings, HMPhotosPersonManager, HMMediaContentProfileAccessControl, HMAssistantAccessControl, HMAnnounceUserSettings, HMUserSettingsAdapter;
@protocol OS_dispatch_queue, HMUserDelegatePrivate;

@interface HMUser : NSObject <HMFLogging, HMFMessageReceiver, HMSettingsContainer, NSSecureCoding, HMObjectMerge> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    HMMutableArray *_pendingAccessoryInvitations;
    NSString *_senderCorrelationIdentifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) HMPhotosPersonManager *photosPersonManager;
@property (readonly, copy) HMPhotosPersonManagerSettings *photosPersonManagerSettings;
@property (readonly, copy) HMPhotosPersonManagerSettings *personManagerSettings;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *userID;
@property (readonly, copy, nonatomic) IDSURI *userIDSURI;
@property (copy) HMFPairingIdentity *pairingIdentity;
@property (weak) id<HMUserDelegatePrivate> delegate;
@property (readonly) HMSettingsController *settingsController;
@property (readonly) HMSettingsController *privateSettingsController;
@property (retain) HMUserSettingsAdapter *privateSettingsAdapter;
@property (retain) HMUserSettingsAdapter *sharedSettingsAdapter;
@property (retain) HMAnnounceUserSettings *announceUserSettings;
@property BOOL needsiTunesMultiUserRepair;
@property (retain) NSDictionary *pendingPrivateSettings;
@property (retain) NSDictionary *pendingSharedSettings;
@property BOOL supportsSharedHomeHH2AutoMigration;
@property (retain, nonatomic) HMHomeAccessControl *homeAccessControl;
@property (copy) HMAssistantAccessControl *assistantAccessControl;
@property (copy) HMMediaContentProfileAccessControl *mediaContentProfileAccessControl;
@property (copy) HMUserListeningHistoryUpdateControl *userListeningHistoryUpdateControl;
@property (readonly, nonatomic) NSUUID *uuid;
@property (weak, nonatomic) HMHome *home;
@property (retain) _HMContext *context;
@property (nonatomic, getter=isCurrentUser) BOOL currentUser;
@property (retain) HMPhotosPersonManager *photosPersonManager;
@property (copy) HMPhotosPersonManagerSettings *photosPersonManagerSettings;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) HMSettings *settings;
@property (readonly) HMSettings *privateSettings;
@property (readonly) BOOL settingsInitialized;

+ (id)logCategory;

- (void)encodeWithCoder:(id)a0;
- (id)logIdentifier;
- (id)initWithCoder:(id)a0;
- (id)messageDestination;
- (id)senderCorrelationIdentifier;
- (void)_unconfigure;
- (id)init;
- (void).cxx_destruct;
- (id)assistantAccessControlForHome:(id)a0;
- (void)fetchAllPairingIdentitiesWithCompletionHandler:(id /* block */)a0;
- (void)pairingIdentityWithCompletionHandler:(id /* block */)a0;
- (id)userListeningHistoryUpdateControlForHome:(id)a0;
- (id)userSettingsForHome:(id)a0;
- (void)__configureWithContext:(id)a0 home:(id)a1;
- (id)_filterAccessoryInvitationsFromOutgoingInvitation:(id)a0;
- (void)_handleMultiUserStatusChangedNotification:(id)a0;
- (void)_handleUpdatedAssistantAccessControl:(id)a0;
- (void)_mergeUserPairingIdentityIfNecessary:(id)a0 withNewPairingIdentity:(id)a1;
- (BOOL)_mergeWithNewAccessoryInvitations:(id)a0;
- (BOOL)_mergeWithNewObject:(id)a0;
- (void)_registerNotificationHandlers;
- (void)_unconfigureContext;
- (void)_updatePresenceAuthorizationStatus:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)configurePhotosPersonManagerWithSettings:(id)a0;
- (void)createConfigureAndMergePrivateSettingsIfNecessary:(id)a0 withContext:(id)a1;
- (void)createConfigureAndMergeSharedSettingsIfNecessary:(id)a0 withContext:(id)a1;
- (void)createHH1PrivateSettingsControllerIfNecessary;
- (void)createHH1SettingsControllerIfNecessary;
- (void)fetchShareLookupInfo:(id /* block */)a0;
- (id)initWithUserID:(id)a0 name:(id)a1 uuid:(id)a2 home:(id)a3;
- (id)initWithUserID:(id)a0 name:(id)a1 uuid:(id)a2 home:(id)a3 homeAccessControl:(id)a4;
- (id)mediaContentProfileAccessControlForHome:(id)a0;
- (BOOL)mergePendingAccessoryInvitationsWithOutgoingInvitation:(id)a0;
- (id)pendingAccessoryInvitations;
- (void)sendClientShareRepairRequest:(id)a0 containerID:(id)a1 completion:(id /* block */)a2;
- (void)sendClientShareURL:(id)a0 shareToken:(id)a1 containerID:(id)a2 fromUser:(id)a3 completion:(id /* block */)a4;
- (void)setNeedsiTunesMultiUserRepair:(BOOL)a0 completion:(id /* block */)a1;
- (void)setPendingAccessoryInvitationsWithOutgoingInvitation:(id)a0;
- (void)updateAnnounceUserSettings:(id)a0 forHome:(id)a1 completionHandler:(id /* block */)a2;
- (void)updateAssistantAccessControl:(id)a0 forHome:(id)a1 completionHandler:(id /* block */)a2;
- (void)updateHomeAccessControl:(BOOL)a0 remoteAccess:(BOOL)a1 announceAccess:(BOOL)a2 camerasAccess:(id)a3;
- (void)updateMediaContentProfileAccessControl:(id)a0 forHome:(id)a1 completionHandler:(id /* block */)a2;
- (void)updatePersonManagerSettings:(id)a0 completion:(id /* block */)a1;
- (void)updatePhotosPersonManagerSettings:(id)a0 completion:(id /* block */)a1;
- (void)updatePresenceAuthorizationStatus:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)updateUserListeningHistoryUpdateControl:(id)a0 forHome:(id)a1 completionHandler:(id /* block */)a2;

@end
