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

- (id /* block */)invalidationHandler;
- (id)remoteObjectProxy;
- (void)setInterruptionHandler:(id /* block */)a0;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)initWithListenerEndpoint:(id)a0;
- (id)initWithServiceName:(id)a0;
- (id)initWithServiceName:(id)a0 options:(unsigned long long)a1;
- (void).cxx_destruct;
- (id /* block */)interruptionHandler;
- (void)invalidate;
- (void)dealloc;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)setInvalidationHandler:(id /* block */)a0;
- (void)serverConnectionInterrupted;
- (void)serverConnectionInvalidated;

@end
