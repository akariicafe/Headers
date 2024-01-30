@class GEOTileLoader;

@interface GEOMapFeatureBuildingFinder : GEOMapFeatureAccessFinder {
    GEOTileLoader *_tileLoader;
}

- (id)initWithTileLoader:(id)a0;
- (void).cxx_destruct;
- (id)findBuildingsNear:(struct { double x0; double x1; })a0 radius:(double)a1 handler:(id /* block */)a2 completionHandler:(id /* block */)a3;

@end
