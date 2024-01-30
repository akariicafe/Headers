@interface TSCH3DAreaGenerator : NSObject {
    struct vector<glm::detail::tvec3<float>, std::allocator<glm::detail::tvec3<float>>> { void *__begin_; void *__end_; struct __compressed_pair<glm::detail::tvec3<float> *, std::allocator<glm::detail::tvec3<float>>> { void *__value_; } __end_cap_; } _top;
    struct vector<glm::detail::tvec3<float>, std::allocator<glm::detail::tvec3<float>>> { void *__begin_; void *__end_; struct __compressed_pair<glm::detail::tvec3<float> *, std::allocator<glm::detail::tvec3<float>>> { void *__value_; } __end_cap_; } _bottom;
    struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } _YLimits;
    float _zeroValue;
}

+ (id)generatorWithYLimits:(struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; })a0 zeroValue:(float)a1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addRowWithXValues:(const void *)a0 yValues:(const void *)a1;
- (float)clampedZero;
- (void)clipLine:(const void *)a0 into:(void *)a1;
- (id)createGeometryWithXValues:(const void *)a0 yValues:(const void *)a1;
- (id)initWithYLimits:(struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; })a0 zeroValue:(float)a1;

@end
