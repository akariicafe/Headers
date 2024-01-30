@interface TSCH3DExtrusionGeometry : TSCH3DGeometry {
    struct vector<glm::detail::tvec2<float>, std::allocator<glm::detail::tvec2<float>>> { void *__begin_; void *__end_; struct __compressed_pair<glm::detail::tvec2<float> *, std::allocator<glm::detail::tvec2<float>>> { void *__value_; } __end_cap_; } _crossSection;
    struct vector<glm::detail::tvec3<float>, std::allocator<glm::detail::tvec3<float>>> { void *__begin_; void *__end_; struct __compressed_pair<glm::detail::tvec3<float> *, std::allocator<glm::detail::tvec3<float>>> { void *__value_; } __end_cap_; } _spine;
    struct vector<glm::detail::tvec2<float>, std::allocator<glm::detail::tvec2<float>>> { void *__begin_; void *__end_; struct __compressed_pair<glm::detail::tvec2<float> *, std::allocator<glm::detail::tvec2<float>>> { void *__value_; } __end_cap_; } _scale;
    unsigned int _beginCapOffset;
    int _beginCapCount;
}

@property (nonatomic) BOOL beginCap;
@property (nonatomic) BOOL endCap;
@property (nonatomic) float crossSectionCreaseAngle;
@property (nonatomic) float spineCreaseAngle;
@property (nonatomic) struct tvec3<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; } normalBias;
@property (readonly, nonatomic) unsigned int capOffset;
@property (readonly, nonatomic) unsigned int capCount;
@property (nonatomic) struct tvec3<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; } spineDirectionBias;

- (const void *)spine;
- (const void *)scale;
- (void).cxx_destruct;
- (id)init;
- (void)setScale:(const void *)a0;
- (id).cxx_construct;
- (void)generateArrays;
- (void)setCrossSection:(const void *)a0;
- (const void *)crossSection;
- (void)setSpine:(const void *)a0;
- (void)debug_dumpGeometryBounds;

@end
