@class NSData, NSMutableData;

@interface TSCH3DNSData2DDataBuffer : TSCH3D2DDataBuffer {
    NSData *_constData;
    NSMutableData *_mutableData;
}

@property (readonly, nonatomic) NSData *NSData;

+ (id)bufferWithCapacityDimension:(const void *)a0 mutableData:(id)a1;
+ (id)bufferWithCapacityDimension:(const void *)a0 data:(id)a1;

- (void *)mutableData;
- (void).cxx_destruct;
- (unsigned long long)count;
- (const void *)data;
- (int)componentType;
- (unsigned long long)componentByteSize;
- (void)fillCapacity;
- (id)initWithCapacityDimension:(const void *)a0 data:(id)a1;
- (id)initWithCapacityDimension:(const void *)a0;
- (id)initWithCapacityDimension:(const void *)a0 mutableData:(id)a1;
- (void)resizeFillDimension:(const void *)a0;

@end
