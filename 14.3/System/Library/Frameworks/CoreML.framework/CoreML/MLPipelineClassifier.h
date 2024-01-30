@class MLPipeline;

@interface MLPipelineClassifier : MLClassifier

@property (retain) MLPipeline *engine;
@property (readonly) MLPipeline *pipeline;

- (void).cxx_destruct;
- (id)initWithEngine:(id)a0 interface:(id)a1 metadata:(id)a2 configuration:(id)a3 error:(id *)a4;
- (id)classify:(id)a0 options:(id)a1 error:(id *)a2;

@end
