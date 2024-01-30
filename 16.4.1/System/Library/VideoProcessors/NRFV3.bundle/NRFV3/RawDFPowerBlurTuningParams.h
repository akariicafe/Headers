@interface RawDFPowerBlurTuningParams : NSObject {
    struct RawDFPowerBlurTuningParamsSpecific { BOOL enabled; unsigned short radius; float colorMatchThreshold; float highFreqNoiseThreshold; } defaultTuning;
    struct RawDFPowerBlurTuningParamsSpecific { BOOL enabled; unsigned short radius; float colorMatchThreshold; float highFreqNoiseThreshold; } quadraTuning;
}

- (int)readPlist:(id)a0;
- (BOOL)isEnabledForFrameType:(int)a0;

@end
