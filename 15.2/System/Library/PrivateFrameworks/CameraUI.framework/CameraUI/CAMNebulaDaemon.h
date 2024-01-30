@class CAMPersistenceController, CAMNebulaKeepAliveController, NSString, CAMTimelapseBackendController, NSObject, NSMutableArray, NSXPCListener, CAMNebulaIrisBackendController;
@protocol OS_dispatch_queue;

@interface CAMNebulaDaemon : NSObject <NSXPCListenerDelegate, CAMNebulaDaemonConnectionManagerDelegate, CAMPersistenceResultDelegate>

@property (readonly, nonatomic) CAMTimelapseBackendController *_timelapseBackendController;
@property (readonly, nonatomic) CAMNebulaIrisBackendController *_irisBackendController;
@property (readonly, nonatomic) CAMPersistenceController *_persistenceController;
@property (readonly, nonatomic) CAMNebulaKeepAliveController *_keepAliveController;
@property (readonly, nonatomic) NSXPCListener *_listener;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_queue;
@property (readonly, nonatomic) NSMutableArray *_connections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)daemonConnectionManagerHasBeenDisconnected:(id)a0;
- (void)persistenceController:(id)a0 didGenerateVideoLocalPersistenceResult:(id)a1 forCaptureResult:(id)a2 fromRequest:(id)a3;
- (id)allowedProtocolForClientAccess:(id)a0;
- (void)performPendingWorkAfterDelay:(double)a0;

@end
