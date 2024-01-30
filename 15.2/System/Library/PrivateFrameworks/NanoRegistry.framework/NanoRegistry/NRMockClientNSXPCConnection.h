@class NRMockServerNSXPCConnection, NSString, NSXPCInterface, NSObject;
@protocol OS_dispatch_queue;

@interface NRMockClientNSXPCConnection : NSObject <NRNSXPCConnectionProtocol> {
    NSString *_name;
    NRMockServerNSXPCConnection *_serverConnection;
    id _synchronousRemoteObjectProxy;
    id _remoteObjectProxy;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NRMockServerNSXPCConnection *serverConnection;
@property (readonly, nonatomic) BOOL invalidated;
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

- (id)initWithMachServiceName:(id)a0 options:(unsigned long long)a1;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)_invalidate;
- (id)valueForEntitlement:(id)a0;
- (void)_setQueue:(id)a0;
- (void)runCompletionBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)suspend;
- (void)invalidate;
- (void)resume;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)remoteObjectProxyAsync:(BOOL)a0;

@end
