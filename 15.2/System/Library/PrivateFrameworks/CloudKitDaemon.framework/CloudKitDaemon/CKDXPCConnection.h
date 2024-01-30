@class NSXPCConnection, NSHashTable, CKCoalescer, NSArray, NSString, NSMutableDictionary, CKDProcessScopedClientProxy, NSOperationQueue, NSMutableSet, NSPointerArray;

@interface CKDXPCConnection : NSObject <CKDSystemAvailabilityWatcher, CKDXPCConnectionMuxer>

@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (nonatomic) unsigned long long keepAlive;
@property (readonly, nonatomic) CKCoalescer *activityCoalescer;
@property (retain, nonatomic) CKDProcessScopedClientProxy *processScopedClientProxy;
@property (retain, nonatomic) NSMutableDictionary *logicalDeviceScopedClientProxiesByDeviceReference;
@property (retain, nonatomic) NSMutableSet *allDeviceContexts;
@property (retain, nonatomic) NSHashTable *sharedContainers;
@property (retain, nonatomic) NSPointerArray *allContainerPointers;
@property (retain, nonatomic) NSOperationQueue *systemAvailableQueue;
@property (readonly, nonatomic) NSArray *allContainers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithXPCConnection:(id)a0;
- (void)tearDown;
- (void)getLogicalDeviceScopedClientProxyCreatorForTestDeviceReference:(id)a0 synchronous:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)connection:(id)a0 handleInvocation:(id)a1 isReply:(BOOL)a2;
- (void)keepOpen;
- (void)getProcessScopedDaemonProxyCreatorWithCompletionHandler:(id /* block */)a0;
- (id)logicalDeviceScopedClientProxyForDeviceContext:(id)a0;
- (void).cxx_destruct;
- (void)getProcessScopedClientProxyCreatorSynchronous:(BOOL)a0 completionHandler:(id /* block */)a1;
- (id)containerFromSetupInfo:(id)a0 containerScopedClientProxy:(id)a1 outError:(id *)a2;
- (BOOL)systemAvailabilityChanged:(unsigned long long)a0;
- (BOOL)canRunGivenAvailabilityState:(unsigned long long)a0;
- (void)getTestAdminDaemonProxyCreatorWithCompletionHandler:(id /* block */)a0;
- (void)dealloc;
- (void)getContainerScopedDaemonProxyCreatorForSetupInfo:(id)a0 containerScopedClientProxy:(id)a1 completionHandler:(id /* block */)a2;
- (void)allowToClose;
- (void)noteClientProcessScopedMetadata:(id)a0;
- (void)getLogicalDeviceScopedDaemonProxyCreatorForTestDeviceReference:(id)a0 completionHandler:(id /* block */)a1;

@end
