@interface TSDGLShaderQualifierPoint4D : TSDGLShaderQualifier

@property (readonly, nonatomic) struct { float x; float y; float z; float w; } GLPoint4DValue;
@property (nonatomic) struct { float x; float y; float z; float w; } proposedGLPoint4DValue;

- (id)description;
- (void)setGLUniformWithShader:(id)a0;

@end
