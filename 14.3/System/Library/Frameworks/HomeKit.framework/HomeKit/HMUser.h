@class HMAnnounceUserSettings, HMHome, HMFPairingIdentity, NSObject, IDSURI, HMHomeAccessControl, HMPhotosPersonManagerSettings, HMMutableArray, NSString, HMSettingsController, HMSettings, HMFUnfairLock, HMPhotosPersonManager, HMAssistantAccessControl, HMMediaContentProfileAccessControl, _HMContext, NSUUID;
@protocol OS_dispatch_queue, HMUserDelegatePrivate;

@interface HMUser : NSObject <HMFLogging, HMFMessageReceiver, HMSettingsContainer, NSSecureCoding, HMObjectMerge> {
    HMFUnfairLock *_lock;
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
@property (retain) HMAnnounceUserSettings *announceUserSettings;
@property BOOL needsiTunesMultiUserRepair;
@property (retain, nonatomic) HMHomeAccessControl *homeAccessControl;
@property (copy) HMAssistantAccessControl *assistantAccessControl;
@property (copy) HMMediaContentProfileAccessControl *mediaContentProfileAccessControl;
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

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)updateAssistantAccessControl:(id)a0 forHome:(id)a1 completionHandler:(id /* block */)a2;
- (void)sendClientShareURL:(id)a0 shareToken:(id)a1 containerID:(id)a2 fromUser:(id)a3 completion:(id /* block */)a4;
- (void)fetchShareLookupInfo:(id /* block */)a0;
- (BOOL)_mergeWithNewObject:(id)a0 operations:(id)a1;
- (void)_unconfigureContext;
- (void)_handleUpdatedAssistantAccessControl:(id)a0;
- (void)_unconfigure;
- (void)_handleMultiUserStatusChangedNotification:(id)a0;
- (id)_filterAccessoryInvitationsFromOutgoingInvitation:(id)a0;
- (void)_updatePresenceAuthorizationStatus:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (id)pendingAccessoryInvitations;
- (void)updateAnnounceUserSettings:(id)a0 forHome:(id)a1 completionHandler:(id /* block */)a2;
- (id)mediaContentProfileAccessControlForHome:(id)a0;
- (void)sendClientShareRepairRequest:(id)a0 containerID:(id)a1 completion:(id /* block */)a2;
- (void)updateMediaContentProfileAccessControl:(id)a0 forHome:(id)a1 completionHandler:(id /* block */)a2;
- (void)setNeedsiTunesMultiUserRepair:(BOOL)a0 completion:(id /* block */)a1;
- (void)updatePresenceAuthorizationStatus:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)__configureWithContext:(id)a0 home:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)pairingIdentityWithCompletionHandler:(id /* block */)a0;
- (id)assistantAccessControlForHome:(id)a0;
- (id)senderCorrelationIdentifier;
- (id)userSettingsForHome:(id)a0;
- (void)updatePhotosPersonManagerSettings:(id)a0 completion:(id /* block */)a1;
- (void)configurePhotosPersonManagerWithSettings:(id)a0;
- (void)fetchPersonManagerSettingsWithCompletion:(id /* block */)a0;
- (void)updatePersonManagerSettings:(id)a0 completion:(id /* block */)a1;
- (id)initWithUserID:(id)a0 name:(id)a1 uuid:(id)a2 home:(id)a3;
- (BOOL)_mergeWithNewAccessoryInvitations:(id)a0 operations:(id)a1;
- (void)_registerNotificationHandlers;
- (id)messageDestination;
- (id)logIdentifier;
- (BOOL)mergePendingAccessoryInvitationsWithOutgoingInvitation:(id)a0 operations:(id)a1;
- (void)updateHomeAccessControl:(BOOL)a0 remoteAccess:(BOOL)a1 announceAccess:(BOOL)a2 camerasAccess:(id)a3;
- (id)initWithUserID:(id)a0 name:(id)a1 uuid:(id)a2 home:(id)a3 homeAccessControl:(id)a4;
- (void)setPendingAccessoryInvitationsWithOutgoingInvitation:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
