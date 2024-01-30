@interface TSCH3Dvec4DataBuffer : TSCH3DFloatVectorDataBuffer {
    struct vector<glm::detail::tvec4<float>, std::allocator<glm::detail::tvec4<float>>> { void *__begin_; void *__end_; struct __compressed_pair<glm::detail::tvec4<float> *, std::allocator<glm::detail::tvec4<float>>> { void *__value_; } __end_cap_; } _container;
}

@property (readonly, nonatomic) void *container;

- (void)clear;
- (unsigned long long)components;
- (void).cxx_destruct;
- (unsigned long long)count;
- (id)initWithCapacity:(unsigned long long)a0;
- (id).cxx_construct;
- (const void *)data;
- (unsigned long long)componentByteSize;
- (void)fillCapacity;
- (id)elementsAtIndices:(id)a0;

@end
