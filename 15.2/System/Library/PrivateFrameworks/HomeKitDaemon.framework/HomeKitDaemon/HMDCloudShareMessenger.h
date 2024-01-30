@class HMFMessageDispatcher, NSUUID, NSString, NSObject;
@protocol OS_dispatch_queue, HMDCloudShareMessengerDelegate;

@interface HMDCloudShareMessenger : HMFObject <HMFLogging, HMFMessageReceiver>

@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (copy) id /* block */ shareInvitationRetryHandler;
@property (weak) id<HMDCloudShareMessengerDelegate> delegate;
@property (readonly) NSUUID *messageTargetUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;

- (id)logIdentifier;
- (void).cxx_destruct;
- (void)unconfigure;
- (void)configureWithHome:(id)a0;
- (void)sendShareInvitationData:(id)a0 toUser:(id)a1 minimumHomeKitVersion:(id)a2 requiredSupportedFeatures:(id)a3 completion:(id /* block */)a4;
- (void)requestShareInvitationDataFromUser:(id)a0;
- (id)initWithMessageTargetUUID:(id)a0 workQueue:(id)a1;
- (id)initWithMessageTargetUUID:(id)a0 workQueue:(id)a1 messageDispatcher:(id)a2;
- (void)_sendShareInvitationData:(id)a0 toUser:(id)a1 minimumHomeKitVersion:(id)a2 requiredSupportedFeatures:(id)a3 retryCount:(unsigned long long)a4 completion:(id /* block */)a5;
- (void)handleInviteMessage:(id)a0;
- (void)handleRequestInviteMessage:(id)a0;

@end
