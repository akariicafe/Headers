@class MLPipeline;

@interface MLPipelineRegressor : MLRegressor

@property (retain) MLPipeline *engine;
@property (readonly) MLPipeline *pipeline;

- (id)initWithEngine:(id)a0 description:(id)a1 error:(id *)a2;
- (id)regress:(id)a0 options:(id)a1 error:(id *)a2;
- (void).cxx_destruct;

@end
