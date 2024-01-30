@class NSString, NSXPCConnection, NSXPCInterface, NSLock, NSObject;
@protocol OS_dispatch_queue, NFCSessionCallbacks;

@interface NFCSession : NSObject {
    NSLock *_connectionLock;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_xpcQueue;
    NSXPCInterface *_remoteObjectInterface;
    NSXPCInterface *_exportedObjectInterface;
    NSString *_machServiceName;
    id _exportedObject;
    id<NFCSessionCallbacks> _delegate;
}

- (BOOL)_connectIfNeeded;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)dealloc;
- (void)_invalidate;
- (id)_connection;
- (void).cxx_destruct;
- (void)_setConnection:(id)a0;
- (id)_connectionLock;
- (id)_exportedObjectClassName;
- (id)initWithMachServiceName:(id)a0 remoteObjectInterface:(id)a1 exportedObjectInterface:(id)a2 exportedObject:(id)a3 delegate:(id)a4;

@end
