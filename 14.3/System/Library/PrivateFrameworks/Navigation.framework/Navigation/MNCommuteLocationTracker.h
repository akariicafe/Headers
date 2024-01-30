@class NSString, MNLocation, MNCommuteDestinationSuggestion, GEOComposedRoute, GEOETAUpdater, GEONavigationMapMatcher, GEOComposedWaypoint, MNActiveRouteInfo, MNNavigationTraceManager;
@protocol GEODirectionServiceTicket, GEOMapServiceTicket;

@interface MNCommuteLocationTracker : MNLocationTracker <GEOETAUpdaterDelegate> {
    GEOComposedWaypoint *_lastOrigin;
    MNLocation *_lastLocation;
    MNActiveRouteInfo *_routeInfo;
    id<GEOMapServiceTicket> _currentLocationTicket;
    id<GEODirectionServiceTicket> _directionsRequestTicket;
    GEONavigationMapMatcher *_mapMatcher;
    GEOETAUpdater *_etaUpdater;
    MNNavigationTraceManager *_traceManager;
}

@property (nonatomic) BOOL routingInProgress;
@property (readonly, nonatomic) MNCommuteDestinationSuggestion *suggestion;
@property (readonly, nonatomic) GEOComposedWaypoint *destination;
@property (readonly, nonatomic) GEOComposedRoute *route;
@property (nonatomic) unsigned long long destinationID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (int)transportType;
- (void)dealloc;
- (void)updateLocation:(id)a0;
- (void)_setAuditToken:(id)a0;
- (void)updateETA;
- (id)_routeAttributes;
- (void)etaUpdaterReceivedInvalidRoute:(id)a0 newRoute:(id)a1 incidentsOnRoute:(id)a2 incidentsOffRoute:(id)a3;
- (void)etaUpdater:(id)a0 willSendETATrafficUpdateRequest:(id)a1;
- (void)etaUpdater:(id)a0 receivedError:(id)a1;
- (void)etaUpdater:(id)a0 receivedETATrafficUpdateResponse:(id)a1 etaRoute:(id)a2;
- (void)etaUpdaterUpdatedETA:(id)a0;
- (void)stopTracking;
- (void)startTracking;
- (id)_matchedLocationForLocation:(id)a0;
- (void)_handleWaypoint:(id)a0 fromLocation:(id)a1 error:(id)a2;
- (void)_requestRouteFromWaypoint:(id)a0 location:(id)a1;
- (id)_directionsRequestFeedback;
- (void)_handleDirectionsResponse:(id)a0 error:(id)a1 forRequest:(id)a2;
- (void)_requestRouteFromLocation:(id)a0;
- (BOOL)_checkArrivalForLocation:(id)a0 route:(id)a1 destination:(id)a2;
- (id)_matchedLocationForMatchResult:(id)a0 originalLocation:(id)a1;
- (id)initWithSuggestion:(id)a0 traceManager:(id)a1;
- (id)etaUpdaterRoutesForETATrafficUpdateRequest:(id)a0;

@end
