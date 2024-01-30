@class GEOMapTileFinder, NSMutableSet, GEOMapAccess;

@interface GEOMapEdgeFinder : GEOMapRequest {
    GEOMapTileFinder *_tileFinder;
    struct { double x; double y; } _centerPoint;
    double _mapRadius;
    NSMutableSet *_edgeBuilders;
}

@property (copy, nonatomic) id /* block */ edgeHandler;
@property (readonly, nonatomic) GEOMapAccess *map;

- (void)cancel;
- (void).cxx_destruct;
- (id)initWithMap:(id)a0 center:(struct { double x0; double x1; })a1 radius:(double)a2;
- (void)_buildersInTile:(id)a0 localPoint:(const struct Matrix<float, 2, 1> { float x0[2]; } *)a1 localRadiusSqr:(float)a2 localSearch:(const struct Box<float, 2> { struct Matrix<float, 2, 1> { float x0[2]; } x0; struct Matrix<float, 2, 1> { float x0[2]; } x1; } *)a3 handler:(id /* block */)a4;
- (BOOL)_checkEdgeForDuplicates:(const struct shared_ptr<geo::MapEdge> { struct MapEdge *x0; struct __shared_weak_count *x1; } *)a0;
- (void)findEdges:(id /* block */)a0;

@end
