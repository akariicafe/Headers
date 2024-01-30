@class CommonPlist, ToneMappingPlist, VideoDefringingTuningParameters, FusionPlist, FrameSelectionPlist, DenoiseAndSharpeningPlist, GreenGhostBrightLightTuningParams, RawDFLumaSharpenTuningParams, ZimmerDEMTuningParams, SyntheticReferencePlist, RawDFPostDemosaicTuningParams, QDEMTuningParams, NoiseModelPlist, SemanticStylesPlist, RawDFPowerBlurTuningParams, GreenGhostLowLightTuningParams, GainMapPlist;

@interface NRFPlist : NSObject {
    CommonPlist *common;
    DenoiseAndSharpeningPlist *denoiseAndSharpening;
    FusionPlist *fusion;
    NoiseModelPlist *noiseModel;
    ToneMappingPlist *toneMapping;
    SyntheticReferencePlist *syntheticReference;
    DenoiseAndSharpeningPlist *proxyAssetEV0RefDenoising;
    DenoiseAndSharpeningPlist *proxyAssetEVMRefDenoising;
    FrameSelectionPlist *frameSelection;
    GainMapPlist *gainMap;
    VideoDefringingTuningParameters *defringingTuningParameters;
    SemanticStylesPlist *semanticStyles;
    GreenGhostBrightLightTuningParams *greenGhostBrightLightTuning;
    GreenGhostLowLightTuningParams *greenGhostLowLightTuning;
    RawDFPowerBlurTuningParams *powerBlurTuning;
    RawDFLumaSharpenTuningParams *lumaSharpenTuning;
    QDEMTuningParams *qdemTuning;
    ZimmerDEMTuningParams *zimmerDEMTuning;
    RawDFPostDemosaicTuningParams *postDemosaicTuning;
}

- (void).cxx_destruct;

@end
