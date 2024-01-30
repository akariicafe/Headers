@interface TSCH3DPerspectiveLens : TSCH3DLens

@property (nonatomic) float fov;
@property (nonatomic) float aspect;
@property (readonly, nonatomic) float width;
@property (readonly, nonatomic) float height;

- (struct tmat4x4<float> { struct tvec4<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; union { float x0; float x1; float x2; } x3; } x0[4]; })matrix;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)calculateCullingPlanes:(struct vector<TSCH3D::Math::ExtendedTypesDetails::plane<glm::detail::tvec3<float> >, std::__1::allocator<TSCH3D::Math::ExtendedTypesDetails::plane<glm::detail::tvec3<float> > > > { struct plane<glm::detail::tvec3<float> > *x0; struct plane<glm::detail::tvec3<float> > *x1; struct __compressed_pair<TSCH3D::Math::ExtendedTypesDetails::plane<glm::detail::tvec3<float> > *, std::__1::allocator<TSCH3D::Math::ExtendedTypesDetails::plane<glm::detail::tvec3<float> > > > { struct plane<glm::detail::tvec3<float> > *x0; } x2; } *)a0;
- (id)frustumRect;
- (id)narrowedByNormalizedBounds:(struct box<glm::detail::tvec2<float> > { struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } x0; struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } x1; } *)a0;
- (id)shiftedByPercentage:(struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } *)a0;
- (id)frustumRectAtDistance:(float)a0;
- (id)asFrustumLens;
- (id)matrixDescription;

@end
