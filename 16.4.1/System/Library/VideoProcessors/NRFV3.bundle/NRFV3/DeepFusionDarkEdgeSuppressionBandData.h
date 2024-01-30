@class GainValueArray;

@interface DeepFusionDarkEdgeSuppressionBandData : NSObject {
    GainValueArray *darkEdgeSupressionLumaThresholdHigh;
    GainValueArray *darkEdgeSupressionLumaThresholdLow;
    GainValueArray *darkEdgeSupressionLumaDiffThreshold;
}

- (void).cxx_destruct;

@end
