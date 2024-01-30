@interface TSCH3DDataBuffer : NSObject

@property (readonly, nonatomic) unsigned long long componentByteSize;
@property (readonly, nonatomic) unsigned long long elementByteSize;
@property (readonly, nonatomic) unsigned long long byteSize;
@property (readonly, nonatomic) struct tvec3<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; union { int x0; int x1; int x2; } x2; } size;
@property (readonly, nonatomic) struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; } size2;
@property (readonly, nonatomic) BOOL hasLevels;

- (id)description;
- (struct DataBufferInfo { int x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; })bufferInfo;
- (struct DataBufferLevelData { void *x0; struct tvec3<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; union { int x0; int x1; int x2; } x2; } x1; })dataAtLevel:(unsigned long long)a0;
- (struct DataBufferLevelData { void *x0; struct tvec3<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; union { int x0; int x1; int x2; } x2; } x1; })dataWithSizeGreaterOrEqualTo:(unsigned long long)a0;

@end
