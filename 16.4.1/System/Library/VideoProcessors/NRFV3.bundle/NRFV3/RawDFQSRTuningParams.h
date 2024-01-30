@class NSArray;

@interface RawDFQSRTuningParams : NSObject {
    float focusDifferenceThreshold;
    float homographyGatingThreshold;
    float gyroScoreThreshold;
    float relativeSharpnessThreshold;
    struct { float sifrEitCutoffHigh; float sifrEitCutoffLow; float clippingCutoffHigh; float clippingCutoffLow; float gradientCutoffHigh; float gamma; float motionCutoff; float tileMotionThreshold; float allowedMotionTilePercentage; BOOL useFullImage; } motionDetectionParams;
    NSArray *staticFusionThresholds;
    NSArray *motionFusionThresholds;
    struct { float srHighSnrSmoothStepStart; float srHighSnrSmoothStepEnd; float quadraBrightnessSmoothStepStart; float quadraBrightnessSmoothStepEnd; float quadraSRMatchThreshold; } highlightRecoveryParams;
}

- (void).cxx_destruct;
- (int)readPlist:(id)a0;
- (int)readBandFusionThresholdsFromDict:(id)a0 toArray:(id *)a1;

@end
