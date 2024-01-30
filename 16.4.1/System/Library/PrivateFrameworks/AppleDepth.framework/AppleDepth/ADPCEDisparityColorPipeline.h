@class ADEspressoPCEDisparityColorInferenceDescriptor, ADNetworkProvider, ADPCEDisparityColorPipelineParameters;
@protocol MTLComputePipelineState, MTLDevice;

@interface ADPCEDisparityColorPipeline : NSObject {
    ADNetworkProvider *_networkProvider;
    ADEspressoPCEDisparityColorInferenceDescriptor *_inferenceDesc;
    id<MTLDevice> _metalDevice;
    id<MTLComputePipelineState> _preprocessPipelineForRawPCE[4];
    id<MTLComputePipelineState> _preprocessPipelineForFloatPCE[4];
    id<MTLComputePipelineState> _postptocessPipeline;
}

@property (copy, nonatomic) ADPCEDisparityColorPipelineParameters *pipelineParameters;

- (id)initWithParameters:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initForInputSource:(unsigned long long)a0 metalDevice:(id)a1;
- (long long)encodeDisparityPostprocessingToCommandBuffer:(id)a0 input:(id)a1 output:(id)a2;
- (long long)encodeDisparityPreprocessingToCommandBuffer:(id)a0 input:(id)a1 normalizationMultiplier:(float)a2 normalizationOffset:(float)a3 invalidValue:(unsigned short)a4 rotation:(long long)a5 output:(id)a6;
- (id)inferenceDescriptor;
- (id)initWithParameters:(id)a0 inputSource:(unsigned long long)a1;
- (long long)adjustForEngine:(unsigned long long)a0;
- (float)disparityScaleForLayout:(unsigned long long)a0;
- (id)initForInputSource:(unsigned long long)a0;
- (id)initWithParameters:(id)a0 inputSource:(unsigned long long)a1 metalDevice:(id)a2;
- (long long)rebuildMetalPreprocessingKernels;

@end
