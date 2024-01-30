@class OutliersRemovalShaders, FigMetalContext;

@interface OutliersRemovalStage : NSObject {
    FigMetalContext *_metal;
    OutliersRemovalShaders *_shaders;
}

+ (int)prewarmShaders:(id)a0;

- (id)initWithMetalContext:(id)a0;
- (void).cxx_destruct;
- (int)runWithInput:(id)a0 output:(id)a1 gamma:(float)a2;

@end
