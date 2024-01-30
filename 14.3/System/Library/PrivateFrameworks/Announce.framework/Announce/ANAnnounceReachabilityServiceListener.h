@class NSXPCListener, NSString, NSMutableSet, ANAnnounceReachabilityManager;

@interface ANAnnounceReachabilityServiceListener : NSObject <ANAnnounceReachabilityServiceInterface, ANAnnounceReachabilityManagerDelegate, NSXPCListenerDelegate>

@property (readonly, nonatomic) NSXPCListener *listener;
@property (readonly, nonatomic) ANAnnounceReachabilityManager *reachabilityManager;
@property (retain) NSMutableSet *connections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)resumeWithCompletionHandler:(id /* block */)a0;
- (void)_addConnection:(id)a0;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)_removeConnection:(id)a0;
- (void)cleanForExit;
- (void)announceReachabilityForHomeName:(id)a0 reply:(id /* block */)a1;
- (void)announceReachabilityForRoomName:(id)a0 inHomeName:(id)a1 reply:(id /* block */)a2;
- (void)announceReachabilityForHomeUUID:(id)a0 reply:(id /* block */)a1;
- (void)announceReachabilityForRoomUUID:(id)a0 inHomeUUID:(id)a1 reply:(id /* block */)a2;
- (void)_sendCurrentReachabilityToConnection:(id)a0;
- (void)reachabilityLevel:(unsigned long long)a0 didChangeForHome:(id)a1;
- (void)reachabilityLevel:(unsigned long long)a0 didChangeForRoom:(id)a1 inHome:(id)a2;

@end
