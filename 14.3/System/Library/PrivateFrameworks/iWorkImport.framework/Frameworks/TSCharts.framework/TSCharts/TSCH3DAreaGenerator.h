@interface TSCH3DAreaGenerator : NSObject {
    struct vector<glm::detail::tvec3<float>, std::__1::allocator<glm::detail::tvec3<float> > > { struct tvec3<float> *__begin_; struct tvec3<float> *__end_; struct __compressed_pair<glm::detail::tvec3<float> *, std::__1::allocator<glm::detail::tvec3<float> > > { struct tvec3<float> *__value_; } __end_cap_; } mTop;
    struct vector<glm::detail::tvec3<float>, std::__1::allocator<glm::detail::tvec3<float> > > { struct tvec3<float> *__begin_; struct tvec3<float> *__end_; struct __compressed_pair<glm::detail::tvec3<float> *, std::__1::allocator<glm::detail::tvec3<float> > > { struct tvec3<float> *__value_; } __end_cap_; } mBottom;
    struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } mYLimits;
    float mZeroValue;
}

+ (id)generatorWithYLimits:(struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; })a0 zeroValue:(float)a1;

- (void).cxx_destruct;
- (void)dealloc;
- (id).cxx_construct;
- (void)addRowWithXValues:(const struct vector<float, std::__1::allocator<float> > { float *x0; float *x1; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x0; } x2; } *)a0 yValues:(const struct vector<float, std::__1::allocator<float> > { float *x0; float *x1; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x0; } x2; } *)a1;
- (id)createGeometryWithXValues:(const struct vector<float, std::__1::allocator<float> > { float *x0; float *x1; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x0; } x2; } *)a0 yValues:(const struct vector<float, std::__1::allocator<float> > { float *x0; float *x1; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x0; } x2; } *)a1;
- (id)initWithYLimits:(struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; })a0 zeroValue:(float)a1;
- (float)clampedZero;
- (void)clipLine:(const struct vector<glm::detail::tvec3<float>, std::__1::allocator<glm::detail::tvec3<float> > > { struct tvec3<float> *x0; struct tvec3<float> *x1; struct __compressed_pair<glm::detail::tvec3<float> *, std::__1::allocator<glm::detail::tvec3<float> > > { struct tvec3<float> *x0; } x2; } *)a0 into:(struct vector<glm::detail::tvec3<float>, std::__1::allocator<glm::detail::tvec3<float> > > { struct tvec3<float> *x0; struct tvec3<float> *x1; struct __compressed_pair<glm::detail::tvec3<float> *, std::__1::allocator<glm::detail::tvec3<float> > > { struct tvec3<float> *x0; } x2; } *)a1;

@end
