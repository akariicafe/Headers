@class GainValueArray;

@interface SyntheticLongBandData : NSObject {
    GainValueArray *thresholdLuma;
    GainValueArray *thresholdChroma;
    GainValueArray *edgeThresholdLuma;
    GainValueArray *edgeThresholdChroma;
    GainValueArray *adaptiveBlackFusionBoostThreshold;
    GainValueArray *adaptiveFusionReductionThreshold;
}

- (void).cxx_destruct;

@end
