@class MTLRenderPassDescriptor, NSArray, CAMetalLayer, UIImageView;
@protocol MTLDepthStencilState, MTLTexture, MTLCommandQueue, MTLComputePipelineState;

@interface CLKUIMetalQuadView : CLKUIQuadView {
    id<MTLCommandQueue> _commandQueue;
    MTLRenderPassDescriptor *_renderPassDescriptor;
    struct CLKUIQuadSize { int width; int height; } _quadSize;
    CAMetalLayer *_metalLayer;
    NSArray *_quads;
    id<MTLTexture> _depthTexture;
    id<MTLDepthStencilState> _depthStencilState;
    unsigned char _isDepthBufferRequired : 1;
    unsigned char _isPresentWithTransaction : 1;
    unsigned char _isUseNativeScale : 1;
    unsigned char _isRenderWithCommandBuffer : 1;
    unsigned char _isDrawableSizeNeedsUpdate : 1;
    unsigned char _isDrawableRead : 1;
    unsigned char _isDrawableWrite : 1;
    unsigned char _isDoubleBuffer : 1;
    id<MTLComputePipelineState> _aplPipelineState;
    id<MTLComputePipelineState> _colorConversionPipelineState;
    id<MTLComputePipelineState> _dimmingPipelineState;
    unsigned long long _msaaCount;
    id<MTLTexture> _msaaTexture;
    id<MTLTexture> _textureForPrewarming;
    UIImageView *_snapshotView;
}

@property (readonly, nonatomic) unsigned long long colorPixelFormat;
@property (readonly, nonatomic) BOOL isSnapshotting;
@property (nonatomic) struct { double x0; double x1; double x2; double x3; } clearColor;
@property (nonatomic) float maxAPL;
@property (nonatomic) float aplFilterAmount;

+ (id)allocateDepthTextureWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 sampleCount:(unsigned long long)a2;
+ (id)allocateMsaaTextureWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 pixelFormat:(unsigned long long)a2 sampleCount:(unsigned long long)a3;

- (void)setOpaque:(BOOL)a0;
- (struct CGSize { double x0; double x1; })drawableSize;
- (void)dealloc;
- (void)layoutSubviews;
- (void)discardContents;
- (BOOL)prewarmWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)snapshotInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 scale:(double)a1 time:(double)a2;
- (BOOL)_displayAndCheckForDrawable:(BOOL)a0 withCompletion:(id /* block */)a1;
- (id)_getDimmingPipelineState;
- (void)_handleQuadArrayChange:(id)a0;
- (unsigned long long)_msaaCount;
- (id)_newRenderPassDescriptor;
- (void)_renderQuads:(id)a0 toScreenWithCommandBuffer:(id)a1 passDescriptor:(id)a2;
- (BOOL)_shouldApplyAPLFilter;
- (id)_snapshotTextureInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 scale:(double)a1 time:(double)a2 withAdditionalPasses:(id /* block */)a3;
- (id)_textureToImage:(id)a0 scale:(double)a1;
- (void)_updateDrawableSizeIfNecessary;
- (void)_updateFramebufferOnly;
- (float)computeAPL;
- (float)computeAPLAndSnapshot:(id *)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 identifier:(id)a1 options:(unsigned long long)a2 colorSpace:(long long)a3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 identifier:(id)a1 options:(unsigned long long)a2 colorSpace:(long long)a3 asyncRenderQueue:(id)a4;
- (id)metalLayer;
- (void)setSingleBufferMode:(BOOL)a0;
- (void)snapshotAndFreeze;
- (id)snapshotTextureInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 scale:(double)a1 time:(double)a2;

@end
