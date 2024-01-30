@protocol MTLLibrary, MTLDevice, MTLComputePipelineState;

@interface VCPCorrelation : NSObject {
    id<MTLDevice> _device;
    id<MTLLibrary> _mtlLibrary;
    id<MTLComputePipelineState> _correlationKernel;
}

- (id)initWithDevice:(id)a0;
- (void).cxx_destruct;
- (int)configureGPU;
- (int)encodeToCommandBuffer:(id)a0 firstInput:(id)a1 secondInput:(id)a2 correlation:(id)a3;

@end
