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

- (int)_slicCompileShadersWithLibrary:(id)a0;
- (void)releaseResources;
- (id)_createTextureOfSize:(struct CGSize { double x0; double x1; })a0 withFormat:(unsigned long long)a1;
- (int)processSLICToOutputSPixelCentersIdsAndCounts:(id)a0 outputSPixelColor:(id)a1 outputIndexes:(id)a2 inputImage:(id)a3 parameters:(struct { float x0; } *)a4;
- (int)_slicEnsureConnectivity;
- (int)allocateResources;
- (int)_slicFinalReductionResult;
- (void)_swapTexturesAtIndex:(int)a0 and:(int)a1;
- (int)_slicFindCenterAssociation:(struct { float x0; } *)a0;
- (void)_newCommandBuffer;
- (void)_commitAndWait;
- (void)dealloc;
- (id)initWithParameters:(id)a0 andMetalContext:(id)a1;
- (int)_slicInitClusterCenters;
- (void)_commitNoWait;
- (int)_slicUpdateClusterCenter;
- (void)_waitForCompletion;
- (void).cxx_destruct;

@end
