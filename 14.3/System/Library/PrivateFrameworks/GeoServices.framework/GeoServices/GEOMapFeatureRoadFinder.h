@class GEOTileLoader;

@interface GEOMapFeatureRoadFinder : GEOMapFeatureAccessFinder {
    GEOTileLoader *_tileLoader;
}

@property (nonatomic) BOOL flipNegativeTravelDirectionRoads;
@property (nonatomic) BOOL visitDoubleTravelDirectionRoadsTwice;

- (void).cxx_destruct;
- (id)findRoadsNear:(struct { double x0; double x1; })a0 radius:(double)a1 handler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (id)initWithTileLoader:(id)a0;

@end
