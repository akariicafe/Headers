@class GainValueArray, NSMutableArray, PatchBasedFusionParametersLUTs;

@interface FusionPlist : NSObject {
    NSMutableArray *bands;
    NSMutableArray *toneMapSmoothingBands;
    BOOL preWarpInputs;
    float grayGhostingCutoff;
    float grayGhostingEV0EVMDifferenceThreshold;
    float grayGhostingEV0WeightThreshold;
    float grayGhostingClippingThreshold;
    BOOL enableMotionDetection;
    float motionDetectionClippingCutoffHigh;
    float motionDetectionClippingCutoffLow;
    float motionDetectionSifrEitCutoffHigh;
    float motionDetectionSifrEitCutoffLow;
    float motionDetectionGradientCutoffHigh;
    float motionDetectionGamma;
    float motionDetectionMotionThreshold;
    float motionDetectionMotionThresholdStaticScene;
    float lensShadingFactor;
    GainValueArray *lensShadingFactorLUT;
    int hybridRegistrationMode;
    GainValueArray *shadowDenseBlendStrength;
    GainValueArray *nonShadowDenseBlendStrength;
    BOOL enablePatchBasedFusion;
    PatchBasedFusionParametersLUTs *patchBasedFusionParametersLUTs;
    float blackAdaptiveBlurBoost;
    BOOL enableStationaryFusion;
}

+ (void)initialize;

- (void)applyOverrides;
- (void).cxx_destruct;
- (id)init;

@end
