@interface TSCH3DUByteDataBuffer : TSCH3DVectorDataBuffer {
    struct vector<TSCH3D::PODType<unsigned char>, std::allocator<TSCH3D::PODType<unsigned char>>> { void *__begin_; void *__end_; struct __compressed_pair<TSCH3D::PODType<unsigned char> *, std::allocator<TSCH3D::PODType<unsigned char>>> { void *__value_; } __end_cap_; } _container;
}

@property (readonly, nonatomic) void *container;

- (void)clear;
- (unsigned long long)components;
- (void).cxx_destruct;
- (unsigned long long)count;
- (id)initWithCapacity:(unsigned long long)a0;
- (id).cxx_construct;
- (const void *)data;
- (int)componentType;
- (unsigned long long)componentByteSize;
- (void)fillCapacity;
- (id)elementsAtIndices:(id)a0;

@end
