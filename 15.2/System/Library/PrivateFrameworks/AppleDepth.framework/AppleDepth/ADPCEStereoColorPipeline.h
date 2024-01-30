@class ADPCEStereoColorPipelineParameters;

@interface ADPCEStereoColorPipeline : ADPCEDisparityColorPipeline

@property (copy, nonatomic) ADPCEStereoColorPipelineParameters *pipelineParameters;

- (id)initWithParameters:(id)a0;
- (id)inferenceDescriptor;
- (id)initForInputSource:(unsigned long long)a0;
- (id)initWithParameters:(id)a0 inputSource:(unsigned long long)a1;

@end
