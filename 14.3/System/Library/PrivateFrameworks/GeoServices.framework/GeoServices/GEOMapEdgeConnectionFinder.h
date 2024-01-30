@class GEOMapAccess, GEOVectorTile, NSMutableArray, GEOMapTileFinder;

@interface GEOMapEdgeConnectionFinder : GEOMapRequest {
    GEOMapAccess *_map;
    GEOMapTileFinder *_tileFinder;
    NSMutableArray *_builders;
    GEOVectorTile *_tile;
    struct { unsigned int x0; unsigned int x1; struct *x2; } *_junction;
    struct { double latitude; double longitude; } _coordinate;
}

- (void)cancel;
- (void).cxx_destruct;
- (void)findConnectionsIn:(id /* block */)a0;
- (id)initWithMap:(id)a0 tile:(id)a1 junction:(struct { unsigned int x0; unsigned int x1; struct *x2; } *)a2 coordinate:(struct { double x0; double x1; })a3;
- (void)findConnectionsOut:(id /* block */)a0;
- (void)_findConnections:(id /* block */)a0 incoming:(BOOL)a1;

@end
