@class NSMutableDictionary, NSMapTable, MNDisplayETAInfo, MNLocation, GEODirectionsResponse, MNActiveRouteInfo, GEONavigationGuidanceState, GEOComposedRoute, NSString, geo_isolater, GEODirectionsRequest, GEOComposedWaypoint, NSArray, MNRouteDistanceInfo;

@interface MNNavigationDetails : NSObject <NSSecureCoding> {
    MNActiveRouteInfo *_currentRoute;
    NSArray *_previewRoutes;
    NSArray *_alternateRoutes;
    NSMapTable *_routeIDLookup;
    NSMutableDictionary *_trafficIncidentAlerts;
    geo_isolater *_routeLookupLock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *trackedCommuteDestinations;
@property (readonly, nonatomic) NSMapTable *routeIDLookup;
@property (readonly, nonatomic) NSMutableDictionary *routeLookup;
@property (nonatomic) unsigned long long state;
@property (nonatomic) int navigationType;
@property (nonatomic) int desiredNavigationType;
@property (nonatomic) int desiredTransportType;
@property (retain, nonatomic) GEODirectionsRequest *directionsRequest;
@property (retain, nonatomic) GEODirectionsResponse *directionsResponse;
@property (retain, nonatomic) MNLocation *location;
@property (nonatomic) BOOL guidancePromptsEnabled;
@property (nonatomic) BOOL isDetour;
@property (nonatomic) int headingOrientation;
@property (nonatomic) int navigationState;
@property (retain, nonatomic) GEONavigationGuidanceState *guidanceState;
@property (nonatomic) BOOL isInPreArrivalState;
@property (readonly, nonatomic) GEOComposedRoute *currentRoute;
@property (readonly, nonatomic) unsigned long long routeIndex;
@property (readonly, nonatomic) unsigned long long reconnectionRouteIndex;
@property (readonly, nonatomic) unsigned long long selectedPreviewRouteIndex;
@property (readonly, nonatomic) NSArray *previewRoutes;
@property (readonly, nonatomic) NSArray *alternateRoutes;
@property (retain, nonatomic) GEOComposedWaypoint *originalOrigin;
@property (retain, nonatomic) GEOComposedWaypoint *originalDestination;
@property (readonly, nonatomic) unsigned long long stepIndex;
@property (readonly, nonatomic) unsigned long long segmentIndex;
@property (nonatomic) double proceedToRouteDistance;
@property (retain, nonatomic) NSString *displayString;
@property (nonatomic) unsigned long long closestStepIndex;
@property (nonatomic) double distanceUntilSign;
@property (nonatomic) double timeUntilSign;
@property (nonatomic) double distanceUntilManeuver;
@property (nonatomic) double timeUntilManeuver;
@property (retain, nonatomic) NSString *currentVoiceLanguage;
@property (readonly, nonatomic) MNDisplayETAInfo *displayETAInfo;
@property (readonly, nonatomic) MNRouteDistanceInfo *remainingDistanceInfo;
@property (readonly, nonatomic) NSArray *possibleCommuteDestinations;
@property (copy, nonatomic) NSString *tracePath;
@property (nonatomic) BOOL traceIsPlaying;
@property (nonatomic) double traceDuration;
@property (nonatomic) double tracePosition;
@property (retain, nonatomic) NSArray *traceBookmarks;

- (id)init;
- (void)updateETATrafficForRoute:(id)a0;
- (void).cxx_destruct;
- (void)copySerializableValuesFrom:(id)a0;
- (void)updatePossibleCommuteDestinations:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setCurrentRoute:(id)a0 withAlternateRoutes:(id)a1;
- (id)description;
- (id)routeInfoForRoute:(id)a0;
- (void)setPreviewRoutes:(id)a0 withSelectedRouteIndex:(unsigned long long)a1;
- (id)routeLookupIDs;
- (void)setAlternateRoutes:(id)a0;
- (id)routeInfoForID:(id)a0;
- (id)removeTrafficIncidentAlert:(id)a0;
- (void)_updateRouteIDLookup;
- (id)updateWithTrafficIncidentAlert:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
