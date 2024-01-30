@class CommonPlist, ToneMappingPlist, NSDictionary, VideoDefringingTuningParameters, FusionPlist, FrameSelectionPlist, DenoiseAndSharpeningPlist, GreenGhostBrightLightTuningParams, SyntheticReferencePlist, NoiseModelPlist, SemanticStylesPlist, GreenGhostLowLightTuningParams, GainMapPlist;

@interface NRFPlist : NSObject {
    CommonPlist *common;
    DenoiseAndSharpeningPlist *denoiseAndSharpening;
    FusionPlist *fusion;
    NoiseModelPlist *noiseModel;
    ToneMappingPlist *toneMapping;
    NSDictionary *syntheticLong;
    SyntheticReferencePlist *syntheticReference;
    DenoiseAndSharpeningPlist *proxyAssetEV0RefDenoising;
    DenoiseAndSharpeningPlist *proxyAssetEVMRefDenoising;
    FrameSelectionPlist *frameSelection;
    GainMapPlist *gainMap;
    VideoDefringingTuningParameters *defringingTuningParameters;
    SemanticStylesPlist *semanticStyles;
    GreenGhostBrightLightTuningParams *greenGhostBrightLightTuning;
    GreenGhostLowLightTuningParams *greenGhostLowLightTuning;
}

- (void).cxx_destruct;

@end
