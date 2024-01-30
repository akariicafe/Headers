@class NSString;

@interface CLIndoorMaintenance : CLIndoorXPCProvider <CLIndoorXPCProviderImplementation>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)eraseEverything;
- (void)withinQueueReinitializeRemoteState;
- (void)numFloors:(id /* block */)a0;
- (id)endpointName;
- (id)remoteObjectProtocol;
- (void)shutdown;
- (void)withinQueueReconnectInvalidatedConnectionFailed:(id)a0;
- (id)withinQueuePermanentShutdownReason;
- (void)onQueuePrefetch:(id)a0 callback:(id /* block */)a1 when:(unsigned char)a2;
- (void)onQueueEraseEverything:(id /* block */)a0;
- (void)prefetch:(id)a0;
- (void)withinQueueInvalidateState;
- (void)doSynchronousXPC:(id /* block */)a0 description:(const char *)a1 waitForever:(BOOL)a2;
- (void)onQueueNumFloors:(id /* block */)a0;
- (void)prefetchSynchronous:(id)a0;
- (void)retrieveLocationRelevancyDurationWithCompletionHandler:(id /* block */)a0;
- (void)onQueueShutdown;
- (BOOL)withinQueueCanReinitializeRemoteState;

@end
