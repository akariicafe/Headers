@class GEOComposedRouteStep, GEOComposedTransitStationRouteStep, NSArray, GEOComposedRouteSegment, GEOComposedRoute, GEOComposedRouteLeg, GEOMapFeatureRoad, NSDate, GEOComposedTransitTripRouteStep, GEONavigationMatchInfo, GEOMatchedPathSegment;

@interface GEORouteMatch : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) GEOComposedRoute *route;
@property (nonatomic) struct { double latitude; double longitude; double altitude; } locationCoordinate3D;
@property (readonly, nonatomic) struct { double x0; double x1; } locationCoordinate;
@property (nonatomic) struct PolylineCoordinate { unsigned int index; float offset; } routeCoordinate;
@property (nonatomic) unsigned long long stepIndex;
@property (readonly, nonatomic) GEOComposedRouteStep *step;
@property (readonly, nonatomic) GEOComposedTransitTripRouteStep *transitTripStep;
@property (readonly, nonatomic) GEOComposedTransitStationRouteStep *transitStationStep;
@property (retain, nonatomic) NSArray *candidateSteps;
@property (readonly, nonatomic) unsigned long long segmentIndex;
@property (readonly, nonatomic) GEOComposedRouteSegment *segment;
@property (readonly, nonatomic) unsigned long long legIndex;
@property (readonly, nonatomic) GEOComposedRouteLeg *leg;
@property (nonatomic) double matchedCourse;
@property (nonatomic) double distanceFromRoute;
@property (retain, nonatomic) GEOMatchedPathSegment *pathSegment;
@property (readonly, nonatomic) GEOMapFeatureRoad *road;
@property (nonatomic) double roadWidth;
@property (readonly, nonatomic) BOOL isOnParkingLotRoad;
@property (readonly, nonatomic) BOOL routeMatchedToEnd;
@property (retain, nonatomic) GEORouteMatch *projectedFrom;
@property (nonatomic) BOOL isTunnelProjection;
@property (nonatomic) BOOL isGoodMatch;
@property (nonatomic) BOOL shouldProjectLocationAlongRoute;
@property (nonatomic) unsigned long long consecutiveProgressionsOffRoute;
@property (nonatomic) double distanceTraveledOffRoute;
@property (nonatomic) double modifiedHorizontalAccuracy;
@property (nonatomic) double modifiedCourseAccuracy;
@property (retain, nonatomic) NSDate *timestamp;
@property (nonatomic) unsigned long long transitID;
@property (retain, nonatomic) GEONavigationMatchInfo *detailedMatchInfo;

- (void)encodeWithCoder:(id)a0;
- (id).cxx_construct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithComposedRoute:(id)a0 routeStatus:(id)a1;
- (id)initWithRoute:(id)a0 routeCoordinate:(struct PolylineCoordinate { unsigned int x0; float x1; })a1 locationCoordinate:(struct { double x0; double x1; double x2; })a2 stepIndex:(unsigned long long)a3 matchedCourse:(double)a4 timestamp:(id)a5;
- (BOOL)isEqualIgnoringScore:(id)a0;
- (BOOL)routeMatchBehind:(id)a0;
- (void)updateOffRouteProgress:(id)a0 minDistanceToGetOnRoute:(double)a1;

@end
