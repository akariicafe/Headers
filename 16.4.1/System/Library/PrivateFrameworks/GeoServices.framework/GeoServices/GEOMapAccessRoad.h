@class NSString;

@interface GEOMapAccessRoad : GEOMapAccessLine <GEOMapRoad> {
    struct shared_ptr<geo::MapEdgeRoad> { struct MapEdgeRoad *__ptr_; struct __shared_weak_count *__cntrl_; } _roadEdge;
    unsigned long long _roadID;
}

@property (readonly, nonatomic) int roadClass;
@property (readonly, nonatomic) int formOfWay;
@property (readonly, nonatomic) int travelDirection;
@property (readonly, nonatomic) double roadWidth;
@property (readonly, nonatomic) unsigned long long speedLimit;
@property (readonly, nonatomic) BOOL speedLimitIsMPH;
@property (readonly, nonatomic) unsigned long long roadID;
@property (readonly, nonatomic) BOOL isTunnel;
@property (readonly, nonatomic) BOOL isBridge;
@property (readonly, nonatomic) BOOL isRail;
@property (readonly, nonatomic) int rampType;
@property (readonly, nonatomic) NSString *internalRoadName;
@property (readonly, nonatomic) unsigned long long coordinateCount;
@property (readonly, nonatomic) struct { double x0; double x1; } *coordinates;
@property (readonly, nonatomic) double length;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)estimatedWidthForRoad:(id)a0;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)findRoadsFrom:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (id)findRoadsFromNextIntersection:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (id)findRoadsFromPreviousIntersection:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (id)findRoadsToNextIntersection:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (id)findRoadsToPreviousIntersection:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (id)initWithMap:(id)a0 roadEdge:(struct shared_ptr<geo::MapEdgeRoad> { struct MapEdgeRoad *x0; struct __shared_weak_count *x1; })a1;
- (void)roadEdgesWithHandler:(id /* block */)a0;
- (void)roadFeaturesWithHandler:(id /* block */)a0;
- (id)tileKeys;

@end
