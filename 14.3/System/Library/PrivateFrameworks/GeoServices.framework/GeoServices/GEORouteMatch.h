@class GEOComposedRouteStep, GEOComposedTransitStationRouteStep, NSArray, GEOComposedRouteSegment, GEOComposedRoute, GEOComposedRouteLeg, NSDate, GEONavigationMatchInfo, GEOComposedTransitTripRouteStep;

@interface GEORouteMatch : NSObject

@property (retain, nonatomic) GEOComposedRoute *route;
@property (nonatomic) struct { double latitude; double longitude; } locationCoordinate;
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
@property (nonatomic) struct { struct { id x0; char *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned int x6; unsigned long long x7; BOOL x8; unsigned long long x9; float x10; unsigned long long x11; id x12; int x13; } x0; unsigned long long x1; unsigned long long x2; int x3; int x4; int x5; unsigned long long x6; unsigned long long x7; unsigned int x8; unsigned int x9; union { struct { struct { float x0; float x1; } x0; struct { float x0; float x1; } x1; } x0; struct { float x0; float x1; float x2; float x3; } x1; } x10; struct *x11; struct { unsigned short x0[2]; unsigned short x1[2]; } x12; unsigned char x13; BOOL x14; unsigned char x15; BOOL x16; BOOL x17; unsigned char x18; BOOL x19; unsigned short x20; struct _NSRange { unsigned long long x0; unsigned long long x1; } x21; BOOL x22; unsigned int x23; } *road;
@property (readonly, nonatomic) double roadWidth;
@property (readonly, nonatomic) BOOL isOnParkingLotRoad;
@property (readonly, nonatomic) BOOL routeMatchedToEnd;
@property (retain, nonatomic) GEORouteMatch *projectedFrom;
@property (nonatomic) BOOL isTunnelProjection;
@property (nonatomic) BOOL isGoodMatch;
@property (nonatomic) unsigned long long consecutiveProgressionsOffRoute;
@property (nonatomic) double distanceTraveledOffRoute;
@property (nonatomic) double modifiedHorizontalAccuracy;
@property (nonatomic) double modifiedCourseAccuracy;
@property (retain, nonatomic) NSDate *timestamp;
@property (nonatomic) unsigned long long transitID;
@property (retain, nonatomic) GEONavigationMatchInfo *detailedMatchInfo;

- (BOOL)isEqualIgnoringScore:(id)a0;
- (BOOL)routeMatchBehind:(id)a0;
- (double)fractionOfCurrentStepTraveled;
- (void).cxx_destruct;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithRoute:(id)a0 routeCoordinate:(struct PolylineCoordinate { unsigned int x0; float x1; })a1 locationCoordinate:(struct { double x0; double x1; })a2 stepIndex:(unsigned long long)a3 matchedCourse:(double)a4 timestamp:(id)a5;
- (void)updateOffRouteProgress:(id)a0 minDistanceToGetOnRoute:(double)a1;
- (id)description;
- (id).cxx_construct;
- (BOOL)isEqual:(id)a0;
- (id)initWithComposedRoute:(id)a0 routeStatus:(id)a1;

@end
