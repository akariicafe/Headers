@class NSArray;
@protocol MTLBuffer;

@interface MTLBVHPolygonGeometryDescriptor : MTLBVHGeometryDescriptor

@property (nonatomic) unsigned long long polygonType;
@property (retain, nonatomic) NSArray *vertexBuffers;
@property (nonatomic) unsigned long long vertexStride;
@property (retain, nonatomic) id<MTLBuffer> indexBuffer;
@property (nonatomic) unsigned long long indexBufferOffset;
@property (nonatomic) unsigned long long indexType;
@property (nonatomic) unsigned long long vertexFormat;
@property (retain, nonatomic) id<MTLBuffer> transformationMatrixBuffer;
@property (nonatomic) unsigned long long transformationMatrixBufferOffset;

- (void)dealloc;
- (unsigned long long)primitiveType;

@end
