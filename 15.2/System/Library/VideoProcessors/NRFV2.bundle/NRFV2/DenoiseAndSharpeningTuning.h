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
    float radialSharpnessKneeStart;
    float radialSharpnessKneeEnd;
    float radialTexturenessKneeStart;
    float radialTexturenessKneeEnd;
    float radialDenoiseKneeStart;
    float radialDenoiseKneeEnd;
}

- (void).cxx_destruct;
- (id)init;

@end
