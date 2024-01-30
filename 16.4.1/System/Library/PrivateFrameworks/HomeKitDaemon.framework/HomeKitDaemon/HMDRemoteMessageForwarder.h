@class HMFMessageDispatcher, NSUUID, HMDHome, NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface HMDRemoteMessageForwarder : HMFObject <HMFMessageReceiver, HMFLogging>

@property (readonly, weak) HMDHome *home;
@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (readonly, copy) NSUUID *UUID;
@property (readonly, copy) NSUUID *contextUUID;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) NSMutableDictionary *messagesByIdentifier;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)remoteMessageForwarderUUIDFromUUID:(id)a0;

- (void).cxx_destruct;
- (void)configureWithMessageDispatcher:(id)a0;
- (void)handleResponseMessage:(id)a0;
- (id)initWithHome:(id)a0 UUID:(id)a1 workQueue:(id)a2;
- (id)messageForForwardedMessage:(id)a0;
- (void)redispatchToResidentMessage:(id)a0;

@end
