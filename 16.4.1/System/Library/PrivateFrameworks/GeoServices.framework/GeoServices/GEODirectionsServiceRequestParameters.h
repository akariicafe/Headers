@class GEODirectionsRequestFeedback, GEOMapRegion, GEOResumeRouteHandle, GEOApplicationAuditToken, GEOLocation, GEOComposedRoute, NSString, GEOComposedWaypoint, GEOMatchedPathSegment, NSArray, GEOCommonOptions, GEORouteAttributes, GEORecentLocationHistory;

@interface GEODirectionsServiceRequestParameters : NSObject

@property (nonatomic) unsigned long long requestType;
@property (retain, nonatomic) NSArray *waypoints;
@property (retain, nonatomic) GEOComposedRoute *currentRoute;
@property (retain, nonatomic) GEOResumeRouteHandle *resumeRouteHandle;
@property (nonatomic) unsigned long long waypointModificationType;
@property (retain, nonatomic) GEOComposedWaypoint *waypointToInsert;
@property (nonatomic) unsigned long long waypointIndexToRemove;
@property (nonatomic) struct { unsigned int index; float offset; } routeCoordinate;
@property (nonatomic) unsigned long long startingLegIndex;
@property (nonatomic) int transportType;
@property (retain, nonatomic) GEORouteAttributes *routeAttributes;
@property (retain, nonatomic) GEOCommonOptions *commonOptions;
@property (nonatomic) unsigned long long maxRouteCount;
@property (retain, nonatomic) GEOLocation *currentLocation;
@property (retain, nonatomic) GEOMapRegion *visibleRegion;
@property (retain, nonatomic) GEODirectionsRequestFeedback *feedback;
@property (nonatomic) BOOL returnToOriginalDestination;
@property (retain, nonatomic) GEOMatchedPathSegment *pathSegment;
@property (nonatomic) long long requestPriority;
@property (retain, nonatomic) GEOApplicationAuditToken *auditToken;
@property (retain, nonatomic) NSString *requestingAppIdentifier;
@property (nonatomic) double displayRemainingTimeToDestination;
@property (retain, nonatomic) GEORecentLocationHistory *recentLocationHistory;
@property (copy, nonatomic) id /* block */ requestCallback;

- (id)init;
- (void).cxx_destruct;

@end
