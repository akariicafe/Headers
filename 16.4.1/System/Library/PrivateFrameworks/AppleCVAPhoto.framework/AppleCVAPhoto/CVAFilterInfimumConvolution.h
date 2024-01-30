@protocol MTLPipelineLibrarySPI, MTLResourceGroupSPI, MTLLibrary, MTLTexture, MTLComputePipelineState, MTLDeviceSPI;

@interface CVAFilterInfimumConvolution : ImageSaverRegistrator {
    id<MTLDeviceSPI> _device;
    id<MTLLibrary> _library;
    id<MTLPipelineLibrarySPI> _pipelineLibrary;
    unsigned long long _width;
    unsigned long long _height;
    id<MTLTexture> _tmpBlurHalf;
    id<MTLTexture> _tmpOutHalf[2];
    id<MTLComputePipelineState> _infimumKernel;
    id<MTLComputePipelineState> _infimumConvolutionKernel;
    id<MTLResourceGroupSPI> _tmpTextureGroup;
}

- (id)initWithDevice:(id)a0 library:(id)a1 pipelineLibrary:(id)a2 bufferWidth:(unsigned long long)a3 bufferHeight:(unsigned long long)a4 error:(id *)a5;
- (void)encodeInfimumToCommandBufferInternal:(id)a0 sourceTexture:(id)a1 smallSourceTexture:(id)a2 destinationTexture:(id)a3;
- (void)encodeToCommandBufferInternal:(id)a0 sourceTexture:(id)a1 destinationTexture:(id)a2 config:(struct InfimumConvolutionConfig { })a3;
- (void)encodeToCommandBuffer:(id)a0 sourceTexture:(id)a1 smallSourceTexture:(id)a2 destinationTexture:(id)a3 orientation:(float)a4 majorRadius:(float)a5 minorRadius:(float)a6 iterations:(unsigned int)a7;
- (void).cxx_destruct;

@end
