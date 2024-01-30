@interface TSCH3DChartPieElementProperties : TSCH3DChartBasicElementProperties {
    struct vector<float, std::__1::allocator<float> > { float *__begin_; float *__end_; struct __compressed_pair<float *, std::__1::allocator<float> > { float *__value_; } __end_cap_; } mPercentOfTotal;
    struct vector<float, std::__1::allocator<float> > { float *__begin_; float *__end_; struct __compressed_pair<float *, std::__1::allocator<float> > { float *__value_; } __end_cap_; } mRotation;
    struct vector<float, std::__1::allocator<float> > { float *__begin_; float *__end_; struct __compressed_pair<float *, std::__1::allocator<float> > { float *__value_; } __end_cap_; } mExplode;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)reset;
- (id).cxx_construct;
- (void)updateLabels;
- (void)updateValues;
- (BOOL)applyElementTransform:(struct ObjectTransforms { struct deque<TSCH3D::Transform, std::__1::allocator<TSCH3D::Transform> > { struct __split_buffer<TSCH3D::Transform *, std::__1::allocator<TSCH3D::Transform *> > { struct Transform **x0; struct Transform **x1; struct Transform **x2; struct __compressed_pair<TSCH3D::Transform **, std::__1::allocator<TSCH3D::Transform *> > { struct Transform **x0; } x3; } x0; unsigned long long x1; struct __compressed_pair<unsigned long, std::__1::allocator<TSCH3D::Transform> > { unsigned long long x0; } x2; } x0; struct deque<TSCH3D::Transform, std::__1::allocator<TSCH3D::Transform> > { struct __split_buffer<TSCH3D::Transform *, std::__1::allocator<TSCH3D::Transform *> > { struct Transform **x0; struct Transform **x1; struct Transform **x2; struct __compressed_pair<TSCH3D::Transform **, std::__1::allocator<TSCH3D::Transform *> > { struct Transform **x0; } x3; } x0; unsigned long long x1; struct __compressed_pair<unsigned long, std::__1::allocator<TSCH3D::Transform> > { unsigned long long x0; } x2; } x1; } *)a0 series:(id)a1 index:(struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; })a2 propertyAccessor:(id)a3;
- (float)elementTransformDepthFromPropertyAccessor:(id)a0;
- (id)boundsGeometryForSeries:(id)a0 index:(const struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; } *)a1;
- (long long)flatIndex:(const struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; } *)a0;
- (float)explosionAtElementIndex:(const struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; } *)a0;
- (float)rotationAtElementIndex:(const struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; } *)a0;
- (float)explosionAtElementIndex:(const struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; } *)a0 propertyAccessor:(id)a1;
- (float)percentOfTotalAtElementIndex:(const struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; } *)a0;
- (void)setPercentOfTotal:(float)a0 atElementIndex:(const struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; } *)a1;
- (void)setRotation:(float)a0 atElementIndex:(const struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; } *)a1;
- (void)setExplosion:(float)a0 atElementIndex:(const struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; } *)a1;
- (BOOL)anyHasExplosion;

@end
