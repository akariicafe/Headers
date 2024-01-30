@class ARFrame, MTLRenderPassDescriptor, ARMatteGenerator;
@protocol MTLRenderPipelineState, SCNTechniqueSupport, MTLTexture, SCNSceneRenderer, MTLLibrary;

@interface AVTARMaskRenderer : NSObject {
    id<SCNTechniqueSupport, SCNSceneRenderer> _owner;
    BOOL _clearWithCamera;
    unsigned long long _antialiasingMode;
    BOOL _writeID;
    BOOL _debugMode;
    struct CGSize { double width; double height; } _renderSize;
    unsigned long long _pipelineKind;
    ARFrame *_arFrame;
    ARMatteGenerator *_matteGenerator;
    BOOL _depthDataIsMirrored;
    long long _interfaceOrientation;
    id<MTLLibrary> _library;
    unsigned long long _capturedDataWidth;
    unsigned long long _capturedDataHeight;
    id<MTLTexture> _lastRawDepthTexture;
    id<MTLTexture> _rawMaskTexture[2];
    id<MTLTexture> _tmpMaskBlurTexture;
    id<MTLRenderPipelineState> _dbgCamDepthPipeline;
    id<MTLRenderPipelineState> _maskPipeline;
    id<MTLRenderPipelineState> _maskPipelineBlurXHigh;
    id<MTLRenderPipelineState> _maskPipelineBlurYHigh;
    MTLRenderPassDescriptor *_renderPassDescriptor;
    struct __CVMetalTextureCache { } *_textureCache;
    id /* block */ _techniqueDidChangeHandler;
}

@property (nonatomic) float headZ;
@property (nonatomic) BOOL flipDepth;
@property (nonatomic) float smoothDepth;
@property (retain) id<MTLTexture> capturedDepth;

- (void)render:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)reloadTechnique;
- (void)reloadDepthShaders;
- (void)setup:(struct CGSize { double x0; double x1; })a0 context:(id)a1 colorPixelFormat:(unsigned long long)a2;
- (id)initWithOwner:(id)a0 techniqueDidChangeHandler:(id /* block */)a1;
- (void)updateWithARFrame:(id)a0 fallBackDepthData:(id)a1 captureOrientation:(long long)a2 interfaceOrientation:(long long)a3 mirroredDepthData:(BOOL)a4;
- (void)updateWithDepthTexture:(id)a0 captureOrientation:(long long)a1 interfaceOrientation:(long long)a2 mirroredDepthData:(BOOL)a3;
- (void)setClearWithCamera:(BOOL)a0 antialiasingMode:(unsigned long long)a1;

@end
