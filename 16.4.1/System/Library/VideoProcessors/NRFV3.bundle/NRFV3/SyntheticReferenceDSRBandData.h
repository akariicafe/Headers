@class GainValueArray;

@interface SyntheticReferenceDSRBandData : NSObject {
    GainValueArray *ev0DeepShadowSmoothStepStart;
    GainValueArray *ev0DeepShadowSmoothStepEnd;
    GainValueArray *edgeMatchThresholdStart;
    GainValueArray *edgeMatchThresholdEnd;
    GainValueArray *clrMatchThresholdStart;
    GainValueArray *clrMatchThresholdEnd;
    GainValueArray *shadowSigmaCorrectionNode0;
    GainValueArray *shadowSigmaCorrectionNode1;
    GainValueArray *edgeThresholdStart;
    GainValueArray *edgeThresholdEnd;
    GainValueArray *edgeGhostBoost;
}

- (void).cxx_destruct;

@end
