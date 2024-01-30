@class HMDHomeManager, HMFMessageDispatcher, NSUUID, NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface HMDClientConnection : HMFObject <HMFMessageReceiver>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) NSMutableArray *commandsBeingExecuted;
@property (retain, nonatomic) HMFMessageDispatcher *msgDispatcher;
@property (weak, nonatomic) HMDHomeManager *homeManager;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_registerForMessages;
- (void)_handleDaemonRequest:(id)a0;
- (void)_handleIdmsAccountUsernameModified:(id)a0;
- (void)_handleSiriCommand:(id)a0;
- (void)_handleSiriIntentRequest:(id)a0;
- (void)_handleSiriSyncDataRequest:(id)a0;
- (id)initWithHomeManager:(id)a0 queue:(id)a1 messageDispatcher:(id)a2;

@end
