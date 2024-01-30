@interface TSDGLShaderQualifierMat3 : TSDGLShaderQualifier

@property (readonly, nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } affineTransform;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } proposedAffineTransform;

- (id)description;
- (void)setGLUniformWithShader:(id)a0;

@end
