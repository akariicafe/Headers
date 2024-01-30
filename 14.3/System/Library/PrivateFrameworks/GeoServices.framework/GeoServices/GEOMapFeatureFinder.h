@class GEOMapTileFinder, GEOMapAccess;

@interface GEOMapFeatureFinder : GEOMapRequest {
    struct { double latitude; double longitude; } _coordinate;
    GEOMapTileFinder *_tileFinder;
}

@property (copy, nonatomic) id /* block */ roadHandler;
@property (copy, nonatomic) id /* block */ pointHandler;
@property (copy, nonatomic) id /* block */ polygonHandler;
@property (readonly, nonatomic) GEOMapAccess *map;
@property (nonatomic) BOOL ignoreUnnamedFeatures;

- (void)cancel;
- (void).cxx_destruct;
- (id)initWithMap:(id)a0 center:(struct { double x0; double x1; })a1;
- (void)_pickRoadInTile:(id)a0 tileRect:(const struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; } *)a1 localPoint:(const struct Matrix<float, 2, 1> { float x0[2]; } *)a2;
- (void)findFeatures:(id /* block */)a0 pointHandler:(id /* block */)a1 polygonHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;

@end
