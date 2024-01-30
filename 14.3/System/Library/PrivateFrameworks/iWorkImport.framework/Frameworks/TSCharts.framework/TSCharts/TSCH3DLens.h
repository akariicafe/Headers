@interface TSCH3DLens : NSObject <NSCopying>

@property (nonatomic) float near;
@property (nonatomic) float far;

+ (id)lens;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)calculateCullingPlanes:(struct vector<TSCH3D::Math::ExtendedTypesDetails::plane<glm::detail::tvec3<float> >, std::__1::allocator<TSCH3D::Math::ExtendedTypesDetails::plane<glm::detail::tvec3<float> > > > { struct plane<glm::detail::tvec3<float> > *x0; struct plane<glm::detail::tvec3<float> > *x1; struct __compressed_pair<TSCH3D::Math::ExtendedTypesDetails::plane<glm::detail::tvec3<float> > *, std::__1::allocator<TSCH3D::Math::ExtendedTypesDetails::plane<glm::detail::tvec3<float> > > > { struct plane<glm::detail::tvec3<float> > *x0; } x2; } *)a0;

@end
