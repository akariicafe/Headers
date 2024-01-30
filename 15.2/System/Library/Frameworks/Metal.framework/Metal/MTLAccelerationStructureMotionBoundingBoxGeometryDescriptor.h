@class NSArray;

@interface MTLAccelerationStructureMotionBoundingBoxGeometryDescriptor : MTLAccelerationStructureGeometryDescriptor

@property (copy, nonatomic) NSArray *boundingBoxBuffers;
@property (nonatomic) unsigned long long boundingBoxStride;
@property (nonatomic) unsigned long long boundingBoxCount;

+ (id)descriptor;

- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)dealloc;

@end
