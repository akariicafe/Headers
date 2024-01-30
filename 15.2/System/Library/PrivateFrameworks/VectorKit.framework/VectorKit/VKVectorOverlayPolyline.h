@interface VKVectorOverlayPolyline : NSObject {
    struct vector<geo::Mercator2<double>, std::allocator<geo::Mercator2<double>>> { void *__begin_; void *__end_; struct __compressed_pair<geo::Mercator2<double> *, std::allocator<geo::Mercator2<double>>> { void *__value_; } __end_cap_; } _points;
    struct unique_ptr<geo::Cache<unsigned char, std::shared_ptr<std::vector<geo::Mercator2<double>>>, std::hash<unsigned char>, LRUPolicy>, std::default_delete<geo::Cache<unsigned char, std::shared_ptr<std::vector<geo::Mercator2<double>>>, std::hash<unsigned char>, LRUPolicy>>> { struct __compressed_pair<geo::Cache<unsigned char, std::shared_ptr<std::vector<geo::Mercator2<double>>>, std::hash<unsigned char>, LRUPolicy> *, std::default_delete<geo::Cache<unsigned char, std::shared_ptr<std::vector<geo::Mercator2<double>>>, std::hash<unsigned char>, LRUPolicy>>> { void *__value_; } __ptr_; } _simplifiedGeometryCache;
    struct unfair_lock { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock; } _simplifiedGeometryCacheLock;
}

@property (readonly, nonatomic) struct Range<signed char> { char _min; char _max; } worldIndexes;

- (void).cxx_destruct;
- (id)initWithMapPoints:(const struct { double x0; double x1; } *)a0 count:(unsigned long long)a1;
- (id).cxx_construct;
- (struct shared_ptr<std::vector<geo::Mercator2<double>>> { void *x0; struct __shared_weak_count *x1; })simplifiedGeometryAtZoomLevel:(unsigned char)a0;

@end
