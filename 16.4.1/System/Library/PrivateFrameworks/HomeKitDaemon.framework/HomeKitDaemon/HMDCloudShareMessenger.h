@class HMFMessageDispatcher, NSUUID, HMDHome, NSString, NSObject;
@protocol OS_dispatch_queue, HMDCloudShareMessengerDelegate;

@interface HMDCloudShareMessenger : HMFObject <HMFLogging, HMFMessageReceiver>

@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (weak) HMDHome *home;
@property (getter=isConfigured) BOOL configured;
@property (copy) id /* block */ shareInvitationRetryHandler;
@property (weak) id<HMDCloudShareMessengerDelegate> delegate;
@property (readonly) NSUUID *messageTargetUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;

- (void)configure;
- (id)logIdentifier;
- (void).cxx_destruct;
- (void)unconfigure;
- (void)_requestShareInvitationDataFromUser:(id)a0 retryCount:(unsigned long long)a1 activity:(id)a2;
- (void)_sendShareInvitationData:(id)a0 toDestination:(id)a1 retryCount:(unsigned long long)a2 activity:(id)a3 completion:(id /* block */)a4;
- (void)handleInviteMessage:(id)a0;
- (void)handleRequestInviteMessage:(id)a0;
- (id)initWithMessageTargetUUID:(id)a0 workQueue:(id)a1 home:(id)a2;
- (id)initWithMessageTargetUUID:(id)a0 workQueue:(id)a1 home:(id)a2 messageDispatcher:(id)a3;
- (void)requestShareInvitationDataFromUser:(id)a0;
- (void)sendShareInvitationData:(id)a0 toDevice:(id)a1 completion:(id /* block */)a2;
- (void)sendShareInvitationData:(id)a0 toUser:(id)a1 minimumHomeKitVersion:(id)a2 requiredSupportedFeatures:(id)a3 completion:(id /* block */)a4;

@end
