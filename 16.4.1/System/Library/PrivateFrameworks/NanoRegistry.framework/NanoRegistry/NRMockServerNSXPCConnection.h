@class NRMockNSXPCListener, NSString, NSXPCInterface, NRMockClientNSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface NRMockServerNSXPCConnection : NSObject <NRNSXPCConnectionProtocol> {
    NRMockClientNSXPCConnection *_clientConnection;
    NRMockNSXPCListener *_listener;
    id _synchronousRemoteObjectProxy;
    id _remoteObjectProxy;
    BOOL _invalidated;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) NSXPCInterface *exportedInterface;
@property (retain, nonatomic) id exportedObject;
@property (retain, nonatomic) NSXPCInterface *remoteObjectInterface;
@property (readonly, retain, nonatomic) id remoteObjectProxy;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (readonly, nonatomic) int processIdentifier;
@property (readonly, retain, nonatomic) NSString *processName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)suspend;
- (id)initWithMachServiceName:(id)a0 options:(unsigned long long)a1;
- (void)dealloc;
- (id)valueForEntitlement:(id)a0;
- (void)invalidate;
- (void)runCompletionBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_setQueue:(id)a0;
- (void)resume;
- (id)initWithListener:(id)a0 clientConnection:(id)a1;
- (id)remoteObjectProxyAsync:(BOOL)a0;

@end
