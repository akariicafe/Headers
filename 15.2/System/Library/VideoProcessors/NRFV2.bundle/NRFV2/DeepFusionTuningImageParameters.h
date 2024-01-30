@class GainValueArray;

@interface DeepFusionTuningImageParameters : NSObject {
    GainValueArray *globalNoiseFactor;
    GainValueArray *lumaMaxNoise;
}

- (void).cxx_destruct;
- (int)readPlist:(id)a0;

@end
