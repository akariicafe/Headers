@class NSArray, MTLRenderPassDescriptor, CAMetalLayer;
@protocol MTLCommandQueue, MTLTexture, MTLComputePipelineState;

@interface CLKUIMetalQuadView : CLKUIQuadView {
    id<MTLCommandQueue> _commandQueue;
    MTLRenderPassDescriptor *_renderPassDescriptor;
    BOOL _drawableSizeNeedsUpdate;
    struct CLKUIQuadSize { int width; int height; } _quadSize;
    CAMetalLayer *_metalLayer;
    NSArray *_quads;
    id<MTLTexture> _depthTexture;
    unsigned char _isDepthBufferRequired : 1;
    id<MTLComputePipelineState> _aplPipelineState;
    id<MTLComputePipelineState> _colorConversionPipelineState;
    unsigned char _presentWithTransaction : 1;
    id<MTLTexture> _msaaTexture;
    id<MTLTexture> _textureForPrewarming;
}

@property (readonly, nonatomic) unsigned long long colorPixelFormat;
@property (nonatomic) unsigned long long msaaCount;

+ (id)allocateDepthTextureWithWidth:(float)a0 height:(float)a1 sampleCount:(unsigned long long)a2;

- (void).cxx_destruct;
- (void)setOpaque:(BOOL)a0;
- (void)layoutSubviews;
- (void)discardContents;
- (id)metalLayer;
- (id)snapshotInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 scale:(double)a1 time:(double)a2;
- (id)snapshotTextureInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 scale:(double)a1 time:(double)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 options:(unsigned long long)a1 colorSpace:(long long)a2;
- (BOOL)_displayAndCheckForDrawable:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)_handleQuadArrayChange:(id)a0;
- (void)setSingleBufferMode:(BOOL)a0;
- (float)computeAPL;
- (id)_newRenderPassDescriptor;
- (id)_snapshotTextureInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 scale:(double)a1 time:(double)a2 withAdditionalPasses:(id /* block */)a3;
- (id)_textureToImage:(id)a0 scale:(double)a1;
- (void)_renderQuads:(id)a0 toScreenWithCommandBuffer:(id)a1 passDescriptor:(id)a2;
- (void)_updateDrawableSizeIfNecessary;
- (float)computeAPLAndSnapshot:(id *)a0;
- (BOOL)prewarmWithCompletion:(id /* block */)a0;

@end
