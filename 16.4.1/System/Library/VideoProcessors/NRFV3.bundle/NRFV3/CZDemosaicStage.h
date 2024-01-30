@class CZDemosaicShader, FigMetalContext;

@interface CZDemosaicStage : NSObject {
    CZDemosaicShader *_shader;
}

@property (readonly, nonatomic) FigMetalContext *metal;

- (id)initWithMetalContext:(id)a0;
- (void).cxx_destruct;
- (int)getDemosaicConfigForInputFrameMetadata:(id)a0 demosaicConfig:(struct { float x0; BOOL x1; } *)a1;
- (int)runWithInputTex:(id)a0 inputMetadata:(id)a1 firstPix:(int)a2 outputRGBATex:(id)a3;

@end
