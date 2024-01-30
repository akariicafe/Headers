@class ADPearlColorPipelineParameters, ADNetworkProvider, ADEspressoPearlColorInferenceDescriptor;

@interface ADPearlColorPipeline : NSObject {
    ADNetworkProvider *_networkProvider;
    ADEspressoPearlColorInferenceDescriptor *_inferenceDesc;
}

@property (copy, nonatomic) ADPearlColorPipelineParameters *pipelineParameters;

- (id)inferenceDescriptor;
- (id)init;
- (void).cxx_destruct;
- (id)initWithParameters:(id)a0;
- (long long)adjustForEngine:(unsigned long long)a0;
- (long long)filterDisparity:(struct __CVBuffer { } *)a0;
- (long long)postProcessDisparity:(struct __CVBuffer { } *)a0 output:(struct __CVBuffer { } *)a1;

@end
