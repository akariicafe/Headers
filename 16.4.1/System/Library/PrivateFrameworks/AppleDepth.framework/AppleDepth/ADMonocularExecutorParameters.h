@class ADMonocularPipelineParameters;

@interface ADMonocularExecutorParameters : ADExecutorParameters

@property (readonly, retain, nonatomic) ADMonocularPipelineParameters *pipelineParameters;

- (void).cxx_destruct;
- (id)initForPipeline:(id)a0;

@end
