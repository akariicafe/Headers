@class FuseRemixFragmentShader;
@protocol MTLComputePipelineState;

@interface FuseRemixShaders : NSObject {
    FuseRemixFragmentShader *shaders[256];
    id<MTLComputePipelineState> accWeightDownsample;
    id<MTLComputePipelineState> stationaryFusionInitial;
    id<MTLComputePipelineState> stationaryFusionSubsequent;
    id<MTLComputePipelineState> stationaryAccWeightDownsampleInitial;
    id<MTLComputePipelineState> stationaryAccWeightDownsampleSubsequent;
    id<MTLComputePipelineState> stationaryAccWeightCalcAB;
    id<MTLComputePipelineState> stationaryAccWeightFilterAB;
    id<MTLComputePipelineState> stationaryDownsampleForInference;
}

+ (unsigned int)getIdxForOptionsWithIsLuma:(BOOL)a0 isTopBand:(BOOL)a1 isBand0:(BOOL)a2 isFirstBatch:(BOOL)a3 isLastBatch:(BOOL)a4 usePatchBasedFusion:(BOOL)a5 useGpuCSC:(BOOL)a6 ggmEnabled:(BOOL)a7;
+ (id)getShaderNameWithIsLuma:(BOOL)a0 isTopBand:(BOOL)a1;

- (void).cxx_destruct;
- (id)getFragmentShaderWithIsLuma:(BOOL)a0 isTopBand:(BOOL)a1 isBand0:(BOOL)a2 isFirstBatch:(BOOL)a3 isLastBatch:(BOOL)a4 usePatchBasedFusion:(BOOL)a5 useGpuCSC:(BOOL)a6 ggmEnabled:(BOOL)a7;
- (id)initWithMetal:(id)a0 pixelFormatLuma:(unsigned long long)a1 pixelFormatChroma:(unsigned long long)a2;

@end
