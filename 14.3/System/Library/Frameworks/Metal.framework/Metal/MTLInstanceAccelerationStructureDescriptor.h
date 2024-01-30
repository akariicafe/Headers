@class NSArray;
@protocol MTLBuffer;

@interface MTLInstanceAccelerationStructureDescriptor : MTLAccelerationStructureDescriptor

@property (retain, nonatomic) id<MTLBuffer> instanceDescriptorBuffer;
@property (nonatomic) unsigned long long instanceDescriptorBufferOffset;
@property (nonatomic) unsigned long long instanceDescriptorStride;
@property (nonatomic) unsigned long long instanceCount;
@property (retain, nonatomic) NSArray *instancedAccelerationStructures;

+ (id)descriptor;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
