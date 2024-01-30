@interface TSCH3DAreaGeometry : TSCH3DGeometry {
    struct vector<glm::detail::tvec3<float>, std::__1::allocator<glm::detail::tvec3<float> > > { struct tvec3<float> *__begin_; struct tvec3<float> *__end_; struct __compressed_pair<glm::detail::tvec3<float> *, std::__1::allocator<glm::detail::tvec3<float> > > { struct tvec3<float> *__value_; } __end_cap_; } mTopLine;
    struct vector<glm::detail::tvec3<float>, std::__1::allocator<glm::detail::tvec3<float> > > { struct tvec3<float> *__begin_; struct tvec3<float> *__end_; struct __compressed_pair<glm::detail::tvec3<float> *, std::__1::allocator<glm::detail::tvec3<float> > > { struct tvec3<float> *__value_; } __end_cap_; } mBottomLine;
    unsigned int mCapOffset;
    int mCapCount;
}

@property (nonatomic) float minZ;
@property (nonatomic) float maxZ;
@property (nonatomic) float zeroValue;
@property (nonatomic) BOOL stacked;

- (const struct vector<glm::detail::tvec3<float>, std::__1::allocator<glm::detail::tvec3<float> > > { struct tvec3<float> *x0; struct tvec3<float> *x1; struct __compressed_pair<glm::detail::tvec3<float> *, std::__1::allocator<glm::detail::tvec3<float> > > { struct tvec3<float> *x0; } x2; } *)topLine;
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (const struct vector<glm::detail::tvec3<float>, std::__1::allocator<glm::detail::tvec3<float> > > { struct tvec3<float> *x0; struct tvec3<float> *x1; struct __compressed_pair<glm::detail::tvec3<float> *, std::__1::allocator<glm::detail::tvec3<float> > > { struct tvec3<float> *x0; } x2; } *)bottomLine;
- (unsigned int)capOffset;
- (void)generateArrays;
- (int)geometryCount;
- (unsigned int)capCount;
- (id)selectionKnobPositions;
- (id)elementsBoundsPositions;
- (void)setTopLine:(const struct vector<glm::detail::tvec3<float>, std::__1::allocator<glm::detail::tvec3<float> > > { struct tvec3<float> *x0; struct tvec3<float> *x1; struct __compressed_pair<glm::detail::tvec3<float> *, std::__1::allocator<glm::detail::tvec3<float> > > { struct tvec3<float> *x0; } x2; } *)a0 bottomLine:(const struct vector<glm::detail::tvec3<float>, std::__1::allocator<glm::detail::tvec3<float> > > { struct tvec3<float> *x0; struct tvec3<float> *x1; struct __compressed_pair<glm::detail::tvec3<float> *, std::__1::allocator<glm::detail::tvec3<float> > > { struct tvec3<float> *x0; } x2; } *)a1 zeroValue:(float)a2;
- (struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; })bottomTopAtPosition:(float)a0;

@end
