@interface MRDestinationResolverDependencies : NSObject

+ (id)defaultDependencies;

- (void)resolvePlayerPath:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (id)addPlayerPathInvalidationHandler:(id)a0 queue:(id)a1 handler:(id /* block */)a2;
- (id)createEndpointObserverWithUID:(id)a0;
- (void)createPlayerPathForEndpoint:(id)a0 client:(id)a1 player:(id)a2 queue:(id)a3 completion:(id /* block */)a4;
- (void)removePlayerPathInvalidationHandler:(id)a0;
- (void)retrieveEndpointForContextUID:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (void)retrieveEndpointForUID:(id)a0 endpointGroupUID:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
- (void)retrieveOutputDeviceUIDForOrigin:(id)a0 queue:(id)a1 completion:(id /* block */)a2;

@end
