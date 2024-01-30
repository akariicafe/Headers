@interface TSCH3DAreaGeometry : TSCH3DGeometry {
    struct vector<glm::detail::tvec3<float>, std::allocator<glm::detail::tvec3<float>>> { void *__begin_; void *__end_; struct __compressed_pair<glm::detail::tvec3<float> *, std::allocator<glm::detail::tvec3<float>>> { void *__value_; } __end_cap_; } _topLine;
    struct vector<glm::detail::tvec3<float>, std::allocator<glm::detail::tvec3<float>>> { void *__begin_; void *__end_; struct __compressed_pair<glm::detail::tvec3<float> *, std::allocator<glm::detail::tvec3<float>>> { void *__value_; } __end_cap_; } _bottomLine;
    unsigned int _capOffset;
    int _capCount;
}

@property (nonatomic) float minZ;
@property (nonatomic) float maxZ;
@property (nonatomic) float zeroValue;
@property (nonatomic) BOOL stacked;

- (const void *)topLine;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;
- (const void *)bottomLine;
- (unsigned int)capOffset;
- (void)generateArrays;
- (int)geometryCount;
- (unsigned int)capCount;
- (id)selectionKnobPositions;
- (id)elementsBoundsPositions;
- (void)setTopLine:(const void *)a0 bottomLine:(const void *)a1 zeroValue:(float)a2;
- (struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; })bottomTopAtPosition:(float)a0;

@end
