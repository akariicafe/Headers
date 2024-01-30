@class NSUUID, NSString, NSXPCConnection, HMDXPCMessageSendPolicyParameters, NSSet, HMDXPCMessageCountTracker, NSDictionary, HMDXPCRequestTracker, NSObject, HMDProcessInfo;
@protocol OS_dispatch_queue, HMFLocking;

@interface HMDXPCClientConnection : HMFMessageTransport <HMFLogging, HMXPCServerMessageHandling> {
    id<HMFLocking> _lock;
    NSObject<OS_dispatch_queue> *_queue;
    HMDXPCMessageCountTracker *_counterTracker;
    NSString *_signature;
}

@property (copy, nonatomic) NSString *clientName;
@property (copy, nonatomic) NSUUID *clientUUID;
@property (copy, nonatomic) NSString *logIdentifier;
@property (weak, nonatomic) NSXPCConnection *xpcConnection;
@property (readonly, nonatomic) HMDXPCRequestTracker *requestTracker;
@property (nonatomic, getter=isActivated) BOOL activated;
@property (retain, nonatomic) NSDictionary *privateAccessEntitlement;
@property (retain, nonatomic) HMDXPCMessageSendPolicyParameters *sendPolicyParameters;
@property (retain) HMDProcessInfo *processInfo;
@property (readonly, nonatomic) NSString *name;
@property (readonly, copy) NSDictionary *userInfo;
@property (readonly) Class principalClass;
@property (readonly, nonatomic) int clientPid;
@property (readonly, nonatomic) NSSet *activeRequests;
@property (readonly, nonatomic, getter=isAuthorizedForHomeDataAccess) BOOL authorizedForHomeDataAccess;
@property (readonly, nonatomic, getter=isAuthorizedForMicrophoneAccess) BOOL authorizedForMicrophoneAccess;
@property (readonly) unsigned long long entitlements;
@property (readonly, nonatomic, getter=isEntitledForAPIAccess) BOOL entitledForAPIAccess;
@property (readonly, getter=isEntitledForSPIAccess) BOOL entitledForSPIAccess;
@property (readonly, nonatomic, getter=isAuthorizedForLocationAccess) BOOL authorizedForLocationAccess;
@property (readonly, nonatomic, getter=isEntitledForBackgroundMode) BOOL entitledForBackgroundMode;
@property (readonly, nonatomic, getter=isEntitledForHomeLocationAccess) BOOL entitledForHomeLocationAccess;
@property (readonly, nonatomic, getter=isEntitledForCameraClipsAccess) BOOL entitledForCameraClipsAccess;
@property (readonly, nonatomic, getter=isEntitledForMultiUserSetupAccess) BOOL entitledForMultiUserSetupAccess;
@property (readonly, nonatomic, getter=isEntitledForShortcutsAutomationAccess) BOOL entitledForShortcutsAutomationAccess;
@property (readonly, nonatomic, getter=isEntitledToProvideAccessorySetupPayload) BOOL entitledToProvideAccessorySetupPayload;
@property (readonly, nonatomic, getter=isEntitledForPersonManagerAccess) BOOL entitledForPersonManagerAccess;
@property (readonly, nonatomic, getter=isEntitledForWalletKeyAccess) BOOL entitledForWalletKeyAccess;
@property (readonly, nonatomic, getter=isEntitledForSecureAccess) BOOL entitledForSecureAccess;
@property (readonly, nonatomic, getter=isEntitledForStateDump) BOOL entitledForStateDump;
@property (readonly, nonatomic, getter=isEntitledForAssistantIdentifiers) BOOL entitledForAssistantIdentifiers;
@property (readonly, nonatomic, getter=isEntitledForHomeLocationFeedbackAccess) BOOL entitledForHomeLocationFeedbackAccess;
@property (readonly, getter=isPlatformBinary) BOOL platformBinary;
@property (readonly, nonatomic) NSString *applicationBundleIdentifier;
@property (readonly, nonatomic) NSString *companionAppBundleIdentifier;
@property (readonly, nonatomic) unsigned long long homeManagerOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (unsigned long long)entitlementsForConnection:(id)a0;

- (void)handleMessage:(id)a0;
- (id)_displayName;
- (id)shortDescription;
- (void)sendMessage:(id)a0 completionHandler:(id /* block */)a1;
- (id)attributeDescriptions;
- (void)activateWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)handleMessage:(id)a0 responseHandler:(id /* block */)a1;
- (void)deactivate;
- (void)dealloc;
- (void)updateUserInfo:(id)a0;
- (BOOL)canSendMessage:(id)a0;
- (void)updateSendPolicyParameters:(id)a0;
- (id)initWithConnection:(id)a0 counterTracker:(id)a1;
- (id)counterIdentifierForMessage:(id)a0;
- (void)__handleApplicationStateChange:(id)a0;
- (BOOL)shouldSendResponseForMessageIdentifier:(id)a0;
- (void)_handleMessage:(id)a0 responseHandler:(id /* block */)a1;
- (void)initiateRefresh;

@end
