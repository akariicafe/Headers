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
- (void)_buildersInTile:(id)a0 localPoint:(const void *)a1 localRadiusSqr:(float)a2 localSearch:(const void *)a3 handler:(id /* block */)a4;
- (BOOL)_checkEdgeForDuplicates:(const void *)a0;
- (void)findEdges:(id /* block */)a0;
- (id)initWithMap:(id)a0 center:(struct { double x0; double x1; })a1 radius:(double)a2;

@end
