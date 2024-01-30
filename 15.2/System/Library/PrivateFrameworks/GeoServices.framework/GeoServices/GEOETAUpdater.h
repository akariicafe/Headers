@class NSData, NSString, NSTimer, GEOCommonOptions, GEOComposedRoute, GEORouteAttributes, GEOApplicationAuditToken, GEOComposedWaypoint, GEOETATrafficUpdateRequest, GEOComposedETARoute, GEORouteMatch, GEOLocation;
@protocol GEOETAUpdaterDelegate;

@interface GEOETAUpdater : NSObject {
    GEOETATrafficUpdateRequest *_currentETARequest;
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
@property (retain, nonatomic) GEOComposedWaypoint *destination;
@property (retain, nonatomic) GEORouteAttributes *routeAttributes;
@property (retain, nonatomic) NSData *directionsResponseID;
@property (retain, nonatomic) GEOApplicationAuditToken *auditToken;
@property (nonatomic) BOOL allowRequests;
@property (nonatomic) BOOL shouldUseConditionalRequest;
@property (nonatomic) BOOL shouldUpdateTrafficOnRoute;
@property (nonatomic) double requestInterval;
@property (nonatomic) double debugTimeWindowDuration;
@property (nonatomic) unsigned long long maxAlternateRoutesCount;

- (void)cancelRequest;
- (void)_sendRequest:(id)a0;
- (void)_clearTimer;
- (id)currentStep;
- (void)_continueUpdateRequests;
- (void)_updateRequest:(id)a0;
- (id)_updateOrCreateRequest:(id)a0;
- (void)_trafficRequest:(id)a0 finished:(id)a1;
- (BOOL)_shouldStartConditionalETARequest;
- (void)_startConditionalConnectionETARequest;
- (void)_addRouteAttributesToRequest:(id)a0 completion:(id /* block */)a1;
- (void)startUpdateRequests;
- (double)_calculateNextTransitionTime;
- (void)_startStateWaitingForBestTimeStart:(id)a0;
- (void)stopUpdateRequests;
- (id)initWithRoute:(id)a0 destination:(id)a1 routeAttributes:(id)a2;
- (void)requestUpdate;
- (void).cxx_destruct;
- (double)_currentTime;
- (id)init;
- (void)dealloc;
- (void)reset;

@end
