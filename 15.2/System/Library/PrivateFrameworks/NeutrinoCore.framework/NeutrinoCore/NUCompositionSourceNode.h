@class NURenderPipeline, NUComposition;

@interface NUCompositionSourceNode : NUSourceNode {
    NURenderPipeline *_renderPipeline;
    NUComposition *_composition;
    struct { long long width; long long height; } _pixelSize;
}

- (id)initWithSettings:(id)a0;
- (BOOL)load:(out id *)a0;
- (void).cxx_destruct;
- (id)_evaluateImagePropertiesWithSourceOptions:(id)a0 error:(out id *)a1;
- (id)_evaluateImageGeometryWithSourceOptions:(id)a0 error:(out id *)a1;
- (id)preparedNodeWithSourceContainer:(id)a0 pipelineState:(id)a1 pipelineSettings:(id)a2 sourceSettings:(id)a3 error:(out id *)a4;
- (BOOL)shouldCacheNodeForPipelineState:(id)a0;
- (struct { long long x0; long long x1; })pixelSizeWithSourceOptions:(id)a0;
- (id)_evaluateImage:(out id *)a0;
- (id)initWithComposition:(id)a0 renderPipeline:(id)a1 settings:(id)a2;
- (id)_compositionRenderNodeForPipelineState:(id)a0 error:(out id *)a1;

@end
