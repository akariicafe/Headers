@interface DeepFusionHighlightTuning : NSObject {
    float redBoost;
    float blueBoost;
    float greenBoost;
    float saturationSlope;
    float saturationMid;
    float pixelRecalculationLimit;
    float recalcAlphaSlope;
    float recalcAlphaMid;
}

- (int)readPlist:(id)a0;

@end
