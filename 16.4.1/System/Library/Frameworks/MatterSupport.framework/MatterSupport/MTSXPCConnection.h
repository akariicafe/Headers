@class NSString, NSXPCConnection, NSXPCInterface, HMFProcessInfo;

@interface MTSXPCConnection : HMFObject <MTSXPCConnection>

@property (readonly) NSXPCConnection *xpcConnection;
@property (readonly) HMFProcessInfo *processInfo;
@property (readonly) int processIdentifier;
@property (retain) NSXPCInterface *exportedInterface;
@property (retain) id exportedObject;
@property (retain) NSXPCInterface *remoteObjectInterface;
@property (readonly) id remoteObjectProxy;
@property (copy) id /* block */ interruptionHandler;
@property (copy) id /* block */ invalidationHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)initWithXPCConnection:(id)a0;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)valueForEntitlement:(id)a0;
- (id)attributeDescriptions;
- (void)invalidate;
- (void).cxx_destruct;
- (void)resume;

@end
