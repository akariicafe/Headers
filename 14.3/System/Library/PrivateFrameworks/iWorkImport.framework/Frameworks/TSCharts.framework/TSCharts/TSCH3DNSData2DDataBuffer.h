@class NSData, NSMutableData;

@interface TSCH3DNSData2DDataBuffer : TSCH3D2DDataBuffer {
    NSData *mConstData;
    NSMutableData *mMutableData;
}

@property (readonly, nonatomic) NSData *NSData;

+ (id)bufferWithCapacityDimension:(const struct DataBuffer2DDimension { struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; } x0; unsigned long long x1; BOOL x2; } *)a0 mutableData:(id)a1;
+ (id)bufferWithCapacityDimension:(const struct DataBuffer2DDimension { struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; } x0; unsigned long long x1; BOOL x2; } *)a0 data:(id)a1;

- (const void *)data;
- (void)dealloc;
- (unsigned long long)count;
- (int)componentType;
- (void *)mutableData;
- (unsigned long long)componentByteSize;
- (void)fillCapacity;
- (id)initWithCapacityDimension:(const struct DataBuffer2DDimension { struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; } x0; unsigned long long x1; BOOL x2; } *)a0 data:(id)a1;
- (id)initWithCapacityDimension:(const struct DataBuffer2DDimension { struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; } x0; unsigned long long x1; BOOL x2; } *)a0;
- (id)initWithCapacityDimension:(const struct DataBuffer2DDimension { struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; } x0; unsigned long long x1; BOOL x2; } *)a0 mutableData:(id)a1;
- (void)resizeFillDimension:(const struct DataBuffer2DDimension { struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; } x0; unsigned long long x1; BOOL x2; } *)a0;

@end
