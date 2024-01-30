@interface TSCH3DPlaneProjectRenderProcessor : TSCH3DTransformGeometryRenderProcessor {
    struct plane<glm::detail::tvec3<float> > { struct tvec3<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; } mNormal; float mDistance; } mPlane;
    struct tvec3<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; } mProjPt;
}

@property (readonly, nonatomic) struct box<glm::detail::tvec3<float> > { struct tvec3<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; } mMin; struct tvec3<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; } mMax; } bounds;

+ (id)processorWithPlane:(const struct plane<glm::detail::tvec3<float> > { struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } x0; float x1; } *)a0 projPt:(const struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } *)a1;

- (void)submit:(id)a0;
- (id).cxx_construct;
- (id)initWithPlane:(const struct plane<glm::detail::tvec3<float> > { struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } x0; float x1; } *)a0 projPt:(const struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } *)a1;

@end
