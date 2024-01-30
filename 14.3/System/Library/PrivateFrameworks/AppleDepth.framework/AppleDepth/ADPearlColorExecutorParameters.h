@class ADPearlColorPipelineParameters;

@interface ADPearlColorExecutorParameters : ADExecutorParameters

@property (readonly, retain, nonatomic) ADPearlColorPipelineParameters *pipelineParameters;

- (void).cxx_destruct;
- (id)initForPipeline:(id)a0;

@end
