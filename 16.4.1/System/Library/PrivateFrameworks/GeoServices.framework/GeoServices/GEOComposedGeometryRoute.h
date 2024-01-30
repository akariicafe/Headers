@interface GEOComposedGeometryRoute : GEOComposedRoute

- (id)initSingleLegRouteWithCoordinates:(struct { double x0; double x1; double x2; } *)a0 count:(unsigned long long)a1;
- (id)initWithRoutingPathData:(id)a0;
- (id)initWithRoutingPathData:(id)a0 trafficColors:(id)a1 destination:(id)a2;
- (id)initWithRoutingPathData:(id)a0 trafficColors:(id)a1 destinations:(id)a2;

@end
