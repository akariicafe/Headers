@interface TSCH3DChartContinuousElementProperties : TSCH3DChartBasicElementProperties {
    unsigned long long mMaxLimitingSeries;
}

@property (readonly, nonatomic) float p_sageInterSetDepthGapProperty;
@property (readonly, nonatomic) long long seriesCount;
@property (readonly, nonatomic) float depthLimitFactor;
@property (readonly, nonatomic) float shadowCameraDepthLimitAdjustmentFactor;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)reset;
- (void)updateLabels;
- (void)resetWithEnumerator:(id)a0 layoutSettings:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; long long x7; unsigned long long x8; })a1;
- (float)p_depthLimitedChartInitialDepthOffset;
- (float)p_interSetDepthGapProperty;
- (struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; })seriesSize;
- (float)chartMinZForScene:(id)a0;
- (float)depthForScene:(id)a0;
- (BOOL)applyElementTransform:(struct ObjectTransforms { struct deque<TSCH3D::Transform, std::__1::allocator<TSCH3D::Transform> > { struct __split_buffer<TSCH3D::Transform *, std::__1::allocator<TSCH3D::Transform *> > { struct Transform **x0; struct Transform **x1; struct Transform **x2; struct __compressed_pair<TSCH3D::Transform **, std::__1::allocator<TSCH3D::Transform *> > { struct Transform **x0; } x3; } x0; unsigned long long x1; struct __compressed_pair<unsigned long, std::__1::allocator<TSCH3D::Transform> > { unsigned long long x0; } x2; } x0; struct deque<TSCH3D::Transform, std::__1::allocator<TSCH3D::Transform> > { struct __split_buffer<TSCH3D::Transform *, std::__1::allocator<TSCH3D::Transform *> > { struct Transform **x0; struct Transform **x1; struct Transform **x2; struct __compressed_pair<TSCH3D::Transform **, std::__1::allocator<TSCH3D::Transform *> > { struct Transform **x0; } x3; } x0; unsigned long long x1; struct __compressed_pair<unsigned long, std::__1::allocator<TSCH3D::Transform> > { unsigned long long x0; } x2; } x1; } *)a0 series:(id)a1 index:(struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; })a2 propertyAccessor:(id)a3;

@end
