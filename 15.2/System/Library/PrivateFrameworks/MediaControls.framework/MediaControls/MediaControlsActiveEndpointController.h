@class NSString, MPCFuture, MSVPersistentTimer;

@interface MediaControlsActiveEndpointController : MediaControlsEndpointController <MPAVRoutingControllerDelegate, MediaControlsEndpointObserverDelegate, MediaControlsEndpointControllerConnectionDelegate>

@property (retain, nonatomic) MPCFuture *deferredPlayerPathFuture;
@property (retain, nonatomic) id deferredPlayerPathInvalidationToken;
@property (retain, nonatomic) MSVPersistentTimer *deferredPlayerPathTimer;
@property (retain, nonatomic) NSString *activeEndpointUID;
@property (nonatomic) long long routeType;
@property (nonatomic) BOOL isDeferred;
@property (readonly, nonatomic) NSString *activeRouteUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)mediaRecentlyPlayedTimeout;

- (void)setOnScreen:(BOOL)a0;
- (void)setDeviceUnlocked:(BOOL)a0;
- (void)routingControllerAvailableRoutesDidChange:(id)a0;
- (BOOL)controller:(id)a0 shouldRetryFailedRequestWithError:(id)a1;
- (void)_activeSystemRouteDidChangeWithChangeType:(long long)a0;
- (void)_maybeRestoreDeferredPlayerPath;
- (void)_restoreDeferredPlayerPath;
- (void).cxx_destruct;
- (void)activeSystemRouteDidChangeNotification:(id)a0;
- (void)_updateActiveSystemRoute;
- (id)initWithActiveRouteType:(long long)a0;
- (void)_resetDeferredPlayerPath;
- (void)_maybeUpdateActiveSystemRoute;
- (void)_fetchActiveSystemRoute:(id /* block */)a0;
- (id)_routeForEndpoint:(void *)a0;
- (void)endpointController:(id)a0 willAttemptToConnectToRoute:(id)a1;

@end
