@class NSXPCInterface, ARWeakReference, NSXPCConnection;
@protocol ARServerConnectionDelegate;

@interface ARServerConnection : NSObject <NSXPCProxyCreating> {
    id /* block */ _connectionCreationBlock;
    ARWeakReference *_exportedObjectWeakReference;
}

@property (readonly, nonatomic) NSXPCConnection *connection;
@property (weak, nonatomic) id<ARServerConnectionDelegate> delegate;
@property (retain, nonatomic) NSXPCInterface *exportedInterface;
@property (weak, nonatomic) id exportedObject;
@property (retain, nonatomic) NSXPCInterface *remoteObjectInterface;

- (id)initWithListenerEndpoint:(id)a0;
- (void).cxx_destruct;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)dealloc;
- (id)remoteObjectProxy;
- (id)initWithServiceName:(id)a0;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)invalidate;
- (void)serverConnectionInterrupted;
- (void)serverConnectionInvalidated;

@end
