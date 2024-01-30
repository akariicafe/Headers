@class NSMutableDictionary, NSXPCConnection, NSHashTable, NSDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface CXCallObserverXPCClient : NSObject <CXCallObserverDataSource>

@property (readonly, nonatomic) NSMutableDictionary *mutableCallUUIDToCallMap;
@property (readonly, nonatomic) NSHashTable *delegates;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (nonatomic) int clientsShouldConnectToken;
@property (nonatomic) BOOL clientsShouldConnect;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *concurrentQueue;
@property (readonly, copy, nonatomic) NSDictionary *callUUIDToCallMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedXPCClientSemaphore;
+ (void)releaseSharedXPCClient;
+ (id)sharedXPCClient;

- (void)addDelegate:(id)a0;
- (void)removeDelegate:(id)a0;
- (void)_addOrUpdateCall:(id)a0;
- (void)_requestCalls;
- (void)_invalidate;
- (oneway void)addOrUpdateCall:(id)a0;
- (void)requestTransaction:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)_removeCall:(id)a0;
- (id)_init;
- (void)invalidate;
- (void)dealloc;
- (void)_markAllCallsAsEnded;
- (id)_remoteObjectProxyWithErrorHandler:(id /* block */)a0 isSynchronous:(BOOL)a1;
- (oneway void)removeCall:(id)a0;

@end
