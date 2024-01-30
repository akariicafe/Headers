@class GEOPBTransitHall, GEOTransitStep, GEOTransitScheduleInfo, NSArray, NSString, GEOPBTransitStop;
@protocol GEOTransitVehicleEntries, GEOTransitArtworkDataSource;

@interface GEOComposedTransitRouteStep : GEOComposedRouteStep {
    unsigned int _startTime;
    unsigned int _duration;
    NSArray *_routeDetailsPrimaryArtwork;
    id<GEOTransitArtworkDataSource> _routeDetailsSecondaryArtwork;
    NSArray *_steppingArtwork;
    NSArray *_transitIncidents;
    NSArray *_advisories;
}

@property (readonly, nonatomic) int maneuver;
@property (readonly, nonatomic) GEOComposedTransitRouteStep *previousTransitStep;
@property (readonly, nonatomic) GEOComposedTransitRouteStep *nextTransitStep;
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

- (double)distance;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned int)startTime;
- (unsigned int)duration;
- (BOOL)hasDuration;
- (id)description;
- (void).cxx_destruct;
- (id)steppingArtwork;
- (id)_intermediateListNameForStop:(id)a0;
- (id)_largestEntityAtStop:(id)a0 passingTest:(id /* block */)a1;
- (unsigned long long)_muidForStop:(id)a0;
- (void)_populateArtworksWithDecoderData:(id)a0;
- (void)_populateIncidentsWithDecoderData:(id)a0;
- (id)advisories;
- (struct { double x0; double x1; double x2; })endGeoCoordinate;
- (id)endingStop;
- (id)initWithComposedRoute:(id)a0 decoderData:(id)a1 routeSegmentType:(long long)a2 step:(id)a3 stepIndex:(unsigned long long)a4 duration:(unsigned int)a5 pointRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a6;
- (id)instructions;
- (BOOL)isArrivalStep;
- (BOOL)isStartOrResumeStep;
- (id)nextAlightingStep;
- (id)nextBoardingStep;
- (id)nextStop;
- (id)previousAlightingStep;
- (id)previousBoardingStep;
- (id)previousStop;
- (id)routeDetailsPrimaryArtwork;
- (id)routeDetailsSecondaryArtwork;
- (struct { double x0; double x1; double x2; })startGeoCoordinate;
- (id)startingStop;
- (id)transitIncidents;

@end
