@interface TSCH3DUShortDataBuffer : TSCH3DVectorDataBuffer {
    struct vector<TSCH3D::PODType<unsigned short>, std::__1::allocator<TSCH3D::PODType<unsigned short> > > { struct PODType<unsigned short> *__begin_; struct PODType<unsigned short> *__end_; struct __compressed_pair<TSCH3D::PODType<unsigned short> *, std::__1::allocator<TSCH3D::PODType<unsigned short> > > { struct PODType<unsigned short> *__value_; } __end_cap_; } mContainer;
}

@property (readonly, nonatomic) struct vector<TSCH3D::PODType<unsigned short>, std::__1::allocator<TSCH3D::PODType<unsigned short> > > { struct PODType<unsigned short> *x0; struct PODType<unsigned short> *x1; struct __compressed_pair<TSCH3D::PODType<unsigned short> *, std::__1::allocator<TSCH3D::PODType<unsigned short> > > { struct PODType<unsigned short> *x0; } x2; } *container;

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
