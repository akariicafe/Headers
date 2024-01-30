@class NSString, MPMRAVEndpointObserverWrapper, MPAVRoutingController;

@interface MediaControlsStandaloneEndpointController : MediaControlsEndpointController <MPAVRoutingControllerDelegate, MediaControlsEndpointObserverDelegate, MediaControlsEndpointControllerConnectionDelegate> {
    BOOL _allowsAutomaticResponseLoading;
}

@property (nonatomic, getter=isEndpointDiscovered) BOOL endpointDiscovered;
@property (readonly, nonatomic) MPAVRoutingController *routingController;
@property (retain, nonatomic) MPMRAVEndpointObserverWrapper *endpointObserver;
@property (retain, nonatomic) NSString *routeUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)routingControllerAvailableRoutesDidChange:(id)a0;
- (BOOL)controller:(id)a0 shouldRetryFailedRequestWithError:(id)a1;
- (void).cxx_destruct;
- (void)beginObserving;
- (id)initWithRouteUID:(id)a0;
- (void)dealloc;
- (id)initWithEndpoint:(id)a0;
- (id)proxyDelegate;
- (void)setRoute:(id)a0;
- (void)endpointController:(id)a0 willAttemptToConnectToRoute:(id)a1;
- (void)endObserving;
- (id)_routeForEndpoint:(void *)a0;
- (void)setAllowsAutomaticResponseLoading:(BOOL)a0;
- (void)updateAllowsAutomaticResponseLoading;

@end
