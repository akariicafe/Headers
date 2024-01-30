@interface MTLSCircle : MTLSPath {
    struct vector<float __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))> > { void *__begin_; void *__end_; struct __compressed_pair<float * __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))> > { void *__value_; } __end_cap_; } _points;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithStrokeWeight:(id)a0 radius:(SEL)a1 scale:(float)a2 rotation:(float)a3 translation:(struct AxisAngle { float x0; })a4;

@end
