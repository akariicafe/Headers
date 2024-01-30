@interface ARUIRingsGeometry : NSObject

@property (nonatomic) unsigned int circleSegments;
@property (nonatomic) float startingRadian;
@property (nonatomic) float endingRadian;

- (id)init;
- (unsigned int)vertexCount;
- (unsigned int)indexCount;
- (void)enumerateVertexGeometryWithBlock:(id /* block */)a0;
- (unsigned short *)connectedIndiciesGeometry;
- (unsigned int)disconnectedIndexCount;
- (unsigned short *)disconnectedIndiciesGeometry;

@end
