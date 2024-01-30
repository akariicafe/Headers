@protocol MTLBuffer;

@interface MTLBVHPolygonGeometryDescriptor : MTLBVHGeometryDescriptor

@property (nonatomic) unsigned long long polygonType;
@property (retain, nonatomic) id<MTLBuffer> vertexBuffer;
@property (nonatomic) unsigned long long vertexBufferOffset;
@property (nonatomic) unsigned long long vertexStride;
@property (retain, nonatomic) id<MTLBuffer> indexBuffer;
@property (nonatomic) unsigned long long indexBufferOffset;
@property (nonatomic) unsigned long long indexType;

- (void)dealloc;
- (unsigned long long)primitiveType;

@end
