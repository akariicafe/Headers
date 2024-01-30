@interface ARUIRingUniforms : NSObject

@property (readonly, nonatomic) struct { struct { void /* unknown type, empty encoding */ columns[4]; } transformMatrix[2]; } vertexAttributes;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ color1; void /* unknown type, empty encoding */ color2; void /* unknown type, empty encoding */ center; void /* unknown type, empty encoding */ startPosition; void /* unknown type, empty encoding */ endPosition; void /* unknown type, empty encoding */ ringValues; void /* unknown type, empty encoding */ blendingValues; void /* unknown type, empty encoding */ trigResults; } uniforms;

- (void)_updateUniformsWithRing:(id)a0 inContext:(id)a1;
- (void)_updateVertexAttributesWithRing:(id)a0 inContext:(id)a1;
- (id)initWithRing:(id)a0 inContext:(id)a1;
- (void *)uniformsBytes;
- (void *)vertexAttributesBytes;

@end
