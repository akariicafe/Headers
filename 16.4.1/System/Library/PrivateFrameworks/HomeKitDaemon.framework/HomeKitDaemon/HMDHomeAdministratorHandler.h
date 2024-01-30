@class HMFMessageDispatcher, NSString, HMDHome, NSOperationQueue, NSMapTable;

@interface HMDHomeAdministratorHandler : HMFMessageDispatcher <HMFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSOperationQueue *_queue;
    NSMapTable *_receivers;
}

@property (readonly) HMFMessageDispatcher *dispatcher;
@property (readonly, weak) HMDHome *home;
@property (readonly) BOOL shouldRelayMessages;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)addOperation:(id)a0;
- (id)logIdentifier;
- (void)registerForMessage:(id)a0 receiver:(id)a1 policies:(id)a2 messageHandler:(id /* block */)a3;
- (id)initWithTransport:(id)a0;
- (void)deregisterReceiver:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)registerForMessage:(id)a0 receiver:(id)a1 policies:(id)a2 selector:(SEL)a3;
- (void).cxx_destruct;
- (id)initWithHome:(id)a0;
- (id)initWithHome:(id)a0 dispatcher:(id)a1;
- (id)operationForMessage:(id)a0 error:(id *)a1;
- (id)syncOperationManager;
- (BOOL)allowLocalFallbackForMessage:(id)a0;
- (BOOL)shouldRelayMessage:(id)a0;

@end
