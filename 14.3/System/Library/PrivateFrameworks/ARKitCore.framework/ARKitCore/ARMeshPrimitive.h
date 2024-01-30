@protocol MTLTexture, MTLBuffer;

@interface ARMeshPrimitive : NSObject

@property (readonly) struct { void /* unknown type, empty encoding */ columns[4]; } transform_world_from_primitive;
@property (readonly) id<MTLBuffer> vertexBuffer;
@property (readonly) id<MTLBuffer> uvBuffer;
@property (readonly) unsigned long long nVertices;
@property (readonly) id<MTLBuffer> indexBuffer;
@property (readonly) unsigned long long nIndices;
@property (readonly) id<MTLTexture> texture;

+ (id)planeWithTransform:(id)a0 min:(SEL)a1 max:(struct { void /* unknown type, empty encoding */ x0[4]; })a2 texture:(id)a3;

- (void).cxx_destruct;
- (id)initAsPlaneWithTransform:(id)a0 min:(SEL)a1 max:(struct { void /* unknown type, empty encoding */ x0[4]; })a2 texture:(id)a3;

@end
