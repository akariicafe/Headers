@class GEOTileLoader, GEOMapFeatureIntersectedRoadFinder;

@interface GEOMapFeatureRoadFinder : GEOMapFeatureAccessFinder {
    GEOTileLoader *_tileLoader;
    GEOMapFeatureIntersectedRoadFinder *_intersectedRoadFinder;
}

@property (nonatomic) BOOL flipNegativeTravelDirectionRoads;
@property (nonatomic) BOOL visitDoubleTravelDirectionRoadsTwice;

- (void)_findConnectedSegmentsFromRoad:(id)a0 muid:(unsigned long long)a1 handler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (void)_recursivelyFindRoadSegmentsWithMuid:(unsigned long long)a0 segments:(id)a1 directionality:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (id)findRoadsNear:(struct { double x0; double x1; })a0 radius:(double)a1 handler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (id)initWithTileLoader:(id)a0;
- (void).cxx_destruct;
- (id)findRoadWithID:(unsigned long long)a0 handler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (id)findRoadWithMuid:(unsigned long long)a0 nearCoordinate:(struct { double x0; double x1; })a1 handler:(id /* block */)a2 completionHandler:(id /* block */)a3;

@end
