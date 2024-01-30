@interface TSCH3DLineExtrusionGeometry : TSCH3DExtrusionGeometry

@property (nonatomic) struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } ylimits;
@property (nonatomic) struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } xlimits;

+ (id)lineFromXValues:(const struct vector<float, std::__1::allocator<float> > { float *x0; float *x1; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x0; } x2; } *)a0 yValues:(const struct vector<float, std::__1::allocator<float> > { float *x0; float *x1; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x0; } x2; } *)a1;

- (id)init;
- (id).cxx_construct;
- (void)generateArrays;
- (id)selectionKnobPositions;
- (id)elementsBoundsPositions;
- (void)setSpine:(const struct vector<glm::detail::tvec3<float>, std::__1::allocator<glm::detail::tvec3<float> > > { struct tvec3<float> *x0; struct tvec3<float> *x1; struct __compressed_pair<glm::detail::tvec3<float> *, std::__1::allocator<glm::detail::tvec3<float> > > { struct tvec3<float> *x0; } x2; } *)a0;
- (struct tmat3x3<float> { struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } x0[3]; })p_rotationMatrixForCrossSectionIndex:(unsigned long long)a0;
- (struct tmat4x4<float> { struct tvec4<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; union { float x0; float x1; float x2; } x3; } x0[4]; })matrixAtXPosition:(float)a0 returningXRangeInfo:(struct LineExtrusionGeometryXRangeInfo { struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } x0; BOOL x1; } *)a1;

@end
