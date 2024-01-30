@class ADEspressoStereoInferenceDescriptor, ADNetworkProvider, ADStereoPipelineParameters;

@interface ADStereoPipeline : NSObject {
    ADNetworkProvider *_networkProvider;
    ADEspressoStereoInferenceDescriptor *_inferenceDesc;
    long long _prioritization;
}

@property (copy, nonatomic) ADStereoPipelineParameters *pipelineParameters;
@property (readonly, nonatomic) unsigned long long stereoImagesAlignment;
@property (readonly, nonatomic) BOOL shouldPreProcessColorInputs;

- (id)inferenceDescriptor;
- (id)initWithInputAlignment:(unsigned long long)a0 andPrioritization:(long long)a1;
- (void).cxx_destruct;
- (long long)adjustForEngine:(unsigned long long)a0;
- (long long)preProcessColorInput:(struct __CVBuffer { } *)a0 toBuffer:(struct __CVBuffer { } *)a1;
- (void)convertRGBAFloat:(struct __CVBuffer { } *)a0 toPlanar:(struct __CVBuffer { } *)a1;
- (id)initWithInputAlignment:(unsigned long long)a0 prioritization:(long long)a1 andParameters:(id)a2;

@end
