@class NSObject;
@protocol GEOMapAccessRestrictions, OS_dispatch_queue;

@interface GEOMapAccess : GEOMapRequestManager {
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property (readonly, nonatomic) unsigned long long roadsZoomLevel;
@property (readonly, nonatomic) unsigned long long transitZoomLevel;
@property (readonly, nonatomic) unsigned long long buildingsZoomLevel;
@property (nonatomic) BOOL useMapMatchingTilesetForRoads;
@property (readonly, nonatomic) BOOL allowsNetworkTileLoad;
@property (weak, nonatomic) id<GEOMapAccessRestrictions> restrictions;
@property (copy, nonatomic) id /* block */ tileErrorHandler;
@property (nonatomic) unsigned int zoomLevel;
@property (readonly, nonatomic) unsigned int minZoomLevel;
@property (readonly, nonatomic) unsigned int maxZoomLevel;
@property (readonly, nonatomic) unsigned int maxTransitZoomLevel;

+ (id)map;
+ (id)realisticMap;
+ (BOOL)supportsTransitMapAccess;
+ (BOOL)supportsRealisticMap;
+ (BOOL)supportsTransitMap;
+ (BOOL)supportsBuildingMapAccess;
+ (BOOL)supportsRoadMapAccess;
+ (id)transitMap;

- (void)setCallbackQueue:(id)a0;
- (id)callbackQueue;
- (id)findTransitPointWithID:(unsigned long long)a0 near:(struct { double x0; double x1; })a1 pointHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (id)findRoadEdgesWithin:(double)a0 of:(struct { double x0; double x1; })a1 edgeHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (id)findTransitPointWithParentID:(unsigned long long)a0 near:(struct { double x0; double x1; })a1 type:(unsigned long long)a2 pointHandler:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (id)findTransitStationWithID:(unsigned long long)a0 near:(struct { double x0; double x1; })a1 stationHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (id)findTransitHallWithID:(unsigned long long)a0 near:(struct { double x0; double x1; })a1 hallHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (id)buildMapEdgeTransitFrom:(const struct TransitEdgePiece { id x0; unsigned long long x1; id x2; unsigned int x3; BOOL x4; } *)a0 edgeHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (BOOL)hasLoadedTransitTilesNearCoordinate:(struct { double x0; double x1; })a0 radius:(double)a1;
- (id)findRoadsWithin:(double)a0 of:(struct { double x0; double x1; })a1 handler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (id)findTransitEdgesWithin:(double)a0 of:(struct { double x0; double x1; })a1 edgeHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (id)_findTransitPointsWithin:(double)a0 of:(struct { double x0; double x1; })a1 type:(unsigned long long)a2 pointHandler:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (id)_findTransitPointWithID:(unsigned long long)a0 near:(struct { double x0; double x1; })a1 type:(unsigned long long)a2 pointHandler:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (id)_transitPointForTransitMapNode:(struct shared_ptr<geo::MapNodeTransit> { struct MapNodeTransit *x0; struct __shared_weak_count *x1; })a0;
- (BOOL)_hasLoadedTilesNearCoordinate:(struct { double x0; double x1; })a0 radius:(double)a1 zoomLevel:(unsigned long long)a2 tileStyle:(int)a3 tileSize:(int)a4 tileScale:(int)a5;
- (id)findClosestNamedFeaturesAtCoordinate:(struct { double x0; double x1; })a0 roadHandler:(id /* block */)a1 pointHandler:(id /* block */)a2 polygonHandler:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (id)findClosestRoadAtCoordinate:(struct { double x0; double x1; })a0 roadHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (id)findTransitLinksWithin:(double)a0 of:(struct { double x0; double x1; })a1 linkHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (id)findTransitPointsWithin:(double)a0 of:(struct { double x0; double x1; })a1 pointHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (id)findTransitNodesWithin:(double)a0 of:(struct { double x0; double x1; })a1 nodeHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (id)findTransitStationsWithin:(double)a0 of:(struct { double x0; double x1; })a1 stationHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (id)findTransitStopsWithin:(double)a0 of:(struct { double x0; double x1; })a1 stopHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (id)findTransitHallsWithin:(double)a0 of:(struct { double x0; double x1; })a1 hallHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (id)findTransitNodeWithID:(unsigned long long)a0 near:(struct { double x0; double x1; })a1 nodeHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (BOOL)hasLoadedRoadTilesNearCoordinate:(struct { double x0; double x1; })a0 radius:(double)a1;
- (id)findTransitStopWithID:(unsigned long long)a0 near:(struct { double x0; double x1; })a1 stopHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (id)findBuildingsWithin:(double)a0 of:(struct { double x0; double x1; })a1 buildingHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (void)preloadRoadTilesNearCoordinate:(struct { double x0; double x1; })a0 radius:(double)a1 completionHandler:(id /* block */)a2;
- (void)preloadTransitTilesNearCoordinate:(struct { double x0; double x1; })a0 radius:(double)a1 completionHandler:(id /* block */)a2;
- (void)preloadBuildingTilesNearCoordinate:(struct { double x0; double x1; })a0 radius:(double)a1 completionHandler:(id /* block */)a2;
- (BOOL)hasLoadedBuildingTilesNearCoordinate:(struct { double x0; double x1; })a0 radius:(double)a1;
- (id)findRoadTilesWithin:(double)a0 of:(struct { double x0; double x1; })a1 tileHander:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (id)init;

@end
