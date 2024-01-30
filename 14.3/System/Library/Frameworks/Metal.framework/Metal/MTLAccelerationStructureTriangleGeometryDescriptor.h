@protocol MTLBuffer;

@interface MTLAccelerationStructureTriangleGeometryDescriptor : MTLAccelerationStructureGeometryDescriptor

@property (retain, nonatomic) id<MTLBuffer> vertexBuffer;
@property (nonatomic) unsigned long long vertexBufferOffset;
@property (nonatomic) unsigned long long vertexStride;
@property (retain, nonatomic) id<MTLBuffer> indexBuffer;
@property (nonatomic) unsigned long long indexBufferOffset;
@property (nonatomic) unsigned long long indexType;
@property (nonatomic) unsigned long long triangleCount;

+ (id)descriptor;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
