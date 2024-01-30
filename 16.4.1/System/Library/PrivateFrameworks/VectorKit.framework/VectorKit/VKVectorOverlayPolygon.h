@interface VKVectorOverlayPolygon : NSObject {
    struct shared_ptr<geo::Polygon2<double>> { void *__ptr_; struct __shared_weak_count *__cntrl_; } _geometry;
    struct unique_ptr<geo::Cache<unsigned char, std::shared_ptr<geo::Polygon2<double>>, std::hash<unsigned char>, geo::LRUPolicy>, std::default_delete<geo::Cache<unsigned char, std::shared_ptr<geo::Polygon2<double>>, std::hash<unsigned char>, geo::LRUPolicy>>> { struct __compressed_pair<geo::Cache<unsigned char, std::shared_ptr<geo::Polygon2<double>>, std::hash<unsigned char>, geo::LRUPolicy> *, std::default_delete<geo::Cache<unsigned char, std::shared_ptr<geo::Polygon2<double>>, std::hash<unsigned char>, geo::LRUPolicy>>> { void *__value_; } __ptr_; } _simplifiedGeometryCache;
    struct unfair_lock { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock; } _simplifiedGeometryCacheLock;
}

@property (readonly, nonatomic) struct Range<signed char> { char _min; char _max; } worldIndexes;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithMapPoints:(const struct { double x0; double x1; } *)a0 count:(unsigned long long)a1;
- (struct shared_ptr<geo::Polygon2<double>> { void *x0; struct __shared_weak_count *x1; })simplifiedGeometryAtZoomLevel:(unsigned char)a0;

@end
