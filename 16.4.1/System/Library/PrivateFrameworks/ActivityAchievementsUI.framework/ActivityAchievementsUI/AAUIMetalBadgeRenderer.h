@class MTLRenderPassDescriptor, CAMetalLayer, AAUIBadgeModelConfiguration, UIImage, CADisplayLink, NSArray;
@protocol MTLDevice, MTLDepthStencilState, MTLTexture, MTLCommandQueue, MTLRenderPipelineState;

@interface AAUIMetalBadgeRenderer : NSObject {
    CAMetalLayer *_metalLayer;
    CADisplayLink *_displayLink;
    BOOL _useEarnedShader;
    id<MTLDevice> _device;
    id<MTLCommandQueue> _commandQueue;
    id<MTLRenderPipelineState> _shaderRenderPipeline;
    id<MTLRenderPipelineState> _shaderFaceRenderPipeline;
    id<MTLRenderPipelineState> _shaderFaceInlayTriColorsPipeline;
    id<MTLRenderPipelineState> _shaderFaceInlayRenderPipeline;
    id<MTLRenderPipelineState> _shaderFaceTriColorRenderPipeline;
    id<MTLDepthStencilState> _depthStencilState;
    struct { void /* unknown type, empty encoding */ columns[4]; } _viewProjectionMatrix;
    struct { void /* unknown type, empty encoding */ columns[4]; } _modelTransform;
    struct { void /* unknown type, empty encoding */ columns[4]; } _environmentMatrix;
    void /* unknown type, empty encoding */ _cameraPosition;
    struct { void /* unknown type, empty encoding */ color; void /* unknown type, empty encoding */ enamelColor; void /* unknown type, empty encoding */ enamelTriColor1; void /* unknown type, empty encoding */ enamelTriColor2; void /* unknown type, empty encoding */ enamelTriColor3; float useTexture; float useTextureShine; BOOL useTwoToneEnamel; BOOL useEnamelAlpha; BOOL useFullColorEnamel; BOOL hasGlyph; } _uniforms;
    NSArray *_badgeModels;
    id<MTLTexture> _fleckNormalTexture;
    id<MTLTexture> _environmentTexture;
    id<MTLTexture> _backTexture;
    id<MTLTexture> _emptyBackTexture;
    id<MTLTexture> _colorTexture;
    MTLRenderPassDescriptor *_renderPassDesc;
    id<MTLTexture> _colorAttachmentMSAA;
    id<MTLTexture> _depthAttachmentMSAA;
    void /* unknown type, empty encoding */ _attachmentRasterSize;
    float _rasterScaleFactor;
}

@property (copy, nonatomic) id /* block */ stateUpdateBlock;
@property (retain, nonatomic) AAUIBadgeModelConfiguration *configuration;
@property (retain, nonatomic) UIImage *backTextureImage;
@property (nonatomic, getter=isPaused) BOOL paused;

+ (id)_commandQueueForDevice:(id)a0;
+ (double)screenScaleMaximum;
+ (double)screenScaleMultiple;

- (id)snapshot;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_setupRenderPipeline;
- (void)_cleanupConfiguration;
- (void)_drawBadgeFrameCallback;
- (void)_drawBadgeModel:(id)a0 intoRenderEncoder:(id)a1 withBackTexture:(BOOL)a2;
- (void)_drawFrameWithDrawable:(id)a0;
- (void)_drawIntoRenderEncoder:(id)a0;
- (void)_loadBadgeModelWithConfiguration:(id)a0;
- (void)_setupAttributes;
- (void)_setupCommonBindingsForRenderEncoder:(id)a0 pipelineState:(id)a1 verticesBuffer:(id)a2;
- (void)_setupTextures;
- (void)_updateModelTransformForBadge:(id)a0;
- (void)cleanupAfterSnapshot;
- (id)initWithCAMetalLayer:(id)a0 useEarnedShader:(BOOL)a1;
- (void)resizeBadgeForCurrentViewSize;

@end
