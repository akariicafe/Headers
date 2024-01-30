@class NSString, NSXPCConnection;
@protocol _TPSXPCExportable;

@interface _TPSXPCConnection : NSObject {
    NSXPCConnection *_underlyingConnection;
}

@property (weak, nonatomic) id<_TPSXPCExportable> exportedObject;
@property (copy, nonatomic) NSString *debugIdentifier;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;

- (id)initWithListenerEndpoint:(id)a0;
- (id)initWithMachServiceName:(id)a0 options:(unsigned long long)a1;
- (id)initWithUnderlyingConnection:(id)a0;
- (void).cxx_destruct;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)dealloc;
- (id)initWithServiceName:(id)a0;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)resume;
- (void)invalidate;

@end
