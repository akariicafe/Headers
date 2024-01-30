@protocol MTLComputePipelineState;

@interface GlobalDistortionCorrectionShaders : NSObject {
    id<MTLComputePipelineState> _kernelGlobalDistortionCorrectionHWCSC;
    id<MTLComputePipelineState> _kernelGlobalDistortionCorrectionCopy;
    id<MTLComputePipelineState> _kernelPack10BitY;
    id<MTLComputePipelineState> _kernelPack10BitCbCr;
    id<MTLComputePipelineState> _kernelGlobalDistortionCorrectionSWCSCtoLinearRGB;
    id<MTLComputePipelineState> _kernelGlobalDistortionCorrectionLinearRGB;
}

- (id)initWithMetal:(id)a0;
- (void).cxx_destruct;

@end
