@class ADEspressoPCEDisparityColorInferenceDescriptor, ADNetworkProvider, ADPCEDisparityColorPipelineParameters;
@protocol MTLComputePipelineState, MTLDevice;

@interface ADPCEDisparityColorPipeline : NSObject {
    ADNetworkProvider *_networkProvider;
    ADEspressoPCEDisparityColorInferenceDescriptor *_inferenceDesc;
    id<MTLDevice> _metalDevice;
    id<MTLComputePipelineState> _preprocessPipelineForRawPCE[4];
    id<MTLComputePipelineState> _preprocessPipelineForFloatPCE[4];
}

@property (copy, nonatomic) ADPCEDisparityColorPipelineParameters *pipelineParameters;

- (void).cxx_destruct;
- (id)init;
- (id)initWithParameters:(id)a0;
- (id)initForInputSource:(unsigned long long)a0 metalDevice:(id)a1;
- (long long)encodeDisparityPreprocessingToCommandBuffer:(id)a0 input:(id)a1 normalizationMultiplier:(float)a2 normalizationOffset:(float)a3 invalidValue:(unsigned short)a4 rotation:(long long)a5 output:(id)a6;
- (id)inferenceDescriptor;
- (id)initForInputSource:(unsigned long long)a0;
- (id)initWithParameters:(id)a0 inputSource:(unsigned long long)a1;
- (long long)rebuildMetalPreprocessingKernels;
- (long long)adjustForEngine:(unsigned long long)a0;
- (id)initWithParameters:(id)a0 inputSource:(unsigned long long)a1 metalDevice:(id)a2;
- (long long)postProcessDisparity:(struct __CVBuffer { } *)a0 output:(struct __CVBuffer { } *)a1;

@end
