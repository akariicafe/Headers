@class NSXPCConnection, NSHashTable, CKCoalescer, NSArray, NSString, NSMutableDictionary, NSOperationQueue, CKDProcessScopedClientProxy, NSPointerArray;

@interface CKDXPCConnection : NSObject <CKDSystemAvailabilityWatcher, CKPropertiesDescription, CKDXPCConnectionMuxer>

@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (nonatomic) unsigned long long keepAlive;
@property (readonly, nonatomic) CKCoalescer *activityCoalescer;
@property (retain, nonatomic) CKDProcessScopedClientProxy *processScopedClientProxy;
@property (retain, nonatomic) NSMutableDictionary *logicalDeviceScopedClientProxiesByDeviceReference;
@property (retain, nonatomic) NSHashTable *sharedContainers;
@property (retain, nonatomic) NSPointerArray *allContainerPointers;
@property (retain, nonatomic) NSOperationQueue *systemAvailableQueue;
@property (readonly, nonatomic) NSArray *allContainers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)CKDescribePropertiesUsing:(id)a0;
- (void)tearDown;
- (id)initWithXPCConnection:(id)a0;
- (void)connection:(id)a0 handleInvocation:(id)a1 isReply:(BOOL)a2;
- (id)redactedDescription;
- (BOOL)systemAvailabilityChanged:(unsigned long long)a0;
- (void)getProcessScopedClientProxyCreatorSynchronous:(BOOL)a0 completionHandler:(id /* block */)a1;
- (BOOL)canRunGivenAvailabilityState:(unsigned long long)a0;
- (id)containerFromSetupInfo:(id)a0 containerScopedClientProxy:(id)a1 outError:(id *)a2;
- (void)getDaemonTestServerManagerProxyCreatorWithCompletionHandler:(id /* block */)a0;
- (void)dealloc;
- (void)keepOpen;
- (void)getLogicalDeviceScopedClientProxyCreatorForTestDeviceReference:(id)a0 synchronous:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)allowToClose;
- (void)getLogicalDeviceScopedDaemonProxyCreatorForTestDeviceReferenceProtocol:(id)a0 completionHandler:(id /* block */)a1;
- (void)noteClientProcessScopedMetadata:(id)a0;
- (void)getProcessScopedDaemonProxyCreatorWithCompletionHandler:(id /* block */)a0;
- (void)getContainerScopedDaemonProxyCreatorForSetupInfo:(id)a0 containerScopedClientProxy:(id)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (id)logicalDeviceScopedClientProxyForDeviceContext:(id)a0;

@end
