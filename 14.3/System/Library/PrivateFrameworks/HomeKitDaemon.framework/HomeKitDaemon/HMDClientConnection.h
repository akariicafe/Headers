@class HMDHomeManager, HMFMessageDispatcher, NSUUID, NSString, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface HMDClientConnection : HMFObject <HMFMessageReceiver>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) HMFMessageDispatcher *msgDispatcher;
@property (weak, nonatomic) HMDHomeManager *homeManager;
@property (retain, nonatomic) NSMutableArray *commandsBeingExecuted;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)_registerForMessages;
- (void)_handleSiriIntentRequest:(id)a0;
- (void)_handleSiriCommand:(id)a0;
- (void)_handleDaemonRequest:(id)a0;
- (void)_handleSiriSyncDataRequest:(id)a0;
- (id)initWithHomeManager:(id)a0 queue:(id)a1 messageDispatcher:(id)a2;

@end
