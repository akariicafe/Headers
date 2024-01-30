@interface TSCH3DUByteDataBuffer : TSCH3DVectorDataBuffer {
    struct vector<TSCH3D::PODType<unsigned char>, std::__1::allocator<TSCH3D::PODType<unsigned char> > > { struct PODType<unsigned char> *__begin_; struct PODType<unsigned char> *__end_; struct __compressed_pair<TSCH3D::PODType<unsigned char> *, std::__1::allocator<TSCH3D::PODType<unsigned char> > > { struct PODType<unsigned char> *__value_; } __end_cap_; } mContainer;
}

@property (readonly, nonatomic) struct vector<TSCH3D::PODType<unsigned char>, std::__1::allocator<TSCH3D::PODType<unsigned char> > > { struct PODType<unsigned char> *x0; struct PODType<unsigned char> *x1; struct __compressed_pair<TSCH3D::PODType<unsigned char> *, std::__1::allocator<TSCH3D::PODType<unsigned char> > > { struct PODType<unsigned char> *x0; } x2; } *container;

- (void)clear;
- (unsigned long long)components;
- (void).cxx_destruct;
- (const void *)data;
- (id).cxx_construct;
- (unsigned long long)count;
- (int)componentType;
- (id)initWithCapacity:(unsigned long long)a0;
- (unsigned long long)componentByteSize;
- (void)fillCapacity;
- (id)elementsAtIndices:(id)a0;

@end
