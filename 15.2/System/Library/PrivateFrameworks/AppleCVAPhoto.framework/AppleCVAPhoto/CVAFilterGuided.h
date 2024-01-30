@class NSString, CVAFilterInfimumConvolution, CVAFilterBox, CVAFilterHybridResampling, MPSImageBox;
@protocol MTLPipelineLibrarySPI, MTLResourceGroupSPI, MTLSamplerState, MTLLibrary, MTLTexture, MTLComputePipelineState, MTLDeviceSPI;

@interface CVAFilterGuided : ImageSaverRegistrator {
    id<MTLDeviceSPI> _device;
    id<MTLLibrary> _library;
    id<MTLPipelineLibrarySPI> _pipelineLibrary;
    CVAFilterBox *_boxFilter;
    CVAFilterHybridResampling *_hybridResampler;
    id<MTLTexture> _gfSrcWithGuide;
    id<MTLTexture> _gfMeanSrcWithGuide;
    id<MTLTexture> _gfSrcGuide;
    id<MTLTexture> _gfMeanSrcGuide;
    id<MTLTexture> _gfRRRGRB;
    id<MTLTexture> _gfGGGBBB;
    id<MTLTexture> _gfMeanRRRGRB;
    id<MTLTexture> _gfMeanGGGBBB;
    id<MTLTexture> _gfTmp;
    id<MTLTexture> _gfTmp2;
    id<MTLTexture> _gfMeanWeight;
    id<MTLTexture> _gfMeanNormalizationFactor;
    id<MTLTexture> _convolutedCoeff;
    id<MTLTexture> _upscaledCoeff;
    id<MTLTexture> _inputAlphaDownsampled;
    id<MTLTexture> _inputAlphaBlurred;
    id<MTLSamplerState> _inputAlphaBlurredSampler;
    id<MTLTexture> _gammaMatteTexture;
    id<MTLTexture> _alphaTexture;
    id<MTLTexture> _hybridUpscalingIntermediateTexture;
    id<MTLTexture> _hybridUpscalingIntermediateR32Texture;
    id<MTLTexture> _srcTexture;
    id<MTLTexture> _lowResGammaMatte;
    id<MTLResourceGroupSPI> _alphaPostprocessingTemporaryTexturesResourceGroup;
    id<MTLResourceGroupSPI> _rg_inputAlphaDownsampled;
    id<MTLResourceGroupSPI> _rg_inputAlphaBlurred;
    id<MTLComputePipelineState> _guidedFilterApplyRGBAKernel;
    id<MTLComputePipelineState> _guidedFilterInvertKernel;
    id<MTLComputePipelineState> _guidedFilterMultiplyKernel;
    id<MTLComputePipelineState> _guidedFilterEmbedGuideKernel;
    id<MTLComputePipelineState> _guidedFilterPremultiplyKernel;
    id<MTLComputePipelineState> _guidedFilterSecondOrderProductsKernel;
    id<MTLComputePipelineState> _guidedFilterRegressionKernel;
    id<MTLComputePipelineState> _postProcessAlphaKernel;
    CVAFilterInfimumConvolution *_infConvolution;
    MPSImageBox *_mpsBox;
    int _smallGuidedFilterKernelSize;
}

@property (readonly) NSString *label;

- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 library:(id)a1 pipelineLibrary:(id)a2 commandQueue:(id)a3 textureSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a4 alphaSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a5 kernelSize:(int)a6 infConvolutionDownsampling:(int)a7 laplacianLimitingDownsampling:(int)a8 laplacianLimitingBlurSize:(int)a9 error:(id *)a10;
- (void)encodeRegressionToCommandBuffer:(id)a0 inSourceTexture:(id)a1 inGuidanceTexture:(id)a2 inWeightTexture:(id)a3 outCoeffTexture:(id)a4 epsilon:(float)a5;
- (void)encodeReconstructToCommandBuffer:(id)a0 inGuidancePixelBuffer:(struct __CVBuffer { } *)a1 inCoeffTexture:(id)a2 outFilteredTexture:(id)a3;
- (void)initSourceTexture:(struct __CVBuffer { } *)a0;
- (void)encodeFilterApplyToBuffer:(id)a0 coeff:(id)a1 source:(id)a2 destination:(id)a3;
- (void)encodePostProcessAlphaToCommandBuffer:(id)a0 source:(id)a1 destination:(id)a2 alphaMaxLaplacian:(float)a3 infConvOrientation:(float)a4 infConvMajorRadius:(float)a5 infConvMinorRadius:(float)a6 gammaExponent:(float)a7 enableInfConvolution:(BOOL)a8;
- (void)encodeHybridUpSamplingToCommandBuffer:(id)a0 source:(id)a1 destination:(id)a2;

@end
