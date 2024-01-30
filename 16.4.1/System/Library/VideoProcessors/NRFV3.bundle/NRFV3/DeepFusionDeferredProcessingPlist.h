@class GainValueArray, NSArray;

@interface DeepFusionDeferredProcessingPlist : NSObject {
    float modelSwitchEITThreshold;
    float denseRegistrationMotionScoreThreshold;
    GainValueArray *EV0BlurThreshold;
    GainValueArray *filteredChromaAlpha;
    NSArray *addBackModulationBands;
    NSArray *noiseTuning;
    NSArray *fusionData;
    NSArray *highlightTuning;
    NSArray *chromaBoostMaskBands;
    NSArray *desaturationData;
    NSArray *haloSuppressionBands;
    NSArray *darkEdgeSupressionBands;
}

- (void).cxx_destruct;
- (int)readPlist:(id)a0;
- (id)addBackModulationBandsForModel:(int)a0;
- (id)chromaBoostBandsForModel:(int)a0 isSyntheticLongWithRealLong:(BOOL)a1;
- (id)darkEdgeSuppressionBandsForModel:(int)a0;
- (id)desaturationDataForModel:(int)a0;
- (id)fusionDataForModel:(int)a0;
- (id)haloSuppressionBandsForModel:(int)a0;
- (int)modelForEIT:(float)a0;
- (id)noiseTuningForModel:(int)a0;
- (int)readBandData:(id)a0 into:(id)a1;
- (int)readChromaBoostBandData:(id)a0 into:(id)a1 key:(id)a2;
- (int)readDarkEdgeSuppressionBandData:(id)a0 into:(id)a1;
- (int)readDesaturationData:(id)a0 into:(id)a1;
- (int)readHaloSuppressionBandData:(id)a0 into:(id)a1;

@end
