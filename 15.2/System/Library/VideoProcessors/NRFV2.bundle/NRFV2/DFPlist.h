@class VideoDefringingTuningParameters, DenoiseAndSharpeningPlist, SemanticStylesPlist, SyntheticLongPlist, NoiseModelPlist, DeepFusionDeferredProcessingPlist, ToneMappingPlist;

@interface DFPlist : NSObject {
    ToneMappingPlist *toneMapping;
    SemanticStylesPlist *semanticStyles;
    SyntheticLongPlist *syntheticLong;
    NoiseModelPlist *noiseModel;
    DenoiseAndSharpeningPlist *denoiseAndSharpening;
    DeepFusionDeferredProcessingPlist *deferredProcessing;
    VideoDefringingTuningParameters *defringingTuningParameters;
}

- (void).cxx_destruct;

@end
