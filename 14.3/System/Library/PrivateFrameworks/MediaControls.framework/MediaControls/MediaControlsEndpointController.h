@class MPMediaControlsConfiguration, MPAVEndpointRoute, NSString, MPCPlayerPath, MPRequestResponseController, NSArray, MPCPlayerResponse, MPAVRoutingController;
@protocol MediaControlsEndpointControllerDelegate, MediaControlsEndpointObserverDelegate, MediaControlsEndpointControllerConnectionDelegate;

@interface MediaControlsEndpointController : NSObject <MPRequestResponseControllerDelegate, MPAVRoutingControllerDelegate, _MCStateDumpPropertyListTransformable>

@property (readonly, nonatomic) MPRequestResponseController *requestController;
@property (nonatomic) BOOL hasEverReceivedResponse;
@property (nonatomic) long long state;
@property (nonatomic, getter=isAttemptingConnection) BOOL attemptingConnection;
@property (retain, nonatomic) MPAVRoutingController *routingController;
@property (retain, nonatomic) MPAVEndpointRoute *route;
@property (nonatomic, getter=isAutomaticResponseLoading) BOOL automaticResponseLoading;
@property (weak, nonatomic) id<MediaControlsEndpointControllerConnectionDelegate> connectionDelegate;
@property (copy, nonatomic) NSString *label;
@property (readonly, copy, nonatomic) NSString *bundleID;
@property (readonly, copy, nonatomic) NSString *representedBundleID;
@property (retain, nonatomic) MPMediaControlsConfiguration *configuration;
@property (readonly, nonatomic) MPCPlayerPath *playerPath;
@property (readonly, nonatomic) MPCPlayerResponse *response;
@property (readonly, copy, nonatomic) NSArray *routeNames;
@property (nonatomic) BOOL allowsAutomaticResponseLoading;
@property (readonly, nonatomic) BOOL hasAvailableRoutes;
@property (readonly, nonatomic, getter=isAirPlaying) BOOL airplaying;
@property (readonly, nonatomic) BOOL isDeviceSystemRoute;
@property (readonly, nonatomic, getter=isRoutingToWireless) BOOL routingToWireless;
@property (nonatomic) BOOL onScreen;
@property (nonatomic) BOOL deviceUnlocked;
@property (weak, nonatomic) id<MediaControlsEndpointControllerDelegate> delegate;
@property (weak, nonatomic) id<MediaControlsEndpointObserverDelegate> proxyDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_getConnected:(BOOL *)a0 invalid:(BOOL *)a1;
- (id)_stateDumpObject;
- (void)routingControllerAvailableRoutesDidChange:(id)a0;
- (void)_connectionDidConnect:(id)a0;
- (BOOL)controller:(id)a0 shouldRetryFailedRequestWithError:(id)a1;
- (void).cxx_destruct;
- (void)_connectionHasBecomeInvalid;
- (void)connectAllowingAuthenticationWithCompletion:(id /* block */)a0;
- (void)_createRequestController;
- (void)dealloc;
- (id)initWithEndpoint:(id)a0;
- (void)_connectionDidInvalidate:(id)a0;
- (void)_getConnected:(BOOL *)a0 connecting:(BOOL *)a1 invalid:(BOOL *)a2;
- (void)representsLongFormVideoContentWithCompletion:(id /* block */)a0;
- (void)_updateState;
- (void)_reloadPlayerPathWithRoute:(id)a0;
- (void)_initRoutingController;
- (void)controller:(id)a0 defersResponseReplacement:(id /* block */)a1;
- (void)updateRoutePropertiesIfNeeded;
- (void)_maybeReloadPlayerPathWithRoute:(id)a0;
- (void)_connectIfNeeded;
- (void)_connectionDidAttemptConnection:(id)a0;
- (void)routingController:(id)a0 pickedRouteDidChange:(id)a1;
- (void)launchNowPlayingApp;

@end
