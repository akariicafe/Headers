@class NSSet, NSUUID, HMDAppleMediaAccessory, NSString, HMFMessageDispatcher, NSObject, HMDRemoteLoginHandler;
@protocol OS_dispatch_queue;

@interface HMDRemoteLoginBase : HMFObject <HMFLogging, HMDHomeMessageReceiver>

@property (class, readonly) BOOL hasMessageReceiverChildren;

@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, weak, nonatomic) HMDAppleMediaAccessory *accessory;
@property (readonly, weak, nonatomic) HMDRemoteLoginHandler *remoteLoginHandler;
@property (readonly, nonatomic) NSString *logString;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) HMFMessageDispatcher *msgDispatcher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;

- (id)logIdentifier;
- (void).cxx_destruct;
- (void)registerForMessages;
- (void)configureWithWorkQueue:(id)a0 messageDispatcher:(id)a1;
- (id)initWithUUID:(id)a0 accessory:(id)a1 remoteLoginHandler:(id)a2;

@end
