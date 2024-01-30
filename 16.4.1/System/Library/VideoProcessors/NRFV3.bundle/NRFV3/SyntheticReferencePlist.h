@class GainValueArray, NSMutableArray;

@interface SyntheticReferencePlist : NSObject {
    NSMutableArray *highlightRecoveryBands;
    NSMutableArray *deepShadowRecoveryBands;
    int grayGhostingDetectionBand;
    float grayGhostingCutoff;
    float grayGhostingEV0EVMDifferenceThreshold;
    float grayGhostingEV0WeightThreshold;
    float grayGhostingClippingThreshold;
    GainValueArray *syntheticReferencePedestal;
    struct { float sifrEitCutoffHigh; float sifrEitCutoffLow; float clippingCutoffHigh; float clippingCutoffLow; float gradientCutoffHigh; float gamma; float motionCutoff; float tileMotionThreshold; float allowedMotionTilePercentage; BOOL useFullImage; } motionDetectionTuningParams;
}

- (void).cxx_destruct;
- (int)readPlist:(id)a0;
- (int)_readHighlightRecoveryBandData:(id)a0;
- (int)_readDeepShadowRecoveryBandData:(id)a0;

@end
