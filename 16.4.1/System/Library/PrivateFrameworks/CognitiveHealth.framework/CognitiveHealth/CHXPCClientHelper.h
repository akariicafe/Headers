@class NSString, NSXPCInterface, NSXPCConnection;

@interface CHXPCClientHelper : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _connLock;
    NSXPCConnection *_conn;
    NSString *_serviceName;
    NSXPCInterface *_whitelistedServerInterface;
    id _clientExportedObject;
    id /* block */ _interruptionHandler;
    id /* block */ _invalidationHandler;
}

- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)dealloc;
- (void)_locked_establishConnection;
- (void).cxx_destruct;
- (id)initWithServiceName:(id)a0 whitelistedServerInterface:(id)a1 clientExportedObject:(id)a2 interruptionHandler:(id /* block */)a3 invalidationHandler:(id /* block */)a4;

@end
