@class NSString, NSXPCConnection, NSXPCInterface;

@interface NRNSXPCConnection : NSObject <NRNSXPCConnectionProtocol> {
    NSXPCConnection *_connection;
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

- (id)initWithMachServiceName:(id)a0 options:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)valueForEntitlement:(id)a0;
- (void)_setQueue:(id)a0;
- (id)initWithConnection:(id)a0;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)resume;
- (void)suspend;
- (void)invalidate;
- (void)runCompletionBlock:(id /* block */)a0;

@end
