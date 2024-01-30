@class GEOMapTileFinder;

@interface GEOMapTransitGeometryFinder : GEOMapRequest {
    GEOMapTileFinder *_tileFinder;
    unsigned long long _transitID;
}

- (id)initWithMap:(id)a0 transitID:(unsigned long long)a1 coordinate:(struct { double x0; double x1; })a2;
- (void)findTransitGeometryWithHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)cancel;

@end
