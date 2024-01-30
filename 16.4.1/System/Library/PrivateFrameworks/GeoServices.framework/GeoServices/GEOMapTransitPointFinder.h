@class GEOMapTileFinder, GEOMapAccess;

@interface GEOMapTransitPointFinder : GEOMapRequest {
    GEOMapTileFinder *_tileFinder;
    struct { double x; double y; } _centerPoint;
    double _mapRadius;
    unsigned long long _pointID;
    unsigned long long _parentID;
}

@property (readonly, nonatomic) GEOMapAccess *map;

- (void)cancel;
- (void).cxx_destruct;
- (void)_validatePoint:(void *)a0 rect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a1 localSearch:(struct Box<float, 2> { struct Matrix<float, 2, 1> { float x0[2]; } x0; struct Matrix<float, 2, 1> { float x0[2]; } x1; })a2 validPointHandler:(id /* block */)a3;
- (void)findTransitPointsOfType:(unsigned long long)a0 nodeHandler:(id /* block */)a1 accessPointHandler:(id /* block */)a2;
- (id)initWithMap:(id)a0 approxLocation:(struct { double x0; double x1; })a1 parentID:(unsigned long long)a2;
- (id)initWithMap:(id)a0 approxLocation:(struct { double x0; double x1; })a1 pointID:(unsigned long long)a2;
- (id)initWithMap:(id)a0 center:(struct { double x0; double x1; })a1 radius:(double)a2;

@end
