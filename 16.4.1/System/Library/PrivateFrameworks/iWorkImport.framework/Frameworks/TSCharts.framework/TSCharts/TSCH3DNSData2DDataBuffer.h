@class NSData, NSMutableData;

@interface TSCH3DNSData2DDataBuffer : TSCH3D2DDataBuffer {
    NSData *_constData;
    NSMutableData *_mutableData;
}

@property (readonly, nonatomic) NSData *NSData;

+ (id)bufferWithCapacityDimension:(const void *)a0 data:(id)a1;
+ (id)bufferWithCapacityDimension:(const void *)a0 mutableData:(id)a1;

- (const void *)data;
- (unsigned long long)count;
- (int)componentType;
- (void).cxx_destruct;
- (void *)mutableData;
- (id)initWithCapacityDimension:(const void *)a0 data:(id)a1;
- (unsigned long long)componentByteSize;
- (void)fillCapacity;
- (id)initWithCapacityDimension:(const void *)a0;
- (id)initWithCapacityDimension:(const void *)a0 mutableData:(id)a1;
- (void)resizeFillDimension:(const void *)a0;

@end
