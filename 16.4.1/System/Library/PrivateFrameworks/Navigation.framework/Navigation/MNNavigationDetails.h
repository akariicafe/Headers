@class NSMutableDictionary, MNGuidanceLaneInfo, NSMapTable, MNDisplayETAInfo, MNLocation, GEODirectionsResponse, GEOResumeRouteHandle, GEONavigationGuidanceState, GEOComposedRoute, NSMutableArray, MNActiveRouteInfo, NSString, geo_isolater, GEODirectionsRequest, GEOComposedWaypoint, NSArray, MNRouteDistanceInfo, MNBatteryChargeInfo;

@interface MNNavigationDetails : NSObject <NSSecureCoding> {
    MNActiveRouteInfo *_currentRoute;
    NSArray *_previewRoutes;
    NSArray *_alternateRoutes;
    NSMapTable *_routeIDLookup;
    NSMutableDictionary *_trafficIncidentAlerts;
    geo_isolater *_routeLookupLock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSMapTable *routeIDLookup;
@property (readonly, nonatomic) NSMutableDictionary *routeLookup;
@property (nonatomic) unsigned long long state;
@property (nonatomic) long long navigationType;
@property (nonatomic) long long desiredNavigationType;
@property (nonatomic) int desiredTransportType;
@property (nonatomic) BOOL isResumingMultipointRoute;
@property (nonatomic) BOOL isApproachingWaypoint;
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
@property (nonatomic) unsigned long long targetLegIndex;
@property (nonatomic) unsigned long long displayedStepIndex;
@property (nonatomic) double proceedToRouteDistance;
@property (retain, nonatomic) NSString *displayString;
@property (nonatomic) unsigned long long closestStepIndex;
@property (nonatomic) double distanceUntilSign;
@property (nonatomic) double timeUntilSign;
@property (nonatomic) double distanceUntilManeuver;
@property (nonatomic) double timeUntilManeuver;
@property (retain, nonatomic) NSString *currentVoiceLanguage;
@property (retain, nonatomic) MNGuidanceLaneInfo *activeLaneInfo;
@property (retain, nonatomic) NSMutableArray *spokenAnnouncements;
@property (readonly, nonatomic) MNDisplayETAInfo *displayETAInfo;
@property (readonly, nonatomic) MNRouteDistanceInfo *remainingDistanceInfo;
@property (readonly, nonatomic) MNBatteryChargeInfo *batteryChargeInfo;
@property (retain, nonatomic) GEOResumeRouteHandle *resumeRouteHandle;
@property (copy, nonatomic) NSString *tracePath;
@property (nonatomic) BOOL traceIsPlaying;
@property (nonatomic) double traceDuration;
@property (nonatomic) double tracePosition;
@property (retain, nonatomic) NSArray *traceBookmarks;
@property (nonatomic) long long simulationType;

- (void)encodeWithCoder:(id)a0;
- (void)copySerializableValuesFrom:(id)a0;
- (id)routeLookupIDs;
- (void)setPreviewRoutes:(id)a0 withSelectedRouteIndex:(unsigned long long)a1;
- (id)initWithCoder:(id)a0;
- (id)updateWithTrafficIncidentAlert:(id)a0;
- (void)setAlternateRoutes:(id)a0;
- (void)markAnnouncementSpoken:(id)a0;
- (id)removeTrafficIncidentAlert:(id)a0;
- (void)_updateRouteIDLookup;
- (id)routeInfoForID:(id)a0;
- (id)routeInfoForRoute:(id)a0;
- (void)setCurrentRoute:(id)a0 withAlternateRoutes:(id)a1;
- (id)init;
- (void)updateETATrafficForRoute:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
