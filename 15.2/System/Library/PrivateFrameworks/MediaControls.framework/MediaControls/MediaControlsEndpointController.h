@class MPCPlayerPath, NSString, MPAVEndpointRoute, MPMediaControlsConfiguration, MPRequestResponseController, NSArray, NSObject, MPCPlayerResponse, MPAVRoutingController;
@protocol MediaControlsEndpointControllerConnectionDelegate, MediaControlsEndpointObserverDelegate, OS_dispatch_queue, MediaControlsEndpointControllerDelegate;

@interface MediaControlsEndpointController : NSObject <MPRequestResponseControllerDelegate, MPAVRoutingControllerDelegate, _MCStateDumpPropertyListTransformable>

@property (readonly, nonatomic) MPRequestResponseController *requestController;
@property (nonatomic) BOOL hasEverReceivedResponse;
@property (nonatomic) long long state;
@property (nonatomic, getter=isAttemptingConnection) BOOL attemptingConnection;
@property (readonly, nonatomic) NSString *specifiedClient;
@property (readonly, nonatomic) NSString *specifiedPlayer;
@property (retain, nonatomic) MPAVRoutingController *routingController;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *routingControllerQueue;
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

- (void)controller:(id)a0 defersResponseReplacement:(id /* block */)a1;
- (void)_connectionDidConnect:(id)a0;
- (void)_connectionDidInvalidate:(id)a0;
- (void)routingController:(id)a0 pickedRouteDidChange:(id)a1;
- (id)initWithEndpoint:(id)a0 client:(id)a1 player:(id)a2;
- (void)_reloadPlayerPathWithRoute:(id)a0;
- (void)routingControllerAvailableRoutesDidChange:(id)a0;
- (void)_getConnected:(BOOL *)a0 invalid:(BOOL *)a1;
- (id)initWithEndpoint:(id)a0;
- (BOOL)controller:(id)a0 shouldRetryFailedRequestWithError:(id)a1;
- (void)_initRoutingController;
- (void)_getConnected:(BOOL *)a0 connecting:(BOOL *)a1 invalid:(BOOL *)a2;
- (void).cxx_destruct;
- (void)_connectIfNeeded;
- (void)representsLongFormVideoContentWithCompletion:(id /* block */)a0;
- (void)updateRoutePropertiesIfNeeded;
- (void)launchNowPlayingApp;
- (void)connectAllowingAuthenticationWithCompletion:(id /* block */)a0;
- (void)_maybeReloadPlayerPathWithRoute:(id)a0;
- (id)_stateDumpObject;
- (void)_connectionDidAttemptConnection:(id)a0;
- (void)_createRequestController;
- (void)_connectionHasBecomeInvalid;
- (void)_updateState;

@end
