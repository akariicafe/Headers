@protocol MTLComputePipelineState;

@interface GlobalDistortionCorrectionShaders : NSObject {
    id<MTLComputePipelineState> _kernelGlobalDistortionCorrectionHWCSC;
    id<MTLComputePipelineState> _kernelGlobalDistortionCorrectionCopy;
    id<MTLComputePipelineState> _kernelPack10BitY;
    id<MTLComputePipelineState> _kernelPack10BitCbCr;
    id<MTLComputePipelineState> _kernelGlobalDistortionCorrectionSWCSCtoLinearRGB;
    id<MTLComputePipelineState> _kernelGlobalDistortionCorrectionLinearRGB;
}

- (void).cxx_destruct;
- (id)initWithMetal:(id)a0;

@end
