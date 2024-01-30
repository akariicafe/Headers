@class slicMetalParameters, FigMetalContext;
@protocol MTLDevice, MTLCommandBuffer, MTLTexture, MTLComputePipelineState, MTLCommandQueue;

@interface SLICMetal : NSObject {
    id<MTLComputePipelineState> _slicComputePipelinesStates[5];
    slicMetalParameters *_parameters;
    id<MTLDevice> _mtlDevice;
    id<MTLCommandQueue> _mtlCommandQueue;
    id<MTLCommandBuffer> _mtlCommandBuffer;
    FigMetalContext *_mtlContext;
    id<MTLTexture> _slicTextures[9];
    int _no_grid_per_center;
}

- (int)allocateResources;
- (void).cxx_destruct;
- (void)releaseResources;
- (void)dealloc;
- (int)_slicCompileShadersWithLibrary:(id)a0;
- (id)_createTextureOfSize:(struct CGSize { double x0; double x1; })a0 withFormat:(unsigned long long)a1;
- (void)_newCommandBuffer;
- (int)_slicInitClusterCenters;
- (int)_slicFindCenterAssociation:(struct { float x0; } *)a0;
- (int)_slicUpdateClusterCenter;
- (int)_slicFinalReductionResult;
- (int)_slicEnsureConnectivity;
- (void)_commitNoWait;
- (void)_swapTexturesAtIndex:(int)a0 and:(int)a1;
- (id)initWithParameters:(id)a0 andMetalContext:(id)a1;
- (int)processSLICToOutputSPixelCentersIdsAndCounts:(id)a0 outputSPixelColor:(id)a1 outputIndexes:(id)a2 inputImage:(id)a3 parameters:(struct { float x0; } *)a4;
- (void)_commitAndWait;
- (void)_waitForCompletion;

@end
