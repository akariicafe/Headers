@class NSArray;
@protocol MTLBuffer;

@interface MTLAccelerationStructureMotionTriangleGeometryDescriptor : MTLAccelerationStructureGeometryDescriptor

@property (copy, nonatomic) NSArray *vertexBuffers;
@property (nonatomic) unsigned long long vertexStride;
@property (retain, nonatomic) id<MTLBuffer> indexBuffer;
@property (nonatomic) unsigned long long indexBufferOffset;
@property (nonatomic) unsigned long long indexType;
@property (nonatomic) unsigned long long triangleCount;

+ (id)descriptor;

- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)dealloc;

@end
