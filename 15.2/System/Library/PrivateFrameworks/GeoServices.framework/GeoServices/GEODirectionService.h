@class GEODirectionsRequester;

@interface GEODirectionService : NSObject

@property (readonly, nonatomic) GEODirectionsRequester *directionsRequester;

+ (id)sharedService;

- (id)ticketForDrivingSearchAlongRoute:(id)a0 currentLocation:(id)a1 originalRoute:(id)a2 routeCoordinate:(struct { unsigned int x0; float x1; })a3 returnToOriginalDestination:(BOOL)a4 routeAttributes:(id)a5 commonOptions:(id)a6;
- (id)ticketForDrivingRerouteFromLocation:(id)a0 originalRoute:(id)a1 stepIndex:(unsigned long long)a2 routeCoordinate:(struct { unsigned int x0; float x1; })a3 routeAttributes:(id)a4 originalDirectionsResponseID:(id)a5 previousRequestTime:(double)a6 lastETADisplayed:(id)a7 commonOptions:(id)a8 requestingAppIdentifier:(id)a9;
- (id)ticketForWalkingRerouteFromLocation:(id)a0 originalRoute:(id)a1 stepIndex:(unsigned long long)a2 routeCoordinate:(struct { unsigned int x0; float x1; })a3 routeAttributes:(id)a4 originalDirectionsResponseID:(id)a5 previousRequestTime:(double)a6 lastETADisplayed:(id)a7 commonOptions:(id)a8 requestingAppIdentifier:(id)a9;
- (id)ticketForDrivingWaypoints:(id)a0 currentLocation:(id)a1 visibleRegion:(id)a2 maxRouteCount:(unsigned int)a3 routeAttributes:(id)a4 feedback:(id)a5 commonOptions:(id)a6;
- (id)ticketForWalkingWaypoints:(id)a0 currentLocation:(id)a1 visibleRegion:(id)a2 maxRouteCount:(unsigned int)a3 routeAttributes:(id)a4 feedback:(id)a5 commonOptions:(id)a6;
- (id)ticketForTransitWaypoints:(id)a0 currentLocation:(id)a1 visibleRegion:(id)a2 maxRouteCount:(unsigned int)a3 routeAttributes:(id)a4 feedback:(id)a5 commonOptions:(id)a6;
- (id)ticketForCyclingWaypoints:(id)a0 currentLocation:(id)a1 visibleRegion:(id)a2 maxRouteCount:(unsigned int)a3 routeAttributes:(id)a4 feedback:(id)a5 commonOptions:(id)a6;
- (id)_ticketForSearchAlongRoute:(id)a0 transportType:(int)a1 currentLocation:(id)a2 originalRoute:(id)a3 routeCoordinate:(struct { unsigned int x0; float x1; })a4 returnToOriginalDestination:(BOOL)a5 routeAttributes:(id)a6 commonOptions:(id)a7;
- (id)ticketForCyclingSearchAlongRoute:(id)a0 currentLocation:(id)a1 originalRoute:(id)a2 routeCoordinate:(struct { unsigned int x0; float x1; })a3 returnToOriginalDestination:(BOOL)a4 routeAttributes:(id)a5 commonOptions:(id)a6;
- (id)ticketForDrivingWaypoints:(id)a0 currentLocation:(id)a1 visibleRegion:(id)a2 maxRouteCount:(unsigned int)a3 routeAttributes:(id)a4 feedback:(id)a5 commonOptions:(id)a6 sessionID:(struct GEOSessionID { unsigned long long x0; unsigned long long x1; })a7;
- (id)ticketForTransitRerouteFromLocation:(id)a0 originalRoute:(id)a1 stepIndex:(unsigned long long)a2 routeAttributes:(id)a3 originalDirectionsResponseID:(id)a4 previousRequestTime:(double)a5 commonOptions:(id)a6;
- (id)ticketForWalkingWaypoints:(id)a0 currentLocation:(id)a1 visibleRegion:(id)a2 maxRouteCount:(unsigned int)a3 routeAttributes:(id)a4 feedback:(id)a5 commonOptions:(id)a6 sessionID:(struct GEOSessionID { unsigned long long x0; unsigned long long x1; })a7;
- (id)ticketForCyclingRerouteFromLocation:(id)a0 originalRoute:(id)a1 stepIndex:(unsigned long long)a2 routeCoordinate:(struct { unsigned int x0; float x1; })a3 routeAttributes:(id)a4 originalDirectionsResponseID:(id)a5 previousRequestTime:(double)a6 lastETADisplayed:(id)a7 commonOptions:(id)a8 requestingAppIdentifier:(id)a9;
- (id)ticketForTransitWaypoints:(id)a0 currentLocation:(id)a1 visibleRegion:(id)a2 maxRouteCount:(unsigned int)a3 routeAttributes:(id)a4 feedback:(id)a5 commonOptions:(id)a6 sessionID:(struct GEOSessionID { unsigned long long x0; unsigned long long x1; })a7;
- (id)ticketForCyclingWaypoints:(id)a0 currentLocation:(id)a1 visibleRegion:(id)a2 maxRouteCount:(unsigned int)a3 routeAttributes:(id)a4 feedback:(id)a5 commonOptions:(id)a6 sessionID:(struct GEOSessionID { unsigned long long x0; unsigned long long x1; })a7;
- (id)directionsURL;
- (void).cxx_destruct;
- (id)_geoOriginalWaypointRouteForReroute:(id)a0 fromStepIndex:(unsigned long long)a1;
- (id)ticketForDrivingRouteRecall:(id)a0 waypoints:(id)a1 maxRouteCount:(unsigned int)a2 routeAttributes:(id)a3 feedback:(id)a4;
- (id)ticketForDrivingDoomFromOrigin:(id)a0 toDestination:(id)a1 requestPriority:(id)a2 routeAttributes:(id)a3;
- (id)ticketForWalkingRouteRecall:(id)a0 waypoints:(id)a1 maxRouteCount:(unsigned int)a2 routeAttributes:(id)a3 feedback:(id)a4;
- (id)ticketForTransitRouteRecall:(id)a0 waypoints:(id)a1 maxRouteCount:(unsigned int)a2 routeAttributes:(id)a3 feedback:(id)a4;
- (id)ticketForCyclingRouteRecall:(id)a0 waypoints:(id)a1 maxRouteCount:(unsigned int)a2 routeAttributes:(id)a3 feedback:(id)a4;
- (id)init;

@end
