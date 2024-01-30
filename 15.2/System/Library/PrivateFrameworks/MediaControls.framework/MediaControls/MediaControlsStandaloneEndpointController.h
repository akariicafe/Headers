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

- (void)updateAllowsAutomaticResponseLoading;
- (id)initWithEndpoint:(id)a0 client:(id)a1 player:(id)a2;
- (void)endObserving;
- (void)routingControllerAvailableRoutesDidChange:(id)a0;
- (id)initWithEndpoint:(id)a0;
- (BOOL)controller:(id)a0 shouldRetryFailedRequestWithError:(id)a1;
- (void)setAllowsAutomaticResponseLoading:(BOOL)a0;
- (id)initWithRouteUID:(id)a0;
- (void).cxx_destruct;
- (id)initWithRouteUID:(id)a0 client:(id)a1 player:(id)a2;
- (void)dealloc;
- (id)proxyDelegate;
- (void)beginObserving;
- (id)_routeForEndpoint:(void *)a0;
- (void)endpointController:(id)a0 willAttemptToConnectToRoute:(id)a1;
- (void)setRoute:(id)a0;

@end
