@class ARFrame, MTLRenderPassDescriptor;
@protocol MTLDevice, MTLLibrary, MTLTexture, MTLRenderPipelineState;

@interface AVTARMaskRenderer : NSObject {
    BOOL _writeID;
    BOOL _debugMode;
    struct CGSize { double width; double height; } _renderSize;
    ARFrame *_arFrame;
    id<MTLLibrary> _library;
    id<MTLDevice> _device;
    id<MTLTexture> _lastRawDepthTexture;
    id<MTLTexture> _rawMaskTexture[2];
    id<MTLTexture> _tmpMaskBlurTexture;
    id<MTLRenderPipelineState> _dbgCamDepthPipeline;
    id<MTLRenderPipelineState> _maskPipeline;
    id<MTLRenderPipelineState> _blurMaskPipeline[2];
    MTLRenderPassDescriptor *_renderPassDescriptor;
    struct __CVMetalTextureCache { } *_textureCache;
}

@property (nonatomic) float headZ;
@property (nonatomic) BOOL flipDepth;
@property (nonatomic) long long orientation;
@property (nonatomic) float smoothDepth;
@property (retain) id<MTLTexture> capturedDepth;

+ (id)renderer;
+ (id)techniqueForDevice:(id)a0 clearWithCamera:(BOOL)a1 antialiasingMode:(unsigned long long)a2 avatar:(id)a3 passExecutionBlock:(id /* block */)a4;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithOwner:(id)a0;
- (void)render:(id)a0;
- (void)reloadDepthShaders;
- (void)setup:(struct CGSize { double x0; double x1; })a0 context:(id)a1 colorPixelFormat:(unsigned long long)a2;
- (void)setARFrame:(id)a0;

@end
