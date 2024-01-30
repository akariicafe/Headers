@class ADEspressoMonocularV2InferenceDescriptor, ADMonocularV2PipelineParameters, ADNetworkProvider;

@interface ADMonocularV2Pipeline : NSObject {
    ADNetworkProvider *_networkProvider;
    ADEspressoMonocularV2InferenceDescriptor *_inferenceDesc;
}

@property (copy, nonatomic) ADMonocularV2PipelineParameters *pipelineParameters;

- (void).cxx_destruct;
- (id)inferenceDescriptor;
- (id)initWithInputPrioritization:(long long)a0 andParameters:(id)a1;
- (id)initWithInputPrioritization:(long long)a0;
- (long long)adjustForEngine:(unsigned long long)a0;
- (long long)postProcessDisparity:(struct __CVBuffer { } *)a0 output:(struct __CVBuffer { } *)a1;

@end
