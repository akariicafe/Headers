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

+ (double)estimatedWidthForRoad:(struct { struct { id x0; char *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned int x6; unsigned long long x7; BOOL x8; unsigned long long x9; float x10; unsigned long long x11; id x12; int x13; } x0; unsigned long long x1; unsigned long long x2; int x3; int x4; int x5; unsigned long long x6; unsigned long long x7; unsigned int x8; unsigned int x9; union { struct { struct { float x0; float x1; } x0; struct { float x0; float x1; } x1; } x0; struct { float x0; float x1; float x2; float x3; } x1; } x10; struct *x11; struct { unsigned short x0[2]; unsigned short x1[2]; } x12; unsigned char x13; BOOL x14; unsigned char x15; BOOL x16; BOOL x17; unsigned char x18; BOOL x19; unsigned short x20; struct _NSRange { unsigned long long x0; unsigned long long x1; } x21; BOOL x22; unsigned int x23; } *)a0;

- (id)initWithMap:(id)a0 roadEdge:(struct shared_ptr<geo::MapEdgeRoad> { struct MapEdgeRoad *x0; struct __shared_weak_count *x1; })a1;
- (void)roadFeaturesWithHandler:(id /* block */)a0;
- (void)roadEdgesWithHandler:(id /* block */)a0;
- (id)findRoadsFrom:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (id)findRoadsFromPreviousIntersection:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (id)findRoadsToPreviousIntersection:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (id)findRoadsFromNextIntersection:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (id)findRoadsToNextIntersection:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)tileKeys;
- (id).cxx_construct;

@end
