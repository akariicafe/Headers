@class GEOComposedRouteEVStepInfo;

@interface GEOComposedDrivingRouteStep : GEOComposedRouteStep {
    GEOComposedRouteEVStepInfo *_evInfo;
}

+ (BOOL)supportsSecureCoding;

- (id)evInfo;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithComposedRoute:(id)a0 geoRouteLeg:(id)a1 geoStep:(id)a2 stepIndex:(unsigned long long)a3 pointRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4 maneuverPointRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a5;
- (void)encodeWithCoder:(id)a0;

@end
