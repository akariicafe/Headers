@interface VKVectorOverlayPolygon : NSObject {
    struct shared_ptr<geo::Polygon2<double> > { struct Polygon2<double> *__ptr_; struct __shared_weak_count *__cntrl_; } _geometry;
    struct unique_ptr<geo::Cache<unsigned char, std::__1::shared_ptr<geo::Polygon2<double> >, std::__1::hash<unsigned char>, LRUPolicy>, std::__1::default_delete<geo::Cache<unsigned char, std::__1::shared_ptr<geo::Polygon2<double> >, std::__1::hash<unsigned char>, LRUPolicy> > > { struct __compressed_pair<geo::Cache<unsigned char, std::__1::shared_ptr<geo::Polygon2<double> >, std::__1::hash<unsigned char>, LRUPolicy> *, std::__1::default_delete<geo::Cache<unsigned char, std::__1::shared_ptr<geo::Polygon2<double> >, std::__1::hash<unsigned char>, LRUPolicy> > > { struct Cache<unsigned char, std::__1::shared_ptr<geo::Polygon2<double> >, std::__1::hash<unsigned char>, LRUPolicy> *__value_; } __ptr_; } _simplifiedGeometryCache;
    struct unfair_lock { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock; } _simplifiedGeometryCacheLock;
}

@property (readonly, nonatomic) struct Range<signed char> { char _min; char _max; } worldIndexes;

- (void).cxx_destruct;
- (id).cxx_construct;
- (struct shared_ptr<geo::Polygon2<double> > { struct Polygon2<double> *x0; struct __shared_weak_count *x1; })simplifiedGeometryAtZoomLevel:(unsigned char)a0;
- (id)initWithMapPoints:(const struct { double x0; double x1; } *)a0 count:(unsigned long long)a1;

@end
