@interface TSCH3D2DDataBuffer : TSCH3DDataBuffer

@property (readonly, nonatomic) struct DataBuffer2DDimension { struct tvec2<int> { union { int x; int r; int s; } ; union { int y; int g; int t; } ; } mSize; unsigned long long mComponents; BOOL mHasLevels; } dimension;
@property (readonly, nonatomic) struct tvec3<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; union { int x0; int x1; int x2; } x2; } size;

+ (id)bufferWithCapacitySize:(const struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; } *)a0 components:(unsigned long long)a1;
+ (id)bufferWithCapacityDimension:(const struct DataBuffer2DDimension { struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; } x0; unsigned long long x1; BOOL x2; } *)a0;

- (unsigned long long)components;
- (id).cxx_construct;
- (BOOL)hasLevels;
- (struct DataBufferLevelData { void *x0; struct tvec3<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; union { int x0; int x1; int x2; } x2; } x1; })dataAtLevel:(unsigned long long)a0;
- (id)initWithCapacityDimension:(const struct DataBuffer2DDimension { struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; } x0; unsigned long long x1; BOOL x2; } *)a0;

@end
