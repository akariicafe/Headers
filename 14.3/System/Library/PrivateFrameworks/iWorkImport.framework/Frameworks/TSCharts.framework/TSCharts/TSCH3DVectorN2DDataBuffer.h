@interface TSCH3DVectorN2DDataBuffer : TSCH3D2DDataBuffer {
    struct vector<unsigned char, std::__1::allocator<unsigned char> > { char *__begin_; char *__end_; struct __compressed_pair<unsigned char *, std::__1::allocator<unsigned char> > { char *__value_; } __end_cap_; } mContainer;
}

@property (readonly, nonatomic) struct vector<unsigned char, std::__1::allocator<unsigned char> > { char *x0; char *x1; struct __compressed_pair<unsigned char *, std::__1::allocator<unsigned char> > { char *x0; } x2; } *container;

- (void).cxx_destruct;
- (const void *)data;
- (id).cxx_construct;
- (unsigned long long)count;
- (int)componentType;
- (void *)mutableData;
- (unsigned long long)componentByteSize;
- (void)fillCapacity;
- (id)initWithCapacityDimension:(const struct DataBuffer2DDimension { struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; } x0; unsigned long long x1; BOOL x2; } *)a0;
- (void)resizeFillDimension:(const struct DataBuffer2DDimension { struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; } x0; unsigned long long x1; BOOL x2; } *)a0;

@end
