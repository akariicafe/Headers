@class NSArray;
@protocol MTLBuffer;

@interface MTLBVHPolygonGeometryDescriptor : MTLBVHGeometryDescriptor

@property (nonatomic) unsigned long long polygonType;
@property (retain, nonatomic) NSArray *vertexBuffers;
@property (nonatomic) unsigned long long vertexStride;
@property (retain, nonatomic) id<MTLBuffer> indexBuffer;
@property (nonatomic) unsigned long long indexBufferOffset;
@property (nonatomic) unsigned long long indexType;

- (unsigned long long)primitiveType;
- (void)dealloc;

@end
