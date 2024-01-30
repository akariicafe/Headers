@interface TSCH3Dvec2DataBuffer : TSCH3DFloatVectorDataBuffer {
    struct vector<glm::detail::tvec2<float>, std::__1::allocator<glm::detail::tvec2<float> > > { struct tvec2<float> *__begin_; struct tvec2<float> *__end_; struct __compressed_pair<glm::detail::tvec2<float> *, std::__1::allocator<glm::detail::tvec2<float> > > { struct tvec2<float> *__value_; } __end_cap_; } mContainer;
}

@property (readonly, nonatomic) struct vector<glm::detail::tvec2<float>, std::__1::allocator<glm::detail::tvec2<float> > > { struct tvec2<float> *x0; struct tvec2<float> *x1; struct __compressed_pair<glm::detail::tvec2<float> *, std::__1::allocator<glm::detail::tvec2<float> > > { struct tvec2<float> *x0; } x2; } *container;

- (void)clear;
- (unsigned long long)components;
- (void).cxx_destruct;
- (const void *)data;
- (id).cxx_construct;
- (unsigned long long)count;
- (id)initWithCapacity:(unsigned long long)a0;
- (unsigned long long)componentByteSize;
- (void)fillCapacity;
- (id)elementsAtIndices:(id)a0;

@end
