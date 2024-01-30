@class GEOPBTransitHall, NSArray, GEOTransitStep, GEOTransitScheduleInfo, NSString, GEOPBTransitStop;
@protocol GEOTransitVehicleEntries, GEOTransitArtworkDataSource, GEOTransitRoutingIncidentMessage;

@interface GEOComposedTransitRouteStep : GEOComposedRouteStep {
    unsigned int _startTime;
    unsigned int _duration;
    NSArray *_routeDetailsPrimaryArtwork;
    id<GEOTransitArtworkDataSource> _routeDetailsSecondaryArtwork;
    NSArray *_steppingArtwork;
}

@property (readonly, nonatomic) int maneuver;
@property (readonly, nonatomic) GEOComposedTransitRouteStep *previousTransitStep;
@property (readonly, nonatomic) GEOComposedTransitRouteStep *nextTransitStep;
@property (readonly, nonatomic) id<GEOTransitRoutingIncidentMessage> steppingIncidentMessage;
@property (readonly, nonatomic) id<GEOTransitRoutingIncidentMessage> routeDetailsIncidentMessage;
@property (readonly, nonatomic) NSArray *advisories;
@property (readonly, nonatomic) GEOPBTransitStop *originStop;
@property (readonly, nonatomic) GEOPBTransitStop *destinationStop;
@property (readonly, nonatomic) GEOPBTransitHall *originHall;
@property (readonly, nonatomic) GEOPBTransitHall *destinationHall;
@property (readonly, nonatomic) GEOTransitStep *transitStep;
@property (readonly, nonatomic) id<GEOTransitVehicleEntries> vehicleEntries;
@property (readonly, nonatomic) GEOTransitScheduleInfo *scheduleInfo;
@property (readonly, nonatomic) NSArray *regionAlerts;
@property (readonly, nonatomic) unsigned long long originTransitEntityMuid;
@property (readonly, nonatomic) unsigned long long destinationTransitEntityMuid;
@property (readonly, nonatomic) NSString *originStopIntermediateListName;
@property (readonly, nonatomic) NSString *destinationStopIntermediateListName;

+ (BOOL)supportsSecureCoding;

- (unsigned int)startTime;
- (id)instructions;
- (void)encodeWithCoder:(id)a0;
- (double)distance;
- (id)previousStop;
- (void)_populateIncidentsWithDecoderData:(id)a0;
- (void)_populateArtworksWithDecoderData:(id)a0;
- (id)nextBoardingStep;
- (id)previousBoardingStep;
- (id)nextAlightingStep;
- (id)previousAlightingStep;
- (struct { double x0; double x1; double x2; })startGeoCoordinate;
- (struct { double x0; double x1; double x2; })endGeoCoordinate;
- (unsigned long long)_muidForStop:(id)a0;
- (id)_largestEntityAtStop:(id)a0 passingTest:(id /* block */)a1;
- (id)_intermediateListNameForStop:(id)a0;
- (id)initWithComposedRoute:(id)a0 decoderData:(id)a1 routeSegmentType:(long long)a2 step:(id)a3 stepIndex:(unsigned long long)a4 duration:(unsigned int)a5 pointRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a6;
- (BOOL)isArrivalStep;
- (id)routeDetailsPrimaryArtwork;
- (id)routeDetailsSecondaryArtwork;
- (id)steppingArtwork;
- (id)description;
- (id)nextStop;
- (void).cxx_destruct;
- (unsigned int)duration;
- (id)initWithCoder:(id)a0;
- (id)endingStop;
- (id)startingStop;
- (BOOL)hasDuration;

@end
