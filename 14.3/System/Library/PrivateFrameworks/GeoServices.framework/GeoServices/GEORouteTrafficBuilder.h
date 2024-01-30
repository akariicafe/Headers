@class NSMutableData;

@interface GEORouteTrafficBuilder : NSObject {
    NSMutableData *_trafficColors;
    NSMutableData *_trafficOffsets;
    unsigned int _trafficDistance;
}

- (id)init;
- (void).cxx_destruct;
- (void)buildTrafficForRoute:(id)a0;
- (void)buildTrafficForRoute:(id)a0 etaRoute:(id)a1;
- (id)trafficOffsets;
- (id)trafficColors;
- (void)_buildTrafficForRoute:(id)a0 toDistance:(unsigned int)a1;
- (void)_buildTrafficForRoute:(id)a0 etaRoute:(id)a1;
- (void)_buildTrafficForRouteWithGeoRoute:(id)a0 toDistance:(unsigned int)a1;
- (void)_buildTrafficForOldRoute:(id)a0 etaRoute:(id)a1;
- (void)addTrafficFromETARoute:(id)a0;
- (void)addTrafficFromRoute:(id)a0 from:(unsigned int)a1 to:(unsigned int)a2;
- (void)_removeDuplicateTraffic;
- (void)addTrafficFromRoute:(id)a0 withStepRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)copyTrafficToRoute:(id)a0;

@end
