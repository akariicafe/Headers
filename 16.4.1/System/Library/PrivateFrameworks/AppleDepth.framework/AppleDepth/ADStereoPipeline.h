@class ADEspressoStereoInferenceDescriptor, ADNetworkProvider, ADStereoPipelineParameters;

@interface ADStereoPipeline : NSObject {
    ADNetworkProvider *_networkProvider;
    ADEspressoStereoInferenceDescriptor *_inferenceDesc;
    long long _prioritization;
}

@property (copy, nonatomic) ADStereoPipelineParameters *pipelineParameters;
@property (readonly, nonatomic) unsigned long long stereoImagesAlignment;
@property (readonly, nonatomic) BOOL shouldPreProcessColorInputs;

- (void).cxx_destruct;
- (id)inferenceDescriptor;
- (id)initWithInputAlignment:(unsigned long long)a0 andPrioritization:(long long)a1;
- (long long)adjustForEngine:(unsigned long long)a0;
- (id)initWithInputAlignment:(unsigned long long)a0 prioritization:(long long)a1 andParameters:(id)a2;
- (long long)preProcessColorInput:(struct __CVBuffer { } *)a0 toBuffer:(struct __CVBuffer { } *)a1;

@end
