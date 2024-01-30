@interface TSCH3DUShortDataBuffer : TSCH3DVectorDataBuffer {
    struct vector<TSCH3D::PODType<unsigned short>, std::allocator<TSCH3D::PODType<unsigned short>>> { void *__begin_; void *__end_; struct __compressed_pair<TSCH3D::PODType<unsigned short> *, std::allocator<TSCH3D::PODType<unsigned short>>> { void *__value_; } __end_cap_; } _container;
}

@property (readonly, nonatomic) void *container;

- (unsigned long long)components;
- (id).cxx_construct;
- (const void *)data;
- (unsigned long long)count;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)clear;
- (int)componentType;
- (void).cxx_destruct;
- (unsigned long long)componentByteSize;
- (id)elementsAtIndices:(id)a0;
- (void)fillCapacity;

@end
