@class NSString, MPSImageLanczosScale;
@protocol MTLResourceGroupSPI, MTLTexture, MTLComputePipelineState, MTLDeviceSPI;

@interface CVAFilterHybridResampling : ImageSaverRegistrator {
    id<MTLDeviceSPI> _device;
    id<MTLTexture> _hybridDownsamplingIntermediateTexture;
    id<MTLTexture> _hybridDownsamplingIntermediateR32Texture;
    id<MTLTexture> _hybridDownsamplingIntermediateR16Texture;
    id<MTLTexture> _hybridDownsamplingIntermediateR8Texture;
    id<MTLResourceGroupSPI> _intermediateTextureResourceGroup;
    id<MTLComputePipelineState> _doubleUpsampler;
    id<MTLComputePipelineState> _halfDownSampler;
    id<MTLComputePipelineState> _linearResampler;
    id<MTLComputePipelineState> _doubleUpsamplerOneComponent;
    id<MTLComputePipelineState> _halfDownSamplerOneComponent;
    id<MTLComputePipelineState> _linearResamplerOneComponent;
}

@property (readonly) NSString *label;
@property (readonly) MPSImageLanczosScale *scaler;

+ (void)prewarmScaler:(id)a0 device:(id)a1 commandBuffer:(id)a2;

- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 library:(id)a1 pipelineLibrary:(id)a2 commandQueue:(id)a3 error:(id *)a4;
- (void)encodeHybridDownsamplingToCommandBuffer:(id)a0 source:(id)a1 destination:(id)a2;
- (void)encodeBilinearScalingToCommandBuffer:(id)a0 source:(id)a1 destination:(id)a2 mode:(long long)a3;

@end
