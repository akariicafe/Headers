@class GainValueArray, NSMutableArray;

@interface DenoiseAndSharpeningTuning : NSObject {
    NSMutableArray *bands;
    GainValueArray *ev0FrameDenoiseBoost;
    GainValueArray *shortFrameDenoiseBoost;
    GainValueArray *lowFusionNoiseBoost;
    GainValueArray *lowFusionNoiseBoostPerFrame;
    GainValueArray *lensShadeFactor;
    GainValueArray *loGOffsetRangeMax;
    GainValueArray *loGOffsetScale;
    BOOL scaleLensShadingByCropFactor;
    float radialSharpnessKneeStart;
    float radialSharpnessKneeEnd;
    float radialTexturenessKneeStart;
    float radialTexturenessKneeEnd;
    float radialDenoiseKneeStart;
    float radialDenoiseKneeEnd;
}

- (id)init;
- (void).cxx_destruct;

@end
