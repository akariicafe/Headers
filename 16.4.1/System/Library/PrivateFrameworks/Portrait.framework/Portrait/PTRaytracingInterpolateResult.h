@protocol MTLComputePipelineState, MTLDevice, MTLTexture;

@interface PTRaytracingInterpolateResult : NSObject {
    id<MTLComputePipelineState> _interpolateRGBWeightSourceYUVDestYUV[9];
    id<MTLComputePipelineState> _interpolateRGBWeightSourceYUVDestRGBA[9];
    id<MTLComputePipelineState> _interpolateRGBWeightSourceRGBADestRGBA[9];
    id<MTLComputePipelineState> _studioLightInterpolateRGBWeightSourceYUVDestYUV[9];
    id<MTLDevice> _device;
    id<MTLTexture> _precomputedGaussian;
    int _sizePrecomputedGaussian;
}

+ (struct PTNoiseValues { float x0; float x1; })calculateVarReadNoise:(id)a0;

- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 library:(id)a1 pipelineLibrary:(id)a2 useExportQualityNoise:(BOOL)a3;
- (void)interpolateRGBWeightUsingSourceToDest:(id)a0 renderRequest:(id)a1 inRGBWeight:(id)a2;
- (void)interpolateRGBWeightUsingSourceToDest:(id)a0 renderRequest:(id)a1 inRGBWeight:(id)a2 inGainMap:(id)a3 inColorCube:(id)a4;
- (void)precomputeGaussianFromNumberOfSamples:(int)a0 seed:(unsigned int)a1;
- (id)randomGaussNoise;

@end
