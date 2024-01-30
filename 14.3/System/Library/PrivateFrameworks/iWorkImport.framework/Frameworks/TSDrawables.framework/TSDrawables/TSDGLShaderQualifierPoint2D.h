@interface TSDGLShaderQualifierPoint2D : TSDGLShaderQualifier

@property (readonly, nonatomic) struct { float x; float y; } GLPoint2DValue;
@property (nonatomic) struct { float x; float y; } proposedGLPoint2DValue;

- (id)description;
- (void)setGLUniformWithShader:(id)a0;

@end
