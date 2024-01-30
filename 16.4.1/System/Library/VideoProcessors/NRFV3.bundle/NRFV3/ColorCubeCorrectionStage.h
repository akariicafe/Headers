@class SingleColorCubeCorrectionStage, FigMetalContext;

@interface ColorCubeCorrectionStage : NSObject {
    FigMetalContext *_metal;
    SingleColorCubeCorrectionStage *fixes[4];
}

+ (int)prewarmShaders:(id)a0;

- (id)init:(id)a0;
- (void).cxx_destruct;
- (int)runOnLuma:(id)a0 andChroma:(id)a1 outChroma:(id)a2 colorCubeFixType:(int)a3;
- (int)runOnLuma:(id)a0 andChroma:(id)a1 withMask:(id)a2 outChroma:(id)a3 colorCubeFixType:(int)a4;
- (int)setMaskedSkyCubeVersion:(int)a0;

@end
