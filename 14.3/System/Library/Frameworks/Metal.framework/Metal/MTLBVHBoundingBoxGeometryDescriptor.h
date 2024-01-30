@protocol MTLBuffer;

@interface MTLBVHBoundingBoxGeometryDescriptor : MTLBVHGeometryDescriptor

@property (retain, nonatomic) id<MTLBuffer> boundingBoxBuffer;
@property (nonatomic) unsigned long long boundingBoxBufferOffset;
@property (nonatomic) unsigned long long boundingBoxStride;

- (void)dealloc;
- (unsigned long long)primitiveType;

@end
