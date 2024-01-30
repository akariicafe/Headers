@protocol MTLBuffer;

@interface MTLAccelerationStructureBoundingBoxGeometryDescriptor : MTLAccelerationStructureGeometryDescriptor

@property (retain, nonatomic) id<MTLBuffer> boundingBoxBuffer;
@property (nonatomic) unsigned long long boundingBoxBufferOffset;
@property (nonatomic) unsigned long long boundingBoxStride;
@property (nonatomic) unsigned long long boundingBoxCount;

+ (id)descriptor;

- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)dealloc;

@end
