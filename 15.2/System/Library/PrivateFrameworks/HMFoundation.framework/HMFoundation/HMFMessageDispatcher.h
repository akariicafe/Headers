@class NSUUID, NSString, HMFTimer, HMFMessageTransport, NSSet, NSBackgroundActivityScheduler, NSDictionary, NSObject, NSMutableOrderedSet;
@protocol OS_dispatch_queue;

@interface HMFMessageDispatcher : HMFObject <HMFLogging, HMFMessageTransportDelegate> {
    struct hmf_unfair_data_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; } _lock;
    NSMutableOrderedSet *_handlers;
    HMFTimer *_indexWatchdog;
    NSBackgroundActivityScheduler *_indexScheduler;
    NSDictionary *_destinationHandlerIndexes;
    NSDictionary *_nameHandlerIndexes;
}

@property (class, readonly, nonatomic) NSUUID *allMessagesForMessageNameTarget;

@property (readonly, getter=isIndexed) BOOL indexed;
@property (nonatomic) BOOL shouldAutomaticallyIndex;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) HMFMessageTransport *transport;
@property (copy) NSSet *filterClasses;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)index;
- (void)dispatchMessage:(id)a0;
- (void)sendMessage:(id)a0;
- (void)deregisterForMessage:(id)a0 receiver:(id)a1;
- (void)sendMessage:(id)a0 completionHandler:(id /* block */)a1;
- (void)dispatchMessage:(id)a0 target:(id)a1;
- (id)initWithTransport:(id)a0;
- (id)sendMessageExpectingResponse:(id)a0;
- (void)sendMessage:(id)a0 target:(id)a1 responseQueue:(id)a2 responseHandler:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (void)sendMessage:(id)a0 target:(id)a1 responseQueue:(id)a2 responseHandler:(id /* block */)a3;
- (void)registerForMessage:(id)a0 receiver:(id)a1 selector:(SEL)a2;
- (void)registerForMessage:(id)a0 targetUUID:(id)a1 receiver:(id)a2 policies:(id)a3 selector:(SEL)a4;
- (void)registerForMessage:(id)a0 receiver:(id)a1 policies:(id)a2 selector:(SEL)a3;
- (void).cxx_destruct;
- (void)registerForMessage:(id)a0 receiver:(id)a1 policies:(id)a2 messageHandler:(id /* block */)a3;
- (void)sendMessage:(id)a0 target:(id)a1;
- (void)messageTransport:(id)a0 didReceiveMessage:(id)a1;
- (id)init;
- (id)handlersForMessage:(id)a0;
- (void)dealloc;
- (void)sendMessage:(id)a0 target:(id)a1 andInvokeCompletionHandler:(id /* block */)a2;
- (void)deregisterReceiver:(id)a0;
- (void)registerForMessage:(id)a0 receiver:(id)a1 messageHandler:(id /* block */)a2;

@end
