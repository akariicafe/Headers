@interface GEOMapFeatureIntersectionJunction : GEOMapFeatureJunction {
    struct GeoCodecsConnectivityJunction { unsigned int x0; unsigned int x1; struct GeoCodecsPointFeature *x2; } *_connectivityJunction;
}

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithConnectivityJunction:(struct GeoCodecsConnectivityJunction { unsigned int x0; unsigned int x1; struct GeoCodecsPointFeature *x2; } *)a0 tile:(id)a1;
- (unsigned long long)junctionIndex;
- (struct GeoCodecsConnectivityJunction { unsigned int x0; unsigned int x1; struct GeoCodecsPointFeature *x2; } *)connectivityJunction;

@end
