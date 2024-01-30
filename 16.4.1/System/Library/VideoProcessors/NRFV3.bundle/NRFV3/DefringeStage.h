@class VideoDefringingTuningParameters, FigMetalContext;
@protocol MTLComputePipelineState;

@interface DefringeStage : NSObject {
    FigMetalContext *_metalContext;
    id<MTLComputePipelineState> _pipelineStates[2];
    VideoDefringingTuningParameters *_tuningParameters;
}

+ (int)prewarmShaders:(id)a0 tuningParameters:(id)a1;

- (int)_compileShaders;
- (id)initWithMetalContext:(id)a0;
- (void).cxx_destruct;
- (void)_collapseFilteredChroma:(id)a0 usingInputDown:(id)a1 inputUp:(id)a2 into:(id)a3;
- (void)_copyFromTexture:(id)a0 toTexture:(id)a1;
- (void)_defringeLuma:(id)a0 chroma:(id)a1 into:(id)a2;
- (id)_functionNameForProgram:(int)a0;
- (int)defringePyramid:(id)a0 outputPyramid:(id)a1 chromaScratch:(id)a2 tuningParameters:(id)a3;

@end
