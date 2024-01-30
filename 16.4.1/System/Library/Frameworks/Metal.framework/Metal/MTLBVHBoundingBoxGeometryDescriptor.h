@class NSArray;

@interface MTLBVHBoundingBoxGeometryDescriptor : MTLBVHGeometryDescriptor

@property (retain, nonatomic) NSArray *boundingBoxBuffers;
@property (nonatomic) unsigned long long boundingBoxStride;

- (void)dealloc;
- (unsigned long long)primitiveType;

@end
