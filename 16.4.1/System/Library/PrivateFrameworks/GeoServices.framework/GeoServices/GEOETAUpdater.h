@class GEORouteMatch, GEOCommonOptions, GEOApplicationAuditToken, GEOLocation, GEOComposedRoute, NSString, NSTimer, GEOComposedWaypoint, NSArray, NSData, GEORouteAttributes, GEOETATrafficUpdateRequest, GEOComposedETARoute;
@protocol GEOETAUpdaterDelegate;

@interface GEOETAUpdater : NSObject {
    GEOETATrafficUpdateRequest *_currentETARequest;
    GEOComposedWaypoint *_destination;
    GEOComposedETARoute *_etaRoute;
    long long _etaState;
    NSTimer *_etaIdleTimer;
    double _lastETARequestTime;
    GEOCommonOptions *_commonOptions;
}

@property (readonly, nonatomic) BOOL requestInProgress;
@property (weak, nonatomic) id<GEOETAUpdaterDelegate> delegate;
@property (retain, nonatomic) NSString *requestingAppIdentifier;
@property (retain, nonatomic) GEOComposedRoute *route;
@property (retain, nonatomic) GEORouteMatch *routeMatch;
@property (retain, nonatomic) GEOLocation *userLocation;
@property (retain, nonatomic) NSArray *waypoints;
@property (retain, nonatomic) GEORouteAttributes *routeAttributes;
@property (retain, nonatomic) NSData *directionsResponseID;
@property (retain, nonatomic) GEOApplicationAuditToken *auditToken;
@property (nonatomic) BOOL allowRequests;
@property (nonatomic) BOOL shouldUseConditionalRequest;
@property (nonatomic) BOOL shouldUpdateTrafficOnRoute;
@property (nonatomic) double requestInterval;
@property (nonatomic) double debugTimeWindowDuration;
@property (nonatomic) unsigned long long maxAlternateRoutesCount;

- (double)_currentTime;
- (id)currentStep;
- (id)destination;
- (void)dealloc;
- (id)init;
- (void)cancelRequest;
- (void)requestUpdate;
- (void).cxx_destruct;
- (void)reset;
- (void)_updateRequest:(id)a0;
- (void)_addRouteAttributesToRequest:(id)a0 completion:(id /* block */)a1;
- (double)_calculateNextTransitionTime;
- (void)_clearTimer;
- (void)_continueUpdateRequests;
- (void)_sendRequest:(id)a0;
- (BOOL)_shouldStartConditionalETARequest;
- (void)_startConditionalConnectionETARequest;
- (void)_startStateWaitingForBestTimeStart:(id)a0;
- (void)_trafficRequest:(id)a0 finished:(id)a1;
- (id)_updateOrCreateRequest:(id)a0;
- (id)initWithRoute:(id)a0 waypoints:(id)a1 routeAttributes:(id)a2;
- (void)startUpdateRequests;
- (void)stopUpdateRequests;

@end
