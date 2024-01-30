@class NSArray;
@protocol MTLBuffer;

@interface MPSInstanceAccelerationStructure : MPSAccelerationStructure {
    unsigned long long _transformType;
    void *_bvh;
}

@property (retain, nonatomic) NSArray *accelerationStructures;
@property (retain, nonatomic) id<MTLBuffer> instanceBuffer;
@property (nonatomic) unsigned long long instanceBufferOffset;
@property (retain, nonatomic) id<MTLBuffer> transformBuffer;
@property (nonatomic) unsigned long long transformBufferOffset;
@property (nonatomic) unsigned long long transformType;
@property (retain, nonatomic) id<MTLBuffer> maskBuffer;
@property (nonatomic) unsigned long long maskBufferOffset;
@property (nonatomic) unsigned long long instanceCount;

+ (BOOL)supportsSecureCoding;

- (id)initWithDevice:(id)a0;
- (void)validate;
- (void)encodeWithCoder:(id)a0;
- (id)statistics;
- (id)description;
- (id)initWithGroup:(id)a0;
- (void)dealloc;
- (struct _MPSAxisAlignedBoundingBox { })boundingBox;
- (void)rebuild;
- (id)copyWithZone:(struct _NSZone { } *)a0 device:(id)a1;
- (id)initWithCoder:(id)a0 device:(id)a1;
- (unsigned long long)branchingFactor;
- (id)initWithCoder:(id)a0 group:(id)a1;
- (void)bindResourcesWithEncoder:(id)a0 commandBuffer:(id)a1 retainedResources:(id)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0 group:(id)a1;
- (BOOL)useResourceBuffer;
- (void)encodeResourcesToBuffer:(id)a0;
- (void *)innerNodeBufferRange;
- (void *)leafNodeBufferRange;
- (void *)pageTable0BufferRange;
- (void *)pageTable1BufferRange;
- (void *)pageBufferRange;
- (int)rootNodeType;
- (unsigned long long)leafNodeCount;
- (unsigned long long)innerNodeCount;
- (int)nodeLayout;
- (void)rebuildWithCompletionHandler:(id /* block */)a0;
- (void)encodeRefitToCommandBuffer:(id)a0;
- (void)sharedInitInstanceAccelerationStructure;
- (void)decodeInstanceAccelerationStructureWithCoder:(id)a0;
- (void)encodeInstanceOffsetsToBuffer:(id)a0;
- (id)copyInstanceAccelerationStructureWithZone:(struct _NSZone { } *)a0 device:(id)a1 group:(id)a2;

@end
