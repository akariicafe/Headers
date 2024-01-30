@class RawDFDownsampleShaders, FigMetalContext;

@interface RawDFDownsampleStage : NSObject {
    FigMetalContext *_metal;
    RawDFDownsampleShaders *_shaders;
}

+ (int)prewarmShaders:(id)a0;

- (id)initWithMetalContext:(id)a0;
- (void).cxx_destruct;
- (int)generateWithInputTexture:(id)a0 withRequests:(id)a1;

@end
