@interface TSDGLShaderQualifierPoint3D : TSDGLShaderQualifier

@property (readonly, nonatomic) struct { float x; float y; float z; } GLPoint3DValue;
@property (nonatomic) struct { float x; float y; float z; } proposedGLPoint3DValue;

- (id)description;
- (void)setGLUniformWithShader:(id)a0;

@end
