@class NSArray, NSString, MPAVEndpointRoute, MPCPlayerPath, MPMediaControlsConfiguration, MPCPlayerResponse, MPRequestResponseController;
@protocol MediaControlsEndpointControllerDelegate, MediaControlsEndpointObserverDelegate, MediaControlsEndpointControllerConnectionDelegate;

@interface MediaControlsEndpointController : NSObject <MPRequestResponseControllerDelegate, _MCStateDumpPropertyListTransformable>

@property (readonly, nonatomic) MPRequestResponseController *requestController;
@property (nonatomic) BOOL hasEverReceivedResponse;
@property (nonatomic) long long state;
@property (nonatomic, getter=isAttemptingConnection) BOOL attemptingConnection;
@property (readonly, nonatomic) NSString *specifiedClient;
@property (readonly, nonatomic) NSString *specifiedPlayer;
@property (readonly, copy, nonatomic) NSString *predictedDeviceUID;
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

- (void)_connectIfNeeded;
- (BOOL)controller:(id)a0 shouldRetryFailedRequestWithError:(id)a1;
- (void)_updateState;
- (void)_getConnected:(BOOL *)a0 connecting:(BOOL *)a1 invalid:(BOOL *)a2;
- (void)_createRequestController;
- (void)_getConnected:(BOOL *)a0 invalid:(BOOL *)a1;
- (void)connectAllowingAuthenticationWithCompletion:(id /* block */)a0;
- (id)initWithEndpoint:(id)a0;
- (void)_connectionDidInvalidate:(id)a0;
- (void)_connectionDidConnect:(id)a0;
- (void)_connectionDidAttemptConnection:(id)a0;
- (void)representsLongFormVideoContentWithCompletion:(id /* block */)a0;
- (void)controller:(id)a0 defersResponseReplacement:(id /* block */)a1;
- (void)_routeDidChange:(id)a0;
- (void)_connectionHasBecomeInvalid;
- (id)initWithEndpoint:(id)a0 client:(id)a1 player:(id)a2;
- (void)_reloadPlayerPathWithRoute:(id)a0;
- (void)updateRoutePropertiesIfNeeded;
- (void).cxx_destruct;
- (id)_stateDumpObject;
- (void)launchNowPlayingApp;
- (void)_maybeReloadPlayerPathWithRoute:(id)a0;

@end
