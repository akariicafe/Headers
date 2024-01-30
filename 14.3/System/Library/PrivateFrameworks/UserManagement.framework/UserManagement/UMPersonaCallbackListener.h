@class NSString, NSMutableSet, NSXPCListener;

@interface UMPersonaCallbackListener : NSObject <NSXPCListenerDelegate>

@property (retain, nonatomic) NSString *machServiceName;
@property (retain, nonatomic) NSMutableSet *xpcConnections;
@property (retain, nonatomic) NSXPCListener *xpcListener;
@property (copy, nonatomic) id /* block */ personaUpdateCallbackHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedServer;

- (void)bubbleDidPop;
- (void)readyToSwitchToUser:(id)a0 completionHandler:(id /* block */)a1;
- (void)_setUpUMServerXPCConnectionIfNeeded:(id)a0;
- (void)personaListDidUpdateCompletionHandler:(id /* block */)a0;
- (void)personaUpdateCallbackForMachServiceCompletionHandler:(id /* block */)a0;
- (void)userSwitchTaskListDidUpdate;
- (void)readyToSwitchToLoginSession:(id)a0 completionHandler:(id /* block */)a1;
- (void)willSwitchToUser:(id)a0 completionHandler:(id /* block */)a1;
- (void)uploadContentWithCompletionHandler:(id /* block */)a0;
- (void)deviceLoginSessionStateDidUpdate;
- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)setupPersonaCallbackMachService:(id)a0 callbackHandler:(id /* block */)a1;
- (void)_tearDownConnectionToUMServerWithConnection:(id)a0;

@end
