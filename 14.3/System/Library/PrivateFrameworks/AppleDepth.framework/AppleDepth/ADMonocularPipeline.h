@class ADNetworkProvider, ADEspressoMonocularInferenceDescriptor, ADMonocularPipelineParameters, ADImageDescriptor;

@interface ADMonocularPipeline : NSObject {
    long long _prioritization;
    ADNetworkProvider *_networkProvider;
    ADEspressoMonocularInferenceDescriptor *_inferenceDesc;
    ADImageDescriptor *_processedDepthDesc;
    BOOL _isDenseDepthInverse;
}

@property (copy, nonatomic) ADMonocularPipelineParameters *pipelineParameters;

- (id)inferenceDescriptor;
- (void).cxx_destruct;
- (id)initWithInputPrioritization:(long long)a0 andParameters:(id)a1;
- (id)initWithInputPrioritization:(long long)a0;
- (id)processedDepthOutputDescriptor;
- (long long)postProcessWithDepth:(struct __CVBuffer { } *)a0 depthOutput:(struct __CVBuffer { } *)a1;

@end
