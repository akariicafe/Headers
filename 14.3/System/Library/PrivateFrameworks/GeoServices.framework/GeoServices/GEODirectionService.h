@class GEODirectionsRequester;

@interface GEODirectionService : NSObject

@property (readonly, nonatomic) GEODirectionsRequester *directionsRequester;

+ (id)sharedService;

- (id)directionsURL;
- (id)ticketForDrivingRerouteFromLocation:(id)a0 originalRoute:(id)a1 originalRequest:(id)a2 stepIndex:(unsigned long long)a3 routeCoordinate:(struct { unsigned int x0; float x1; })a4 routeAttributes:(id)a5 originalDirectionsResponseID:(id)a6 previousRequestTime:(double)a7 requestingAppIdentifier:(id)a8 evInfo:(id)a9;
- (id)ticketForDrivingSearchAlongRoute:(id)a0 currentLocation:(id)a1 originalRoute:(id)a2 returnToOriginalDestination:(BOOL)a3 isReroute:(BOOL)a4 routeAttributes:(id)a5;
- (id)ticketForCyclingSearchAlongRoute:(id)a0 currentLocation:(id)a1 originalRoute:(id)a2 returnToOriginalDestination:(BOOL)a3 isReroute:(BOOL)a4 routeAttributes:(id)a5;
- (id)ticketForDrivingWaypoints:(id)a0 currentLocation:(id)a1 visibleRegion:(id)a2 maxRouteCount:(unsigned int)a3 routeAttributes:(id)a4 feedback:(id)a5;
- (id)ticketForWalkingWaypoints:(id)a0 currentLocation:(id)a1 visibleRegion:(id)a2 maxRouteCount:(unsigned int)a3 routeAttributes:(id)a4 feedback:(id)a5;
- (id)ticketForTransitWaypoints:(id)a0 currentLocation:(id)a1 visibleRegion:(id)a2 maxRouteCount:(unsigned int)a3 routeAttributes:(id)a4 feedback:(id)a5;
- (id)ticketForDrivingWaypoints:(id)a0 currentLocation:(id)a1 visibleRegion:(id)a2 maxRouteCount:(unsigned int)a3 routeAttributes:(id)a4 feedback:(id)a5 sessionID:(struct GEOSessionID { unsigned long long x0; unsigned long long x1; })a6;
- (id)ticketForCyclingWaypoints:(id)a0 currentLocation:(id)a1 visibleRegion:(id)a2 maxRouteCount:(unsigned int)a3 routeAttributes:(id)a4 feedback:(id)a5;
- (id)ticketForWalkingWaypoints:(id)a0 currentLocation:(id)a1 visibleRegion:(id)a2 maxRouteCount:(unsigned int)a3 routeAttributes:(id)a4 feedback:(id)a5 sessionID:(struct GEOSessionID { unsigned long long x0; unsigned long long x1; })a6;
- (id)ticketForTransitWaypoints:(id)a0 currentLocation:(id)a1 visibleRegion:(id)a2 maxRouteCount:(unsigned int)a3 routeAttributes:(id)a4 feedback:(id)a5 sessionID:(struct GEOSessionID { unsigned long long x0; unsigned long long x1; })a6;
- (id)ticketForCyclingWaypoints:(id)a0 currentLocation:(id)a1 visibleRegion:(id)a2 maxRouteCount:(unsigned int)a3 routeAttributes:(id)a4 feedback:(id)a5 sessionID:(struct GEOSessionID { unsigned long long x0; unsigned long long x1; })a6;
- (id)ticketForWalkingRerouteFromLocation:(id)a0 originalRoute:(id)a1 stepIndex:(unsigned long long)a2 routeCoordinate:(struct { unsigned int x0; float x1; })a3 routeAttributes:(id)a4 originalDirectionsResponseID:(id)a5 previousRequestTime:(double)a6 requestingAppIdentifier:(id)a7;
- (id)ticketForCyclingRerouteFromLocation:(id)a0 originalRoute:(id)a1 stepIndex:(unsigned long long)a2 routeCoordinate:(struct { unsigned int x0; float x1; })a3 routeAttributes:(id)a4 originalDirectionsResponseID:(id)a5 previousRequestTime:(double)a6 requestingAppIdentifier:(id)a7;
- (id)ticketForSearchAlongRoute:(id)a0 transportType:(int)a1 currentLocation:(id)a2 originalRouteZilchPoints:(id)a3 originalRouteID:(id)a4 returnToOriginalDestination:(BOOL)a5 isReroute:(BOOL)a6 routeAttributes:(id)a7;
- (id)init;
- (void).cxx_destruct;
- (id)ticketForTransitRerouteFromLocation:(id)a0 originalRoute:(id)a1 stepIndex:(unsigned long long)a2 routeAttributes:(id)a3 originalDirectionsResponseID:(id)a4 previousRequestTime:(double)a5;
- (id)ticketForDrivingRouteRecall:(id)a0 waypoints:(id)a1 maxRouteCount:(unsigned int)a2 routeAttributes:(id)a3 feedback:(id)a4;
- (id)ticketForDrivingDoomFromOrigin:(id)a0 toDestination:(id)a1 requestPriority:(id)a2 routeAttributes:(id)a3;
- (id)ticketForWalkingRouteRecall:(id)a0 waypoints:(id)a1 maxRouteCount:(unsigned int)a2 routeAttributes:(id)a3 feedback:(id)a4;
- (id)ticketForTransitRouteRecall:(id)a0 waypoints:(id)a1 maxRouteCount:(unsigned int)a2 routeAttributes:(id)a3 feedback:(id)a4;
- (id)ticketForCyclingRouteRecall:(id)a0 waypoints:(id)a1 maxRouteCount:(unsigned int)a2 routeAttributes:(id)a3 feedback:(id)a4;

@end
