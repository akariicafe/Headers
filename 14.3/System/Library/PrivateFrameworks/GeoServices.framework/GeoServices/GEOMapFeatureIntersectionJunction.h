@interface GEOMapFeatureIntersectionJunction : GEOMapFeatureJunction {
    struct { unsigned int x0; unsigned int x1; struct *x2; } *_connectivityJunction;
}

- (id)initWithConnectivityJunction:(struct { unsigned int x0; unsigned int x1; struct *x2; } *)a0 tile:(id)a1;
- (struct { unsigned int x0; unsigned int x1; struct *x2; } *)connectivityJunction;

@end
