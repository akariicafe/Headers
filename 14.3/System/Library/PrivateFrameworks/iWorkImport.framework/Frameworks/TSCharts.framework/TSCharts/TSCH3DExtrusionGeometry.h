@interface TSCH3DExtrusionGeometry : TSCH3DGeometry {
    struct vector<glm::detail::tvec2<float>, std::__1::allocator<glm::detail::tvec2<float> > > { struct tvec2<float> *__begin_; struct tvec2<float> *__end_; struct __compressed_pair<glm::detail::tvec2<float> *, std::__1::allocator<glm::detail::tvec2<float> > > { struct tvec2<float> *__value_; } __end_cap_; } mCrossSection;
    struct vector<glm::detail::tvec3<float>, std::__1::allocator<glm::detail::tvec3<float> > > { struct tvec3<float> *__begin_; struct tvec3<float> *__end_; struct __compressed_pair<glm::detail::tvec3<float> *, std::__1::allocator<glm::detail::tvec3<float> > > { struct tvec3<float> *__value_; } __end_cap_; } mSpine;
    struct vector<glm::detail::tvec2<float>, std::__1::allocator<glm::detail::tvec2<float> > > { struct tvec2<float> *__begin_; struct tvec2<float> *__end_; struct __compressed_pair<glm::detail::tvec2<float> *, std::__1::allocator<glm::detail::tvec2<float> > > { struct tvec2<float> *__value_; } __end_cap_; } mScale;
    unsigned int mBeginCapOffset;
    int mBeginCapCount;
}

@property (nonatomic) BOOL beginCap;
@property (nonatomic) BOOL endCap;
@property (nonatomic) float crossSectionCreaseAngle;
@property (nonatomic) float spineCreaseAngle;
@property (nonatomic) struct tvec3<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; } normalBias;
@property (readonly, nonatomic) unsigned int capOffset;
@property (readonly, nonatomic) unsigned int capCount;
@property (nonatomic) struct tvec3<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; } spineDirectionBias;

- (const struct vector<glm::detail::tvec2<float>, std::__1::allocator<glm::detail::tvec2<float> > > { struct tvec2<float> *x0; struct tvec2<float> *x1; struct __compressed_pair<glm::detail::tvec2<float> *, std::__1::allocator<glm::detail::tvec2<float> > > { struct tvec2<float> *x0; } x2; } *)scale;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (const struct vector<glm::detail::tvec3<float>, std::__1::allocator<glm::detail::tvec3<float> > > { struct tvec3<float> *x0; struct tvec3<float> *x1; struct __compressed_pair<glm::detail::tvec3<float> *, std::__1::allocator<glm::detail::tvec3<float> > > { struct tvec3<float> *x0; } x2; } *)spine;
- (id).cxx_construct;
- (void)setScale:(const struct vector<glm::detail::tvec2<float>, std::__1::allocator<glm::detail::tvec2<float> > > { struct tvec2<float> *x0; struct tvec2<float> *x1; struct __compressed_pair<glm::detail::tvec2<float> *, std::__1::allocator<glm::detail::tvec2<float> > > { struct tvec2<float> *x0; } x2; } *)a0;
- (void)generateArrays;
- (void)setCrossSection:(const struct vector<glm::detail::tvec2<float>, std::__1::allocator<glm::detail::tvec2<float> > > { struct tvec2<float> *x0; struct tvec2<float> *x1; struct __compressed_pair<glm::detail::tvec2<float> *, std::__1::allocator<glm::detail::tvec2<float> > > { struct tvec2<float> *x0; } x2; } *)a0;
- (const struct vector<glm::detail::tvec2<float>, std::__1::allocator<glm::detail::tvec2<float> > > { struct tvec2<float> *x0; struct tvec2<float> *x1; struct __compressed_pair<glm::detail::tvec2<float> *, std::__1::allocator<glm::detail::tvec2<float> > > { struct tvec2<float> *x0; } x2; } *)crossSection;
- (void)setSpine:(const struct vector<glm::detail::tvec3<float>, std::__1::allocator<glm::detail::tvec3<float> > > { struct tvec3<float> *x0; struct tvec3<float> *x1; struct __compressed_pair<glm::detail::tvec3<float> *, std::__1::allocator<glm::detail::tvec3<float> > > { struct tvec3<float> *x0; } x2; } *)a0;
- (void)debug_dumpGeometryBounds;

@end
