@class NSUUID, NUScript;

@interface NUJSRenderPipeline : NURenderPipeline {
    NUScript *_script;
    NSUUID *_identifier;
}

+ (id)extractFilterParams:(id)a0 withPipelineState:(id)a1 error:(out id *)a2;
+ (id)extractTransforms:(id)a0 inputImages:(id)a1 error:(out id *)a2;
+ (id)renderPipelineWithJavaScript:(id)a0;

- (id)_processedRenderNodeForComposition:(id)a0 input:(id)a1 pipelineState:(id)a2 error:(out id *)a3;
- (id)init;
- (void).cxx_destruct;
- (id)initWithScript:(id)a0;
- (void)setUpContext:(id)a0;
- (id)_pipelineFunctionInContext:(id)a0 error:(out id *)a1;
- (id)_pipelineFunctionWithJavaScript:(id)a0 sourceURL:(id)a1 context:(id)a2;
- (id)_processedRenderNodeForComposition:(id)a0 input:(id)a1 pipelineState:(id)a2 context:(id)a3 error:(out id *)a4;

@end
