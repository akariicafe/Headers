@class GainMapShaders, FigMetalContext;

@interface GainMapStage : NSObject {
    FigMetalContext *_metalContext;
    GainMapShaders *_shaders;
}

+ (int)prewarmShaders:(id)a0;

- (id)initWithMetalContext:(id)a0;
- (void).cxx_destruct;
- (int)runWithInput:(id)a0 output:(id)a1 minThreshold:(float)a2 maxThreshold:(float)a3 inputIsLinear:(BOOL)a4 inputScaling:(float)a5;

@end
