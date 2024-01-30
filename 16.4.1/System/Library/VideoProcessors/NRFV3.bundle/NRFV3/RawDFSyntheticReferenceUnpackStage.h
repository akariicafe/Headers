@class RawDFSyntheticReferenceUnpackShaders, FigMetalContext;

@interface RawDFSyntheticReferenceUnpackStage : NSObject {
    FigMetalContext *_metal;
    RawDFSyntheticReferenceUnpackShaders *_shaders;
}

+ (int)prewarmShaders:(id)a0;

- (id)initWithMetalContext:(id)a0;
- (void).cxx_destruct;
- (int)unpackSyntheticReference:(id)a0 toOutputTex:(id)a1;

@end
