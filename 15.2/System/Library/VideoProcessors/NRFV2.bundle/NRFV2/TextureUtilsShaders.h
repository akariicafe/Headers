@protocol MTLComputePipelineState;

@interface TextureUtilsShaders : NSObject {
    id<MTLComputePipelineState> _fillTexturePaddedArea;
    id<MTLComputePipelineState> _fillTexturePaddedArea10BitPacked_Luma;
    id<MTLComputePipelineState> _fillTexturePaddedArea10BitPacked_Chroma;
    id<MTLComputePipelineState> _kernelPack10BitY;
    id<MTLComputePipelineState> _kernelPack10BitCbCr;
    id<MTLComputePipelineState> _copyTexture;
}

- (void).cxx_destruct;
- (id)initWithMetal:(id)a0;

@end
