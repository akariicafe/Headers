@class GEOComposedRoute, NSArray, GEOPBTransitStop;

@interface GEOComposedRouteSegment : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak, nonatomic) GEOComposedRoute *composedRoute;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) int transportType;
@property (readonly, nonatomic) double expectedTime;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } pointRange;
@property (readonly, nonatomic) unsigned int startPointIndex;
@property (readonly, nonatomic) struct { unsigned int x0; float x1; } startRouteCoordinate;
@property (readonly, nonatomic) unsigned int endPointIndex;
@property (readonly, nonatomic) struct { unsigned int x0; float x1; } endRouteCoordinate;
@property (readonly, nonatomic) unsigned long long pointCount;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } stepRange;
@property (readonly, nonatomic) unsigned long long startStepIndex;
@property (readonly, nonatomic) unsigned long long endStepIndex;
@property (readonly, nonatomic) unsigned long long stepCount;
@property (readonly, nonatomic) NSArray *steps;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } transitStepRange;
@property (readonly, nonatomic) unsigned long long numberOfTransitStops;
@property (readonly, nonatomic) GEOPBTransitStop *startingTransitStop;
@property (readonly, nonatomic) GEOPBTransitStop *endingTransitStop;

- (void)encodeWithCoder:(id)a0;
- (BOOL)contains:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithComposedRoute:(id)a0 routeSegmentType:(long long)a1 stepRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 pointRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (double)remainingDistanceAlongSegmentFromStepIndex:(unsigned long long)a0 currentStepRemainingDistance:(double)a1;
- (double)remainingTimeAlongSegmentFromStepIndex:(unsigned long long)a0 currentStepRemainingDistance:(double)a1;

@end
