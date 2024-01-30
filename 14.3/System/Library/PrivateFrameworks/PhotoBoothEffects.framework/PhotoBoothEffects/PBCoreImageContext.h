@class EAGLContext, CIContext;

@interface PBCoreImageContext : PBContext {
    EAGLContext *_glesContext;
    struct __CVOpenGLESTextureCache { } *_textureCache;
    struct __CVBuffer { } *_inputTexture;
    struct __CVBuffer { } *_outputTexture;
    struct __CVPixelBufferPool { } *_smallPool;
    struct __CVPixelBufferPool { } *_largePool;
    struct CGSize { double width; double height; } _smallPoolSize;
    struct CGSize { double width; double height; } _largePoolSize;
    struct _CAImageQueue { } *_outputImageQueue;
    CIContext *_ciContext;
    struct __CVBuffer { } *_inputPixelBuffer;
    struct __CVBuffer { } *_outputPixelBuffer;
    BOOL _render9Up;
    BOOL _renderForSave;
    struct CGSize { double width; double height; } _outputSize;
}

- (id)initWithOptions:(id)a0;
- (unsigned int)inputTexture;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })outputSize;
- (void)setOutputSize:(struct CGSize { double x0; double x1; })a0;
- (void)setInputPixelBuffer:(struct __CVBuffer { } *)a0;
- (void)setOutputPixelBuffer:(struct __CVBuffer { } *)a0;
- (unsigned int)outputTexture;
- (struct __CVBuffer { } *)inputPixelBuffer;
- (BOOL)renderForSave;
- (id)ciContext;
- (struct __CVBuffer { } *)outputPixelBuffer;
- (BOOL)render9Up;
- (struct __CVBuffer { } *)createCVPixelBufferForFilter:(id)a0 inputPixelBuffer:(struct __CVBuffer { } *)a1 mirrored:(BOOL)a2;
- (void)renderFilter:(id)a0 inputPixelBuffer:(struct __CVBuffer { } *)a1;
- (void)renderFilter:(id)a0 inputPixelBuffer:(struct __CVBuffer { } *)a1 mirrored:(BOOL)a2;
- (void)renderNineUp:(id)a0 inputPixelBuffer:(struct __CVBuffer { } *)a1;
- (void)renderNineUp:(id)a0 inputPixelBuffer:(struct __CVBuffer { } *)a1 mirrored:(BOOL)a2;
- (struct _CAImageQueue { } *)outputImageQueue;
- (void)setOutputImageQueue:(struct _CAImageQueue { } *)a0;
- (struct __CVPixelBufferPool { } *)largePool;
- (void)setLargePool:(struct __CVPixelBufferPool { } *)a0;
- (struct __CVPixelBufferPool { } *)smallPool;
- (void)setSmallPool:(struct __CVPixelBufferPool { } *)a0;
- (void)setInputPixelBuffer:(struct __CVBuffer { } *)a0 mapTexture:(BOOL)a1;
- (void)setOutputPixelBuffer:(struct __CVBuffer { } *)a0 mapTexture:(BOOL)a1;
- (void)setRender9Up:(BOOL)a0;
- (void)setRenderForSave:(BOOL)a0;
- (void)_createPixelBuffer:(struct __CVBuffer **)a0 withSize:(struct CGSize { double x0; double x1; })a1;

@end
