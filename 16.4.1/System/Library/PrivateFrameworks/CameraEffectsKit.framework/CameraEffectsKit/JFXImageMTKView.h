@class JTImage, NSString, MTKTextureLoader;
@protocol MTLSamplerState, MTLLibrary, MTLTexture, MTLCommandQueue, MTLRenderPipelineState;

@interface JFXImageMTKView : MTKView <JFXImageViewRendering> {
    id<MTLLibrary> _library;
    id<MTLCommandQueue> _commandQueue;
    id<MTLRenderPipelineState> _renderPipelineState;
    MTKTextureLoader *_textureLoader;
    id<MTLTexture> _mtlTexture_RGBA;
    id<MTLTexture> _mtlTexture_YUV_Luma;
    id<MTLTexture> _mtlTexture_YUV_Chroma;
    id<MTLSamplerState> _sampler;
    struct __CVMetalTextureCache { } *_textureCache;
    struct __CVBuffer { } *_texture_RGBA;
    struct __CVBuffer { } *_texture_YUV_Luma;
    struct __CVBuffer { } *_texture_YUV_Chroma;
    void *_pixelBufferColorAttachments;
    struct CGSize { double width; double height; } _viewSize;
    struct CGSize { double width; double height; } _textureSize;
    BOOL _needsUpdateVertices;
    BOOL _needsUpdateTexture;
    struct { struct { void /* unknown type, empty encoding */ position; void /* unknown type, empty encoding */ texCoords; } vertices[4]; } _quad;
}

@property (retain, nonatomic) JTImage *jtImage;
@property (readonly, nonatomic) long long renderingType;
@property (nonatomic) BOOL flipX;
@property (nonatomic) BOOL flipY;
@property (nonatomic) BOOL enableDebugDrawing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buildRenderPipelineWithLabel:(id)a0 vertexFunction:(id)a1 fragmentFunction:(id)a2 device:(id)a3 view:(id)a4 error:(id *)a5;
+ (id)buildSamplerStateWithDevice:(id)a0 addressMode:(unsigned long long)a1 filter:(unsigned long long)a2;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 device:(id)a1;
- (void)cleanupTextureCache;
- (id)initWithCoder:(id)a0;
- (void)updateVertices;
- (void)configureRenderPipelineForColorAttachments:(void *)a0;
- (void)setContentMode:(long long)a0;
- (void)setupTextureCache;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)layoutSubviews;
- (void)updateDebugDrawing;
- (void)updateTexture;
- (void)cleanupTextures;
- (void)setRenderingType:(long long)a0;
- (void).cxx_destruct;
- (void)JFXImageMTKView_commonInit;

@end
