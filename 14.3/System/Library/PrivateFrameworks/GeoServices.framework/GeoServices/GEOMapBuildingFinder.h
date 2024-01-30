@class GEOMapTileFinder;

@interface GEOMapBuildingFinder : GEOMapRequest {
    GEOMapTileFinder *_tileFinder;
    struct { double latitude; double longitude; } _centerCoordinate;
    double _radius;
}

- (void)cancel;
- (id)initWithMap:(id)a0 centerCoordinate:(struct { double x0; double x1; })a1 radius:(double)a2;
- (void)findBuildingsWithHandler:(id /* block */)a0;
- (void).cxx_destruct;

@end
