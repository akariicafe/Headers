@class DeepFusionDeferredProcessingPlist, ToneMappingPlist, VideoDefringingTuningParameters, RawDFLumaSharpenTuningParams, DenoiseAndSharpeningPlist, RawDFQSRTuningPlist, SyntheticLongConfigPlist, GreenGhostBrightLightTuningParams, SyntheticReferencePlist, ZimmerDEMTuningParams, RawDFNetworkStageTuningParams, SemanticStylesPlist, NoiseModelPlist, RawDFPowerBlurTuningParams, QDEMTuningParams, RawDFPostDemosaicTuningParams, GainMapPlist;

@interface DFPlist : NSObject {
    ToneMappingPlist *toneMapping;
    SemanticStylesPlist *semanticStyles;
    SyntheticLongConfigPlist *syntheticLong;
    SyntheticReferencePlist *syntheticReference;
    NoiseModelPlist *noiseModel;
    DenoiseAndSharpeningPlist *denoiseAndSharpening;
    DeepFusionDeferredProcessingPlist *deferredProcessing;
    VideoDefringingTuningParameters *defringingTuningParameters;
    GreenGhostBrightLightTuningParams *greenGhostBrightLightTuning;
    RawDFNetworkStageTuningParams *rawDFNetworkStageParameters;
    RawDFPowerBlurTuningParams *powerBlurTuning;
    RawDFLumaSharpenTuningParams *lumaSharpenTuning;
    RawDFQSRTuningPlist *qsrTuning;
    QDEMTuningParams *qdemTuning;
    ZimmerDEMTuningParams *zimmerDEMTuning;
    GainMapPlist *gainMap;
    RawDFPostDemosaicTuningParams *postDemosaicTuning;
}

- (void).cxx_destruct;

@end
