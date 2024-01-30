@class NSXPCListener, NSString, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue, XCTConnectionAccepting;

@interface XCTTargetSession : NSObject <NSXPCListenerDelegate, XCTMessagingChannel_DaemonToUIProcess, XCTInternalEntitlementChecking>

@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) NSXPCConnection *daemonConnection;
@property (retain) NSXPCListener *clientListener;
@property (retain) id<XCTConnectionAccepting> connectionHandler;
@property (readonly) id /* block */ registrationHandler;
@property BOOL targetIsRegistering;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)connect;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;
- (BOOL)isInternallyEntitledConnection:(id)a0;
- (void)_XCT_requestEndpointWithAutomationSupportLibraryPath:(id)a0 protocolVersion:(unsigned long long)a1 reply:(id /* block */)a2;
- (void)_on_queue_connect;
- (id)_on_queue_getListenerEndpoint;
- (BOOL)_on_queue_loadAutomationSupportLibraryFromPath:(id)a0 error:(id *)a1;
- (void)_on_queue_startListeningForClientConnections;
- (id)initWithDaemonConnection:(id)a0 registrationHandler:(id /* block */)a1;
- (id)initWithServiceName:(id)a0 registrationHandler:(id /* block */)a1;
- (void)registerForBootstrap;

@end
