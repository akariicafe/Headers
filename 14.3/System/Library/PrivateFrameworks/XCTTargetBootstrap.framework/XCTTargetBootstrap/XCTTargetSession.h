@class NSXPCListener, NSString, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue, XCTConnectionAccepting;

@interface XCTTargetSession : NSObject <NSXPCListenerDelegate, XCTTarget>

@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) NSXPCConnection *daemonConnection;
@property (retain) NSXPCListener *clientListener;
@property (retain) id<XCTConnectionAccepting> connectionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)connect;
- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)initWithDaemonConnection:(id)a0;
- (void)_on_queue_connect;
- (void)_XCT_requestEndpointWithAutomationSupportLibraryPath:(id)a0 protocolVersion:(unsigned long long)a1 reply:(id /* block */)a2;
- (void)_on_queue_startListeningForClientConnections;
- (BOOL)_on_queue_loadAutomationSupportLibraryFromPath:(id)a0 error:(id *)a1;
- (id)_on_queue_getListenerEndpoint;

@end
