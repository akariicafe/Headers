@class EAGLContext;

@interface AFilter : NSObject {
    EAGLContext *_glContext;
    unsigned int _lumaProgram;
    unsigned int _chromaProgram;
    unsigned int _lumaWithClippingProgram;
    unsigned int _chromaWithClippingProgram;
    unsigned int _bgraProgram;
    unsigned int _lumaBlurProgram;
    unsigned int _chromaBlurProgram;
    int _uniforms[40];
    int _blurUniforms[14];
    float m_angle;
}

- (id)initWithContext:(id)a0;

@end
