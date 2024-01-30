@protocol VKMercatorTerrainHeightProvider;

@interface VKMercatorTerrainHeightCache : NSObject {
    struct map<md::Anchor *, float, std::__1::less<md::Anchor *>, std::__1::allocator<std::__1::pair<md::Anchor *const, float> > > { struct __tree<std::__1::__value_type<md::Anchor *, float>, std::__1::__map_value_compare<md::Anchor *, std::__1::__value_type<md::Anchor *, float>, std::__1::less<md::Anchor *>, true>, std::__1::allocator<std::__1::__value_type<md::Anchor *, float> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *__begin_node_; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<md::Anchor *, float>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<md::Anchor *, std::__1::__value_type<md::Anchor *, float>, std::__1::less<md::Anchor *>, true> > { unsigned long long __value_; } __pair3_; } __tree_; } _anchorToHeight;
}

@property (nonatomic) id<VKMercatorTerrainHeightProvider> heightProvider;

- (void).cxx_destruct;
- (double)heightForAnchor:(struct Anchor { void /* function */ **x0; struct AnchorManager *x1; struct Mercator3<double> { double x0[3]; } x2; struct Coordinate2D<Degrees, double> { struct Unit<DegreeUnitDescription, double> { double x0; } x0; struct Unit<DegreeUnitDescription, double> { double x0; } x1; } x3; id x4; } *)a0;
- (void)removeCachedValueForAnchor:(struct Anchor { void /* function */ **x0; struct AnchorManager *x1; struct Mercator3<double> { double x0[3]; } x2; struct Coordinate2D<Degrees, double> { struct Unit<DegreeUnitDescription, double> { double x0; } x0; struct Unit<DegreeUnitDescription, double> { double x0; } x1; } x3; id x4; } *)a0;
- (void)invalidateRect:(const struct Box<double, 2> { struct Matrix<double, 2, 1> { double x0[2]; } x0; struct Matrix<double, 2, 1> { double x0[2]; } x1; } *)a0;
- (id).cxx_construct;

@end
