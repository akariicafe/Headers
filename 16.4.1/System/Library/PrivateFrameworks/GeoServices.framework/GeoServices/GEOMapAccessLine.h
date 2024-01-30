@class NSString, GEOMapAccess;

@interface GEOMapAccessLine : NSObject <GEOMapLine> {
    GEOMapAccess *_map;
    struct shared_ptr<geo::MapEdge> { struct MapEdge *__ptr_; struct __shared_weak_count *__cntrl_; } _edge;
    struct vector<GEOLocationCoordinate2D, std::allocator<GEOLocationCoordinate2D>> { struct *__begin_; struct *__end_; struct __compressed_pair<GEOLocationCoordinate2D *, std::allocator<GEOLocationCoordinate2D>> { struct *__value_; } __end_cap_; } _coordinates;
}

@property (readonly, nonatomic) unsigned long long coordinateCount;
@property (readonly, nonatomic) struct { double x0; double x1; } *coordinates;
@property (readonly, nonatomic) double length;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
