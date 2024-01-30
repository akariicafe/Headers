@class TSDMetalContext, MTLRenderPassDescriptor, TSDMetalShader;
@protocol TSDMTLDataBuffer, MTLCommandBuffer, MTLTexture, TSDAnimationRandomGenerator;

@interface TSDMetalMotionBlurEffect : NSObject {
    struct CGSize { double width; double height; } _framebufferSize;
    struct CGSize { double width; double height; } _slideSize;
    id<MTLTexture> _combinedTextureColor1;
    id<MTLTexture> _combinedTextureColor2;
    id<MTLTexture> _combinedTextureVelocity;
    TSDMetalShader *_defaultTextureShader;
    TSDMetalShader *_colorAndVelocityShader;
    TSDMetalShader *_colorAndVelocityBlendingShader;
    TSDMetalShader *_velocityVisualizerShader;
    TSDMetalShader *_velocityCollectionShader;
    TSDMetalShader *_velocityTileMaxVerticalShader;
    TSDMetalShader *_velocityTileMaxHorizontalShader;
    TSDMetalShader *_velocityNeighborMaxHorizontalShader;
    TSDMetalShader *_velocityNeighborMaxVerticalShader;
    id<MTLTexture> _colorTexture1;
    id<MTLTexture> _colorTexture2;
    id<TSDMTLDataBuffer> _colorFBODataBuffer;
    id<MTLTexture> _velocityTexture1;
    id<MTLTexture> _velocityTexture2;
    id<MTLTexture> _velocityTextureSquashed;
    id<TSDMTLDataBuffer> _velocityFBODataBuffer;
    id<TSDMTLDataBuffer> _velocitySquashedFBODataBuffer;
    id<TSDMTLDataBuffer> _FBODataBuffer;
    id<TSDMTLDataBuffer> _FBODataBufferFlipped;
    MTLRenderPassDescriptor *_colorAndVelocityPassDescriptor;
    MTLRenderPassDescriptor *_tileHorizontalPassDescriptor;
    MTLRenderPassDescriptor *_tileVerticalPassDescriptor;
    MTLRenderPassDescriptor *_neighborHorizontalPassDescriptor;
    MTLRenderPassDescriptor *_neighborVerticalPassDescriptor;
    MTLRenderPassDescriptor *_combined1PassDescriptor;
    id<TSDAnimationRandomGenerator> _randomGenerator;
    id<MTLCommandBuffer> _currentCommandBuffer;
    TSDMetalContext *_metalContext;
}

@property (nonatomic) BOOL isSingleObject;
@property (nonatomic) double motionBlurStrength;
@property (nonatomic) long long debugDrawMode;
@property (nonatomic) double framebufferScale;

- (void).cxx_destruct;
- (id)initWithFramebufferSize:(struct CGSize { double x0; double x1; })a0 slideSize:(struct CGSize { double x0; double x1; })a1 randomGenerator:(id)a2 metalContext:(id)a3;
- (void)p_setupTextures;
- (struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })adjustTransformForMotionBlurBuffer:(struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })a0;
- (id)bindColorAndVelocityWithMetalContext:(id)a0 shouldFillBackground:(BOOL)a1;
- (id)colorAndVelocityBlendingShader;
- (id)colorAndVelocityShader;
- (void)drawResultWithWorkingRenderEncoder:(id)a0 destinationRenderEncoder:(id)a1;
- (void)drawResultWithWorkingRenderEncoder:(id)a0 destinationRenderEncoder:(id)a1 opacity:(double)a2;
- (void)p_blitIntoColorFramebuffer;
- (void)p_blitIntoVelocityTexture;
- (void)p_debugDrawModeColorBufferWithEncoder:(id)a0;
- (void)p_debugDrawModeVelocityBufferDilatedWithEncoder:(id)a0;
- (void)p_debugDrawModeVelocityBufferWithEncoder:(id)a0;
- (void)p_dilateVelocityTexture;
- (void)p_drawWithEncoder:(id)a0 opacity:(double)a1;
- (void)p_setupBuffers;
- (void)p_setupRenderPasses;
- (void)p_setupShaders;
- (struct CGSize { double x0; double x1; })p_squashedVelocityFramebufferSize;
- (struct CGSize { double x0; double x1; })p_updateMaxVelocityInShadersWithScale:(double)a0 isColorFBO:(BOOL)a1;
- (struct CGSize { double x0; double x1; })p_velocityFramebufferSize;
- (struct CGSize { double x0; double x1; })p_velocityFramebufferTextureScale;
- (void)setupMotionBlurEffectIfNecessary;
- (struct CGSize { double x0; double x1; })velocityScale;
- (struct CGSize { double x0; double x1; })velocityScaleForColorFBO:(BOOL)a0;

@end
