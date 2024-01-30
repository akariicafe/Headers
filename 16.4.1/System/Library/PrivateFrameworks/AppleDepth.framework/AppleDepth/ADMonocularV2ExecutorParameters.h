@class ADMonocularV2PipelineParameters;

@interface ADMonocularV2ExecutorParameters : ADExecutorParameters

@property (readonly, retain, nonatomic) ADMonocularV2PipelineParameters *pipelineParameters;

- (id)init;
- (void).cxx_destruct;
- (id)initForPipeline:(id)a0;

@end
