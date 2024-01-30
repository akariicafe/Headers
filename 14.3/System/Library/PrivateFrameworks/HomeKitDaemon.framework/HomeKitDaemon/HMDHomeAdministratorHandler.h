@class HMFMessageDispatcher, NSString, HMDHome, NSOperationQueue, NSMapTable;
@protocol HMFLocking;

@interface HMDHomeAdministratorHandler : HMFMessageDispatcher <HMFLogging> {
    id<HMFLocking> _lock;
    NSOperationQueue *_queue;
    NSMapTable *_receivers;
}

@property (readonly) HMFMessageDispatcher *dispatcher;
@property (readonly, weak) HMDHome *home;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)addOperation:(id)a0;
- (void)registerForMessage:(id)a0 receiver:(id)a1 policies:(id)a2 messageHandler:(id /* block */)a3;
- (void).cxx_destruct;
- (id)initWithHome:(id)a0;
- (void)registerForMessage:(id)a0 receiver:(id)a1 policies:(id)a2 selector:(SEL)a3;
- (void)deregisterReceiver:(id)a0;
- (id)initWithTransport:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)logIdentifier;
- (id)operationForMessage:(id)a0 error:(id *)a1;
- (id)syncOperationManager;

@end
