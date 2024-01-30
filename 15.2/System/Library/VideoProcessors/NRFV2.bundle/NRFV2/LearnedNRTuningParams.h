@class GainValueArray;

@interface LearnedNRTuningParams : NSObject {
    GainValueArray *readNoiseModulationTuning;
    GainValueArray *shotNoiseModulationTuning;
    GainValueArray *lumaAddBackTuning;
    GainValueArray *lumaAddBackBand0Tuning;
    GainValueArray *lumaAddBackClipToSNRTuning;
}

- (void).cxx_destruct;
- (int)readPlist:(id)a0;

@end
