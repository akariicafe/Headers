@class TDreamGLProgramHelper;

@interface TDreamProgramWrapper : NSObject {
    int sizeUniform;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } outputRect;
    TDreamGLProgramHelper *filterProgram;
    int filterPositionAttribute;
    int filterTextureCoordinateAttribute;
    int filterInputTextureUniform;
    float texCoord0[8];
}

- (void)setSize:(struct CGSize { double x0; double x1; })a0;
- (id)init;
- (void).cxx_destruct;
- (id)getProgram;
- (id)initWithFragmentShaderFromString:(id)a0;
- (id)initWithProgram:(id)a0;
- (id)initWithVertexShaderFromString:(id)a0 fragmentShaderFromString:(id)a1;
- (void)initializeAttributes;
- (void)initializeTexCoord0;
- (void)renderTo:(unsigned int)a0 from:(unsigned int)a1;
- (void)setInputTexture0Rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withinRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)setOutputRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setUniforms;

@end
