@class NSString, NSXPCConnection, NSXPCInterface, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface SGDaemonConnection : NSObject {
    NSString *_machServiceName;
    NSXPCInterface *_xpcInterface;
    NSObject<OS_dispatch_queue> *_connectLock;
    NSMutableArray *_abortBlocks;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _abortLock;
    NSXPCConnection *_xpcConnection;
}

+ (BOOL)usingSyncXPC;
+ (void)_useSyncXPCWithBlock:(id /* block */)a0;

- (id)remoteObjectProxy;
- (void)_connectToServer;
- (id)xpcConnection;
- (void)disconnect;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)waitUntilReturn:(id /* block */)a0 withTimeout:(double)a1 error:(id *)a2;
- (void).cxx_destruct;
- (void)addConnectionInterruptedHandler:(id /* block */)a0;
- (void)_callAbortBlocks;
- (void)dealloc;
- (id)initWithMachServiceName:(id)a0 xpcInterface:(id)a1;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;

@end
