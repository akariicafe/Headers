@class GEORouteRestrictionZoneInfo, GEOMapRegion, GEOComposedRouteMutableData, NSMutableArray, NSString, GEOComposedWaypoint, NSArray, GEOElevationProfile, GEOStyleAttributes, GEOTransitRouteUpdateRequest, GEORouteDisplayHints, GEOTransitDecoderData, GEOComposedRouteCellularCoverage, GEOWaypointRoute, NSData, GEORouteAttributes, GEOZilchDecoder, geo_isolater, GEOComposedRouteCoordinateArray, GEOTransitSuggestedRoute, GEOComposedRouteTraffic, geo_reentrant_isolater, NSUUID, GEORouteInitializerData, NSDate, NSHashTable;
@protocol GEOTransitRoutingIncidentMessage, GEOTransitArtworkDataSource, GEOComposedRouteTransitDisplayStrings, GEOServerFormattedString;

@interface GEOComposedRoute : NSObject <_GEORouteHypothesisMonitorETAProvider, NSSecureCoding, GEOMapAccessRestrictions> {
    GEORouteAttributes *_routeAttributes;
    GEORouteInitializerData *_routeInitializerData;
    GEOTransitDecoderData *_decoderData;
    GEOComposedRouteCoordinateArray *_coordinates;
    GEOComposedRouteCellularCoverage *_cellularCoverage;
    long long _initialPromptTypes;
    NSArray *_currentSectionOptions;
    NSArray *_ticketedSegments;
    NSArray *_transitRouteUpdateAlerts;
    id<GEOComposedRouteTransitDisplayStrings> _transitRouteDisplayStrings;
    NSMutableArray *_snappedPaths;
    GEOZilchDecoder *_zilchDecoder;
    geo_reentrant_isolater *_snappedRoutesIsolater;
    geo_isolater *_mutableDataLock;
    GEOComposedRouteMutableData *_mutableData;
    NSHashTable *_observers;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double _hypothesis_travelDuration;
@property (readonly, nonatomic) double _hypothesis_travelDurationAggressiveEstimate;
@property (readonly, nonatomic) double _hypothesis_travelDurationConservativeEstimate;
@property (readonly, nonatomic) unsigned long long serverIdentifier;
@property (retain, nonatomic) NSData *serverRouteID;
@property (retain, nonatomic) NSUUID *uniqueRouteID;
@property (readonly, nonatomic) GEORouteInitializerData *routeInitializerData;
@property (readonly, nonatomic) GEORouteAttributes *routeAttributes;
@property (readonly, nonatomic) NSArray *etauPositions;
@property (readonly, nonatomic) unsigned int pointCount;
@property (readonly, nonatomic) struct PolylineCoordinate { unsigned int x0; float x1; } endRouteCoordinate;
@property (readonly, nonatomic) BOOL usesZilch;
@property (readonly, nonatomic) BOOL usesRoutingPathPoints;
@property (readonly, nonatomic) GEOComposedWaypoint *origin;
@property (readonly, nonatomic) GEOComposedWaypoint *destination;
@property (readonly, nonatomic) NSArray *waypoints;
@property (readonly, nonatomic) BOOL isNavigable;
@property (readonly, nonatomic) NSData *directionsResponseID;
@property (readonly, nonatomic) NSData *etauResponseID;
@property (readonly, nonatomic) unsigned long long indexInResponse;
@property (readonly, nonatomic) NSArray *legs;
@property (readonly, nonatomic) NSArray *segments;
@property (readonly, nonatomic) NSArray *steps;
@property (readonly, nonatomic) NSArray *enrouteNotices;
@property (readonly, nonatomic) NSArray *composedGuidanceEvents;
@property (readonly, nonatomic) NSArray *visualInfos;
@property (readonly, nonatomic) NSArray *cameraInfos;
@property (readonly, nonatomic) NSArray *stops;
@property (readonly, nonatomic) NSArray *halls;
@property (readonly, nonatomic) NSArray *stations;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) id<GEOServerFormattedString> routeLabelDescription;
@property (readonly, nonatomic) id<GEOTransitArtworkDataSource> routeLabelArtwork;
@property (readonly, nonatomic) NSArray *advisories;
@property (readonly, nonatomic) NSArray *routeDescriptions;
@property (readonly, nonatomic) NSString *trafficDescription;
@property (readonly, nonatomic) NSString *longTrafficDescription;
@property (readonly, nonatomic) GEORouteRestrictionZoneInfo *restrictionZoneInfo;
@property (readonly, nonatomic) id<GEOServerFormattedString> infrastructureDescription;
@property (readonly, nonatomic) unsigned long long stepsCount;
@property (readonly, nonatomic) BOOL isNewProtocolRoute;
@property (readonly, nonatomic) GEOWaypointRoute *geoWaypointRoute;
@property (readonly, nonatomic) BOOL hasArrivalMapRegion;
@property (readonly, nonatomic) GEOMapRegion *arrivalMapRegion;
@property (readonly, nonatomic) BOOL hasExpectedTime;
@property (readonly, nonatomic) unsigned int expectedTime;
@property (readonly, nonatomic) BOOL hasHistoricTravelTime;
@property (readonly, nonatomic) unsigned int historicTravelTime;
@property (readonly, nonatomic) double freeflowTravelTime;
@property (readonly, nonatomic) double travelTimeAggressiveEstimate;
@property (readonly, nonatomic) double travelTimeConservativeEstimate;
@property (readonly, nonatomic) double chargingDuration;
@property (readonly, nonatomic) double travelAndChargingDuration;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) double distance;
@property (readonly, nonatomic) double pointLength;
@property (readonly, nonatomic) BOOL avoidsTolls;
@property (readonly, nonatomic) BOOL avoidsHighways;
@property (readonly, nonatomic) BOOL avoidsTraffic;
@property (nonatomic) BOOL maneuverDisplayEnabled;
@property (nonatomic) unsigned long long currentDisplayStep;
@property (retain, nonatomic) NSArray *maneuverDisplaySteps;
@property (nonatomic) unsigned long long selectedSegmentIndex;
@property (nonatomic) unsigned int firstVisiblePoint;
@property (readonly, nonatomic) int transportType;
@property (retain, nonatomic) GEOTransitSuggestedRoute *suggestedRoute;
@property (readonly, nonatomic) GEOTransitSuggestedRoute *originalSuggestedRoute;
@property (readonly, nonatomic) unsigned long long indexOfSuggestedRoute;
@property (readonly, copy, nonatomic) NSArray *routePlanningArtworks;
@property (readonly, nonatomic) id<GEOTransitRoutingIncidentMessage> transitRoutingIncidentMessage;
@property (readonly, nonatomic) BOOL hasRideClusters;
@property (readonly, nonatomic) NSArray *rideSelections;
@property (readonly, nonatomic) id<GEOServerFormattedString> launchAndGoCardTitle;
@property (readonly, nonatomic) id<GEOServerFormattedString> launchAndGoRouteTitle;
@property (readonly, nonatomic) id<GEOServerFormattedString> launchAndGoRouteDescription;
@property (readonly, nonatomic) id<GEOServerFormattedString> previewDurationFormatString;
@property (readonly, nonatomic) id<GEOServerFormattedString> pickingDurationFormatString;
@property (readonly, nonatomic) id<GEOServerFormattedString> planningDescriptionFormatString;
@property (readonly, nonatomic) id<GEOServerFormattedString> planningDistanceFormatString;
@property (readonly, nonatomic) NSString *planningSeparatorString;
@property (readonly, nonatomic) id<GEOServerFormattedString> transitDescriptionFormatString;
@property (readonly, nonatomic) BOOL isEVRoute;
@property (readonly, nonatomic) BOOL isWalkingOnlyTransitRoute;
@property (readonly, nonatomic) id<GEOServerFormattedString> transitRouteBadge;
@property (nonatomic) double transitUpdateInitialDelay;
@property (readonly, nonatomic) GEOElevationProfile *elevationProfile;
@property (readonly, nonatomic) GEORouteDisplayHints *displayHints;
@property (readonly, nonatomic) BOOL shouldShowSchedule;
@property (readonly, nonatomic) GEOStyleAttributes *styleAttributes;
@property (readonly, nonatomic) GEOComposedRouteTraffic *traffic;
@property (retain, nonatomic) GEOComposedRouteMutableData *mutableData;
@property (retain, nonatomic) NSArray *transitPaymentMethods;
@property (readonly, nonatomic) int routeType;
@property (readonly, nonatomic) NSArray *sections;
@property (readonly, nonatomic) GEOMapRegion *boundingMapRegion;
@property (readonly, nonatomic) unsigned long long numberOfTransitStops;
@property (readonly, nonatomic) GEOTransitRouteUpdateRequest *transitRouteUpdateRequest;
@property (retain, nonatomic) NSUUID *revisionIdentifier;
@property (readonly, nonatomic) NSArray *baseTransitFares;
@property (readonly, nonatomic) BOOL allowsNetworkTileLoad;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setSteps:(id)a0;
- (void)registerObserver:(id)a0;
- (void)dealloc;
- (void)setSegments:(id)a0;
- (void)unregisterObserver:(id)a0;
- (void)setSections:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)_nextOptionForOption:(id)a0 rideIndex:(unsigned long long)a1;
- (id)getHallForStop:(id)a0;
- (void)setIsNavigable:(BOOL)a0;
- (void)_initializeManeuverDisplaySteps;
- (unsigned long long)segmentIndexForRouteCoordinate:(struct { unsigned int x0; float x1; })a0;
- (BOOL)_MapsCarPlay_isEqual:(id)a0;
- (void)_addPaths:(id)a0 forObserver:(id)a1;
- (void)_addSnappedPolylinePathsForSection:(id)a0 toPaths:(id)a1 rects:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; } *)a2 rectsCount:(unsigned long long)a3;
- (void)_enumerateAllStepsWithBlock:(id /* block */)a0;
- (struct PolylineCoordinate { unsigned int x0; float x1; })_findRouteCoordinateWithOffset:(float)a0 aPos:(const void *)a1 aCoord:(const struct PolylineCoordinate { unsigned int x0; float x1; } *)a2 bCoord:(const struct PolylineCoordinate { unsigned int x0; float x1; } *)a3 pointOnSegment:(const void *)a4 bounds:(const struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; } *)a5;
- (id)_geoETAWaypointRouteWithZilchFromRouteCoordinate:(struct PolylineCoordinate { unsigned int x0; float x1; })a0;
- (double)_hypothesis_travelDurationFromStep:(id)a0 stepRemainingDistance:(double)a1;
- (void)_ingestRouteBuilderOutput:(id)a0;
- (void)_initAdvisoriesForRoute:(id)a0 initializerData:(id)a1;
- (void)_initOtherRouteFeatures:(id)a0 initializerData:(id)a1;
- (void)_iterateTravelTimeRangesForStep:(id)a0 handler:(id /* block */)a1;
- (BOOL)_meetsMinimumPathLengthBetweenStart:(unsigned int)a0 end:(unsigned int)a1;
- (void)_populateArtworkForSuggestedRoute:(id)a0 decoderData:(id)a1;
- (void)_rebuildRouteForRideChange;
- (void)_snapPaths:(id)a0 completionHandler:(id /* block */)a1;
- (unsigned long long)_tripIndexForTripSegment:(id)a0;
- (void)_updateRevisionIdentifier;
- (void)applyCompanionUpdates:(id)a0;
- (void)applyUpdatesToTransitRoute:(id)a0;
- (id)boardStepForSection:(id)a0;
- (BOOL)checkDrivingArrivalForCoordinate:(struct { double x0; double x1; })a0 coordinateOnRoute:(struct { double x0; double x1; })a1 routePointIndex:(unsigned int)a2 distanceFromRoute:(double)a3 arrivalMapRegion:(id)a4 checkArrivalRadius:(BOOL)a5 checkDistanceAlongRoute:(BOOL)a6 checkRoadAccessPoints:(BOOL)a7 isOnRoute:(BOOL)a8;
- (void)clearPoints;
- (void)clearSnappedPathsForObserver:(id)a0;
- (struct PolylineCoordinate { unsigned int x0; float x1; })closestPointOnRoute:(struct { double x0; double x1; })a0;
- (struct PolylineCoordinate { unsigned int x0; float x1; })coordinateAtOffset:(double)a0;
- (struct PolylineCoordinate { unsigned int x0; float x1; })coordinateAtOffset:(double)a0 fromRouteCoordinate:(struct PolylineCoordinate { unsigned int x0; float x1; })a1;
- (struct PolylineCoordinate { unsigned int x0; float x1; })coordinateAtOffset:(double)a0 fromRoutePoint:(unsigned long long)a1;
- (id)coordinates;
- (double)courseAtRouteCoordinateIndex:(unsigned int)a0;
- (double)distanceBetweenIndex:(unsigned long long)a0 andIndex:(unsigned long long)a1;
- (double)distanceBetweenLocation:(struct { double x0; double x1; })a0 nextPointIndex:(unsigned int)a1 toPointIndex:(unsigned int)a2;
- (double)distanceBetweenRouteCoordinate:(struct { unsigned int x0; float x1; })a0 andRouteCoordinate:(struct { unsigned int x0; float x1; })a1;
- (double)distanceBetweenRoutePointIndex:(unsigned int)a0 toPointIndex:(unsigned int)a1;
- (double)distanceBetweenStep:(id)a0 andStep:(id)a1;
- (double)distanceFromPoint:(struct PolylineCoordinate { unsigned int x0; float x1; })a0 toPoint:(struct PolylineCoordinate { unsigned int x0; float x1; })a1;
- (double)distanceFromPointIndex:(unsigned long long)a0 toPointIndex:(unsigned long long)a1;
- (double)distanceFromStartToIndex:(unsigned long long)a0;
- (double)distanceFromStartToRouteCoordinate:(struct { unsigned int x0; float x1; })a0;
- (double)distanceToEndFromIndex:(unsigned long long)a0;
- (double)distanceToEndFromRouteCoordinate:(struct { unsigned int x0; float x1; })a0;
- (void)enumerateCellularCoverageRangesWithBlock:(id /* block */)a0;
- (int)estimatedCellularCoverageForOffset:(double)a0;
- (void)forEachSnappedPath:(id /* block */)a0;
- (int)formOfWayAt:(unsigned int)a0;
- (id)geoETAWaypointRoute;
- (id)geoETAWaypointRouteFromRouteCoordinate:(struct PolylineCoordinate { unsigned int x0; float x1; })a0 includeOriginWaypointInfo:(BOOL)a1 startPathSegment:(id)a2;
- (id)geoOriginalWaypointRouteFromRouteCoordinate:(struct PolylineCoordinate { unsigned int x0; float x1; })a0 purpose:(int)a1;
- (id)geoOriginalWaypointRouteFromRouteCoordinate:(struct PolylineCoordinate { unsigned int x0; float x1; })a0 purpose:(int)a1 origin:(id)a2 startPathSegment:(id)a3;
- (id)geoTrafficBannerText;
- (void)getFormOfWay:(int *)a0 roadClass:(int *)a1 at:(unsigned int)a2;
- (id)getSnappedPathsForLocation:(struct { double x0; double x1; })a0 radius:(double)a1 observer:(id)a2;
- (id)getSnappedPathsForVisibleRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0 rectsToSnap:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; } *)a1 rectsToSnapCount:(unsigned long long)a2 observer:(id)a3;
- (id)getSnappedPathsForVisibleRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0 rectsToSnap:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; } *)a1 rectsToSnapCount:(unsigned long long)a2 observer:(id)a3 completionHandler:(id /* block */)a4;
- (id)getStationForHall:(id)a0;
- (id)getStationForStop:(id)a0;
- (BOOL)hasInitialPromptType:(int)a0;
- (id)initWithCompanionRoute:(id)a0;
- (id)initWithGeoWaypointRoute:(id)a0 initializerData:(id)a1;
- (id)initWithSuggestedRoute:(id)a0 initializerData:(id)a1;
- (id)initWithSuggestedRoute:(id)a0 initializerData:(id)a1 uniqueRouteID:(id)a2;
- (id)initWithSuggestedRoute:(id)a0 initializerData:(id)a1 updateRequest:(id)a2;
- (id)initWithTransitGeometry:(id)a0 andLine:(id)a1 andStops:(id)a2;
- (BOOL)isSnapping;
- (BOOL)isStopInTerminalStructure:(id)a0;
- (void)iterateTravelTimeRangesFromRouteCoordinate:(struct PolylineCoordinate { unsigned int x0; float x1; })a0 etaRoute:(id)a1 handler:(id /* block */)a2;
- (unsigned int)laneCountAtRouteCoordinate:(struct PolylineCoordinate { unsigned int x0; float x1; })a0;
- (id)lastEVStep;
- (id)lastEVStepInLegWithIndex:(unsigned long long)a0;
- (unsigned long long)lastStepIndexOfLegAtStepIndex:(unsigned long long)a0;
- (unsigned long long)legIndexForRouteCoordinate:(struct { unsigned int x0; float x1; })a0;
- (unsigned long long)legIndexForStepIndex:(unsigned long long)a0;
- (struct { double x0; double x1; double x2; })locationAtDistance:(double)a0 from:(id)a1;
- (void)maneuverDisplayHasChanged;
- (struct { double x0; double x1; double x2; })pointAt:(unsigned long long)a0;
- (struct { double x0; double x1; double x2; })pointAtRouteCoordinate:(struct PolylineCoordinate { unsigned int x0; float x1; })a0;
- (double)remainingDistanceAlongRouteFromStepIndex:(unsigned long long)a0 currentStepRemainingDistance:(double)a1;
- (double)remainingDistanceToEndOfLeg:(unsigned long long)a0 currentStepRemainingDistance:(double)a1;
- (double)remainingTimeAlongRouteFromStepIndex:(unsigned long long)a0 currentStepRemainingDistance:(double)a1;
- (double)remainingTimeToEndOfCurrentLegFrom:(struct PolylineCoordinate { unsigned int x0; float x1; })a0 etaRoute:(id)a1;
- (double)remainingTimeToEndOfLeg:(unsigned long long)a0 currentStepRemainingDistance:(double)a1;
- (double)remainingTimeToEndOfRouteFrom:(struct PolylineCoordinate { unsigned int x0; float x1; })a0 etaRoute:(id)a1;
- (id)roadFeatureAtPointIndex:(unsigned int)a0;
- (void)roadFeaturesForRouteCoordinate:(struct PolylineCoordinate { unsigned int x0; float x1; })a0 distanceAhead:(double)a1 handler:(id /* block */)a2;
- (struct PolylineCoordinate { unsigned int x0; float x1; })routeCoordinateAtDistance:(double)a0 beforeRouteCoordinate:(struct PolylineCoordinate { unsigned int x0; float x1; })a1;
- (struct { unsigned int x0; float x1; })routeCoordinateForDistance:(double)a0 afterRouteCoordinate:(struct { unsigned int x0; float x1; })a1;
- (struct { unsigned int x0; float x1; })routeCoordinateForDistance:(double)a0 beforeRouteCoordinate:(struct { unsigned int x0; float x1; })a1;
- (struct { unsigned int x0; float x1; })routeCoordinateForDistanceAfterStart:(double)a0;
- (struct { unsigned int x0; float x1; })routeCoordinateForDistanceBeforeEnd:(double)a0;
- (id)routeMatchAtDistance:(double)a0 from:(id)a1 stopAtEndOfTunnel:(BOOL)a2 stopAtEndOfManeuver:(BOOL)a3 date:(id)a4;
- (id)routingPathDataFromStart:(struct PolylineCoordinate { unsigned int x0; float x1; })a0;
- (id)sectionOptionForTripIndex:(unsigned long long)a0;
- (id)sectionOptionForTripSegment:(id)a0;
- (id)segmentForPointIndex:(unsigned int)a0;
- (id)segmentForStepIndex:(unsigned long long)a0;
- (unsigned long long)segmentIndexForPointIndex:(unsigned long long)a0;
- (unsigned long long)segmentIndexForStepIndex:(unsigned long long)a0;
- (void)selectRide:(unsigned long long)a0 forBoardStep:(id)a1;
- (void)selectRide:(unsigned long long)a0 forTripSegment:(id)a1;
- (void)setBoundingMapRegion:(id)a0;
- (void)setComposedGuidanceEvents:(id)a0;
- (void)setIsWalkingOnlyTransitRoute:(BOOL)a0;
- (id)stepAtIndex:(unsigned long long)a0;
- (double)stepDistanceFromPoint:(struct PolylineCoordinate { unsigned int x0; float x1; })a0 toPoint:(struct PolylineCoordinate { unsigned int x0; float x1; })a1;
- (id)stepForPointIndex:(unsigned int)a0;
- (unsigned long long)stepIndexForPointIndex:(unsigned long long)a0;
- (unsigned long long)stepIndexForRouteCoordinate:(struct { unsigned int x0; float x1; })a0;
- (BOOL)supportsSnapping;
- (id)ticketingSegmentsForSelectedRides;
- (int)transportTypeForStep:(id)a0;
- (id)truncatedTrafficFromRouteCoordinate:(struct PolylineCoordinate { unsigned int x0; float x1; })a0;
- (void)updateRouteWithRideSelections:(id)a0;
- (void)updateTransitRouteUpdateRequest:(id)a0;
- (id)waypointsFromRouteCoordinate:(struct PolylineCoordinate { unsigned int x0; float x1; })a0;
- (id)zilchDataArrayToEndOfRouteFromStepIndex:(unsigned long long)a0;
- (id)zilchDataFromStepIndex:(unsigned long long)a0;

@end
