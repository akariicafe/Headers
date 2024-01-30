@interface TSCH3D2DDataBuffer : TSCH3DDataBuffer

@property (readonly, nonatomic) struct DataBuffer2DDimension { struct tvec2<int> { union { int x; int r; int s; } ; union { int y; int g; int t; } ; } _size; unsigned long long _components; BOOL _hasLevels; } dimension;
@property (readonly, nonatomic) struct tvec3<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; union { int x0; int x1; int x2; } x2; } size;

+ (id)bufferWithCapacityDimension:(const void *)a0;
+ (id)bufferWithCapacitySize:(const void *)a0 components:(unsigned long long)a1;

- (unsigned long long)components;
- (id).cxx_construct;
- (BOOL)hasLevels;
- (struct DataBufferLevelData { void *x0; struct tvec3<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; union { int x0; int x1; int x2; } x2; } x1; })dataAtLevel:(unsigned long long)a0;
- (id)initWithCapacityDimension:(const void *)a0;

@end
