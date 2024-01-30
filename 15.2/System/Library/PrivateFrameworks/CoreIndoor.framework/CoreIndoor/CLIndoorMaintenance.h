@class NSString;

@interface CLIndoorMaintenance : CLIndoorXPCProvider <CLIndoorXPCProviderImplementation>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)withinQueueReinitializeRemoteState;
- (void)onQueuePrefetch:(id)a0 callback:(id /* block */)a1 when:(unsigned char)a2;
- (void)onQueueShutdown;
- (void)shutdown;
- (id)withinQueuePermanentShutdownReason;
- (void)prefetchSynchronous:(id)a0;
- (void)numFloors:(id /* block */)a0;
- (void)retrieveLocationRelevancyDurationWithCompletionHandler:(id /* block */)a0;
- (id)remoteObjectProtocol;
- (void)withinQueueReconnectInvalidatedConnectionFailed:(id)a0;
- (BOOL)withinQueueCanReinitializeRemoteState;
- (void)onQueueNumFloors:(id /* block */)a0;
- (void)prefetch:(id)a0;
- (void)withinQueueInvalidateState;
- (void)eraseEverything;
- (void)onQueueEraseEverything:(id /* block */)a0;
- (id)endpointName;
- (void)doSynchronousXPC:(id /* block */)a0 description:(const char *)a1 waitForever:(BOOL)a2;

@end
