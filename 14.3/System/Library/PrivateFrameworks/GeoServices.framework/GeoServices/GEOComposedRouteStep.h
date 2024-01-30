@class NSString, GEOTransitStep, GEOComposedRouteSegment, GEOComposedRoute, NSArray, GEOComposedRouteEVStepInfo, GEOPBTransitStop, GEOComposedTransitTripRouteStep, GEOStep, GEOInstructionSet, GEOJunction;
@protocol GEOTransitArtworkDataSource;

@interface GEOComposedRouteStep : NSObject <NSSecureCoding> {
    NSString *_maneuverRoadOrExitName;
    NSString *_maneuverRoadName;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL shouldCreateEnterBoardGroup;
@property (readonly, nonatomic) BOOL shouldCreateAlightExitGroup;
@property (readonly, nonatomic) BOOL shouldCreateTransferGroup;
@property (readonly, nonatomic) BOOL shouldCreateTripProgressionGroup;
@property (readonly, nonatomic) BOOL shouldCreateFerryProgressionGroup;
@property (readonly, nonatomic) BOOL shouldCreateArrivalGroup;
@property (weak, nonatomic) GEOComposedRoute *composedRoute;
@property (nonatomic) double actualDistance;
@property (readonly, nonatomic) GEOComposedRouteSegment *segment;
@property (readonly, nonatomic, getter=getPreviousStep) GEOComposedRouteStep *previousStep;
@property (readonly, nonatomic, getter=getNextStep) GEOComposedRouteStep *nextStep;
@property (readonly, nonatomic) long long routeSegmentType;
@property (readonly, nonatomic) int transportType;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } pointRange;
@property (readonly, nonatomic) unsigned int startPointIndex;
@property (readonly, nonatomic) unsigned int endPointIndex;
@property (readonly, nonatomic) unsigned int pointCount;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } maneuverPointRange;
@property (readonly, nonatomic) unsigned int maneuverStartPointIndex;
@property (readonly, nonatomic) unsigned int maneuverEndPointIndex;
@property (readonly, nonatomic) NSString *maneuverRoadOrExitName;
@property (readonly, nonatomic) NSString *maneuverRoadName;
@property (readonly, nonatomic) unsigned long long stepIndex;
@property (readonly, nonatomic) unsigned long long pathIndex;
@property (readonly, nonatomic) BOOL isUncertainArrival;
@property (readonly, nonatomic) BOOL isArrivalStep;
@property (readonly, nonatomic) struct { double x0; double x1; double x2; } startGeoCoordinate;
@property (readonly, nonatomic) struct { double x0; double x1; double x2; } endGeoCoordinate;
@property (readonly, nonatomic) GEOStep *geoStep;
@property (readonly, nonatomic) int drivingSide;
@property (readonly, nonatomic) int maneuverType;
@property (readonly, nonatomic) GEOJunction *junction;
@property (readonly, nonatomic) id<GEOTransitArtworkDataSource> artworkOverride;
@property (readonly, nonatomic) BOOL hasDuration;
@property (readonly, nonatomic) unsigned int duration;
@property (readonly, nonatomic) unsigned int stepID;
@property (readonly, nonatomic) double distance;
@property (readonly, nonatomic) GEOComposedTransitTripRouteStep *nextBoardingStep;
@property (readonly, nonatomic) GEOComposedTransitTripRouteStep *previousBoardingStep;
@property (readonly, nonatomic) GEOComposedTransitTripRouteStep *nextAlightingStep;
@property (readonly, nonatomic) GEOComposedTransitTripRouteStep *previousAlightingStep;
@property (readonly, nonatomic) GEOComposedTransitTripRouteStep *closestLogicalBoardOrAlightStep;
@property (readonly, nonatomic) GEOPBTransitStop *startingStop;
@property (readonly, nonatomic) GEOPBTransitStop *endingStop;
@property (readonly, nonatomic) unsigned int startTime;
@property (readonly, nonatomic) GEOPBTransitStop *previousStop;
@property (readonly, nonatomic) GEOPBTransitStop *nextStop;
@property (readonly, nonatomic) GEOTransitStep *transitStep;
@property (readonly, nonatomic) GEOInstructionSet *instructions;
@property (readonly, nonatomic) NSArray *steppingArtwork;
@property (readonly, nonatomic) NSArray *routeDetailsPrimaryArtwork;
@property (readonly, nonatomic) id<GEOTransitArtworkDataSource> routeDetailsSecondaryArtwork;
@property (readonly, nonatomic) GEOComposedRouteEVStepInfo *evInfo;

- (id)initWithComposedRoute:(id)a0 geoRouteLeg:(id)a1 geoStep:(id)a2 routeSegmentType:(long long)a3 stepIndex:(unsigned long long)a4 pointRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a5 maneuverPointRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a6;
- (void).cxx_destruct;
- (BOOL)_belongsToTransferGroup;
- (int)maneuver;
- (id)initWithCoder:(id)a0;
- (BOOL)_MapsCarPlay_isEqual:(id)a0;
- (id)description;
- (BOOL)shouldPreloadWithHighPriority;
- (id)firstNameOrBranch;
- (id)initWithComposedRoute:(id)a0 routeSegmentType:(long long)a1 stepIndex:(unsigned long long)a2 pointRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (void)encodeWithCoder:(id)a0;

@end
