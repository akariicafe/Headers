@interface VKVectorOverlayPolyline : NSObject {
    struct vector<geo::Mercator2<double>, std::allocator<geo::Mercator2<double>>> { void *__begin_; void *__end_; struct __compressed_pair<geo::Mercator2<double> *, std::allocator<geo::Mercator2<double>>> { void *__value_; } __end_cap_; } _points;
    struct vector<double, std::allocator<double>> { double *__begin_; double *__end_; struct __compressed_pair<double *, std::allocator<double>> { double *__value_; } __end_cap_; } _elevations;
    struct unique_ptr<geo::Cache<unsigned char, PolylineWithElevation, std::hash<unsigned char>, geo::LRUPolicy>, std::default_delete<geo::Cache<unsigned char, PolylineWithElevation, std::hash<unsigned char>, geo::LRUPolicy>>> { struct __compressed_pair<geo::Cache<unsigned char, PolylineWithElevation, std::hash<unsigned char>, geo::LRUPolicy> *, std::default_delete<geo::Cache<unsigned char, PolylineWithElevation, std::hash<unsigned char>, geo::LRUPolicy>>> { void *__value_; } __ptr_; } _simplifiedGeometryCache;
    struct unfair_lock { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock; } _simplifiedGeometryCacheLock;
}

@property (readonly, nonatomic) struct Range<signed char> { char _min; char _max; } worldIndexes;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithMapPoints:(const struct { double x0; double x1; } *)a0 elevations:(const double *)a1 count:(unsigned long long)a2;
- (struct PolylineWithElevation { struct shared_ptr<std::vector<geo::Mercator2<double>>> { void *x0; struct __shared_weak_count *x1; } x0; struct shared_ptr<std::vector<double>> { void *x0; struct __shared_weak_count *x1; } x1; })simplifiedGeometryAtZoomLevel:(unsigned char)a0;

@end
