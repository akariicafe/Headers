@class NSArray;

@interface MTLBVHBoundingBoxGeometryDescriptor : MTLBVHGeometryDescriptor

@property (retain, nonatomic) NSArray *boundingBoxBuffers;
@property (nonatomic) unsigned long long boundingBoxStride;

- (unsigned long long)primitiveType;
- (void)dealloc;

@end
