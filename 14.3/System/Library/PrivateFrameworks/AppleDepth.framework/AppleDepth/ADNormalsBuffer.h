@interface ADNormalsBuffer : NSObject {
    struct vector<float __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))> > { void *__begin_; void *__end_; struct __compressed_pair<float * __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))> > { void *__value_; } __end_cap_; } _vertices;
}

- (void).cxx_destruct;
- (id).cxx_construct;

@end
