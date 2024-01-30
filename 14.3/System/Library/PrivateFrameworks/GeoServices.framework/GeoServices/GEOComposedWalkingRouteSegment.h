@class GEOComposedWalkingRouteStep, GEOComposedTransitWalkingRouteStep;
@protocol GEOTransitRoutingIncidentMessage;

@interface GEOComposedWalkingRouteSegment : GEOComposedRouteSegment

@property (readonly, nonatomic) unsigned long long transitIncidentMessageStepIndex;
@property (readonly, nonatomic) id<GEOTransitRoutingIncidentMessage> transitSteppingIncidentMessage;
@property (readonly, nonatomic) id<GEOTransitRoutingIncidentMessage> transitRouteDetailsIncidentMessage;
@property (readonly, nonatomic) GEOComposedWalkingRouteStep *lastWalkingStep;
@property (readonly, nonatomic) GEOComposedTransitWalkingRouteStep *arrivalStep;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)initWithComposedRoute:(id)a0 stepRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 pointRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 transitIncidentMessageStepIndex:(unsigned long long)a3;
- (id)_transitIncidentMessageStep;
- (void)encodeWithCoder:(id)a0;

@end
