@class NSString, NSXPCInterface, NSXPCConnection;

@interface PPXPCClientHelper : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _connLock;
    NSXPCConnection *_conn;
    NSString *_serviceName;
    NSXPCInterface *_allowedServerInterface;
    NSXPCInterface *_allowedClientInterface;
    id _clientExportedObject;
    id /* block */ _interruptionHandler;
    id /* block */ _invalidationHandler;
}

- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)dealloc;
- (id)initWithServiceName:(id)a0 allowedServerInterface:(id)a1 allowedClientInterface:(id)a2 clientExportedObject:(id)a3 interruptionHandler:(id /* block */)a4 invalidationHandler:(id /* block */)a5;
- (void)_locked_establishConnection;
- (id)remoteObjectProxy;
- (void).cxx_destruct;

@end
