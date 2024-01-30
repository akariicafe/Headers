@interface GEOMapFeatureTransitAccessPoint : NSObject {
    void *_feature;
    struct shared_ptr<geo::codec::VectorTile> { struct VectorTile *__ptr_; struct __shared_weak_count *__cntrl_; } _retainedTile;
}

@property (readonly, nonatomic) void *feature;
@property (readonly, nonatomic) struct { double latitude; double longitude; } coordinate;
@property (readonly, nonatomic) BOOL isEntrance;
@property (readonly, nonatomic) BOOL isExit;
@property (readonly, nonatomic) double radiusMeters;

- (id)initWithFeature:(void *)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id).cxx_construct;

@end
