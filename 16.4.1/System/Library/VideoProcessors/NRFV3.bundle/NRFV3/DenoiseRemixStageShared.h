@class NSMutableArray;

@interface DenoiseRemixStageShared : NSObject {
    struct { struct { int index; BOOL lumaFP16; BOOL chromaFP16; struct DenoiseRemixStageOptions { int lgaAlgorithm; BOOL enableBandZeroDenoising; BOOL enableBilateralRegression; BOOL enableLoGOffset; BOOL enableLowVarSharpening; BOOL enableNoiseMap; BOOL enableGdFlatness; BOOL enableDefringingStage; BOOL enableGreenGhostBrightLightStage; } options; } entries[100]; int count; } _cache;
    NSMutableArray *_denoiseShaders;
}

+ (id)sharedInstance;
+ (void)releaseSharedInstance;
+ (id)getSharedInstanceOrRelease:(BOOL)a0;

- (id)init;
- (void).cxx_destruct;
- (id)getShaders:(id)a0 lumaFP16:(BOOL)a1 chromaFP16:(BOOL)a2 options:(const struct DenoiseRemixStageOptions { int x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; } *)a3;

@end
