@class GEOComposedRoute, NSArray, NSString, GEOPBTransitStop;

@interface GEOComposedRouteSegment : NSObject <NSSecureCoding, GEOComposedRoutePortion>

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak, nonatomic) GEOComposedRoute *composedRoute;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) int transportType;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } transitStepRange;
@property (readonly, nonatomic) unsigned long long numberOfTransitStops;
@property (readonly, nonatomic) GEOPBTransitStop *startingTransitStop;
@property (readonly, nonatomic) GEOPBTransitStop *endingTransitStop;
@property (readonly, nonatomic) NSArray *composedGuidanceEvents;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } pointRange;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } stepRange;
@property (readonly, nonatomic) unsigned int startPointIndex;
@property (readonly, nonatomic) unsigned int endPointIndex;
@property (readonly, nonatomic) unsigned int pointCount;
@property (readonly, nonatomic) unsigned long long startStepIndex;
@property (readonly, nonatomic) unsigned long long endStepIndex;
@property (readonly, nonatomic) unsigned long long stepCount;
@property (readonly, nonatomic) NSArray *steps;
@property (readonly, nonatomic) unsigned int distance;
@property (readonly, nonatomic) double expectedTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (double)remainingTimeAlongSegmentFromStepIndex:(unsigned long long)a0 currentStepRemainingDistance:(double)a1;
- (double)remainingDistanceAlongSegmentFromStepIndex:(unsigned long long)a0 currentStepRemainingDistance:(double)a1;
- (id)initWithCoder:(id)a0;
- (BOOL)_MapsCarPlay_isEqual:(id)a0;
- (id)initWithComposedRoute:(id)a0 routeSegmentType:(long long)a1 stepRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 pointRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (BOOL)contains:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
