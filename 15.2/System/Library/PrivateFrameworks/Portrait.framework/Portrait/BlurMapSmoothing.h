@class PTUtil;
@protocol MTLLibrary, MTLTexture, MTLComputePipelineState, MTLDeviceSPI;

@interface BlurMapSmoothing : NSObject {
    PTUtil *_portraitUtil;
    BOOL _shadersLoaded;
    struct CGSize { double width; double height; } _disparitySize;
    id<MTLDeviceSPI> _device;
    id<MTLLibrary> _library;
    id<MTLComputePipelineState> _smoothing_x_kernel;
    id<MTLComputePipelineState> _smoothing_y_kernel;
    struct blurmap_smoothing_params { int nIterations; float originalBlurValueT0; float originalBlurValueT1; float localMinimumBlurValueT0; float localMinimumBlurValueT1; } _config_params;
    id<MTLTexture> _intermediateTexture;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithDevice:(id)a0 library:(id)a1 disparitySize:(struct CGSize { double x0; double x1; })a2 debugRendering:(long long)a3 verbose:(BOOL)a4 gpuProfiling:(BOOL)a5 config:(id)a6;
- (int)enqueueSmoothingUsingForBlurMap:(id)a0 outputBlurMap:(id)a1 commandBuffer:(id)a2;
- (int)loadShadersWithLibrary:(id)a0;
- (int)enqueueSmoothingPassWithCommandBuffer:(id)a0 inputBlurMap:(id)a1 referenceBlurMap:(id)a2 intermediateTex:(id)a3 outputBlurMap:(id)a4 iterationIndex:(int)a5;

@end
