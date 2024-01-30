@class TSCH3DChartElementProperties;

@interface TSCH3DChartMixinElementProperties : TSCH3DChartElementProperties {
    TSCH3DChartElementProperties *mOriginal;
}

+ (id)propertiesWithProperties:(id)a0;

- (id)initWithProperties:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)labels;
- (id)chartTransform;
- (BOOL)applyElementTransform:(struct ObjectTransforms { struct deque<TSCH3D::Transform, std::__1::allocator<TSCH3D::Transform> > { struct __split_buffer<TSCH3D::Transform *, std::__1::allocator<TSCH3D::Transform *> > { struct Transform **x0; struct Transform **x1; struct Transform **x2; struct __compressed_pair<TSCH3D::Transform **, std::__1::allocator<TSCH3D::Transform *> > { struct Transform **x0; } x3; } x0; unsigned long long x1; struct __compressed_pair<unsigned long, std::__1::allocator<TSCH3D::Transform> > { unsigned long long x0; } x2; } x0; struct deque<TSCH3D::Transform, std::__1::allocator<TSCH3D::Transform> > { struct __split_buffer<TSCH3D::Transform *, std::__1::allocator<TSCH3D::Transform *> > { struct Transform **x0; struct Transform **x1; struct Transform **x2; struct __compressed_pair<TSCH3D::Transform **, std::__1::allocator<TSCH3D::Transform *> > { struct Transform **x0; } x3; } x0; unsigned long long x1; struct __compressed_pair<unsigned long, std::__1::allocator<TSCH3D::Transform> > { unsigned long long x0; } x2; } x1; } *)a0 series:(id)a1 index:(struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; })a2 propertyAccessor:(id)a3;
- (id)elementsTransform;
- (void)applyChartElementsTransform:(struct ObjectTransforms { struct deque<TSCH3D::Transform, std::__1::allocator<TSCH3D::Transform> > { struct __split_buffer<TSCH3D::Transform *, std::__1::allocator<TSCH3D::Transform *> > { struct Transform **x0; struct Transform **x1; struct Transform **x2; struct __compressed_pair<TSCH3D::Transform **, std::__1::allocator<TSCH3D::Transform *> > { struct Transform **x0; } x3; } x0; unsigned long long x1; struct __compressed_pair<unsigned long, std::__1::allocator<TSCH3D::Transform> > { unsigned long long x0; } x2; } x0; struct deque<TSCH3D::Transform, std::__1::allocator<TSCH3D::Transform> > { struct __split_buffer<TSCH3D::Transform *, std::__1::allocator<TSCH3D::Transform *> > { struct Transform **x0; struct Transform **x1; struct Transform **x2; struct __compressed_pair<TSCH3D::Transform **, std::__1::allocator<TSCH3D::Transform *> > { struct Transform **x0; } x3; } x0; unsigned long long x1; struct __compressed_pair<unsigned long, std::__1::allocator<TSCH3D::Transform> > { unsigned long long x0; } x2; } x1; } *)a0;
- (float)elementTransformDepthFromPropertyAccessor:(id)a0;
- (id)renderingLightingModelForSeries:(id)a0;
- (id)texcoordsForSeries:(id)a0 index:(const struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; } *)a1;
- (id)geometryForSeries:(id)a0 index:(const struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; } *)a1;
- (id)boundsGeometryForSeries:(id)a0 index:(const struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; } *)a1;
- (id)normalsForSeries:(id)a0 index:(const struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; } *)a1;
- (id)getPropertiesOfType:(Class)a0;

@end
