@class GainValueArray, NSMutableArray;

@interface SyntheticReferencePlist : NSObject {
    NSMutableArray *highlightRecoveryBands;
    NSMutableArray *deepShadowRecoveryBands;
    int grayGhostingDetectionBand;
    float grayGhostingCutoff;
    float grayGhostingEV0EVMDifferenceThreshold;
    float grayGhostingEV0WeightThreshold;
    float grayGhostingClippingThreshold;
    float motionCutoff;
    float motionDetectionSifrEitCutoffHigh;
    float motionDetectionSifrEitCutoffLow;
    GainValueArray *syntheticReferencePedestal;
}

- (void).cxx_destruct;
- (int)readPlist:(id)a0;
- (int)_readHighlightRecoveryBandData:(id)a0;
- (int)_readDeepShadowRecoveryBandData:(id)a0;

@end
