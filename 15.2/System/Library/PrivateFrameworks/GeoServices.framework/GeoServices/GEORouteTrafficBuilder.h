@class NSMutableArray;

@interface GEORouteTrafficBuilder : NSObject {
    NSMutableArray *_trafficColors;
    NSMutableArray *_trafficOffsets;
    double _trafficDistance;
}

- (id)trafficColors;
- (void)addTrafficFromRoute:(id)a0 withStepRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)copyTrafficToRoute:(id)a0;
- (void)buildTrafficForRoute:(id)a0;
- (void)buildTrafficForRoute:(id)a0 etaRoute:(id)a1;
- (id)trafficOffsets;
- (void)addTrafficFromETARoute:(id)a0;
- (void)_removeDuplicateTraffic;
- (void)_buildTrafficForRoute:(id)a0 toDistance:(double)a1;
- (void)_buildTrafficForRouteWithGeoRoute:(id)a0 toDistance:(double)a1;
- (void)_buildTrafficForRoute:(id)a0 etaRoute:(id)a1;
- (void)_buildTrafficForOldRoute:(id)a0 etaRoute:(id)a1;
- (void)addTrafficFromRoute:(id)a0 from:(unsigned int)a1 to:(unsigned int)a2;
- (void).cxx_destruct;
- (id)init;

@end
