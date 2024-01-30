@interface TSCH3DVectorN3DDataBuffer : TSCH3DDataBuffer {
    struct DataBuffer3DDimension { struct tvec3<int> { union { int x; int r; int s; } ; union { int y; int g; int t; } ; union { int z; int b; int p; } ; } mSize; unsigned long long mComponents; } mDimension;
    struct vector<unsigned char, std::__1::allocator<unsigned char> > { char *__begin_; char *__end_; struct __compressed_pair<unsigned char *, std::__1::allocator<unsigned char> > { char *__value_; } __end_cap_; } mContainer;
}

@property (readonly, nonatomic) struct vector<unsigned char, std::__1::allocator<unsigned char> > { char *x0; char *x1; struct __compressed_pair<unsigned char *, std::__1::allocator<unsigned char> > { char *x0; } x2; } *container;

+ (id)bufferWithCapacity3DDimension:(const struct DataBuffer3DDimension { struct tvec3<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; union { int x0; int x1; int x2; } x2; } x0; unsigned long long x1; } *)a0;

- (unsigned long long)components;
- (void).cxx_destruct;
- (const void *)data;
- (struct tvec3<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; union { int x0; int x1; int x2; } x2; })size;
- (id).cxx_construct;
- (unsigned long long)count;
- (int)componentType;
- (unsigned long long)componentByteSize;
- (void)fillCapacity;
- (id)initWithCapacity3DDimension:(const struct DataBuffer3DDimension { struct tvec3<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; union { int x0; int x1; int x2; } x2; } x0; unsigned long long x1; } *)a0;

@end
