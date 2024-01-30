@interface TSCH3DPlaneProjectRenderProcessor : TSCH3DTransformGeometryRenderProcessor {
    struct plane<glm::detail::tvec3<float>> { struct tvec3<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; } _normal; float _distance; } _plane;
    struct tvec3<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; } _projPt;
}

@property (readonly, nonatomic) struct box<glm::detail::tvec3<float>> { struct tvec3<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; } _min; struct tvec3<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; } _max; } bounds;

+ (id)processorWithPlane:(const void *)a0 projPt:(const void *)a1;

- (void)submit:(id)a0;
- (id).cxx_construct;
- (id)initWithPlane:(const void *)a0 projPt:(const void *)a1;

@end
