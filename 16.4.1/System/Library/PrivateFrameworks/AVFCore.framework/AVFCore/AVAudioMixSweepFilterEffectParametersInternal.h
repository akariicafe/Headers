@interface AVAudioMixSweepFilterEffectParametersInternal : NSObject {
    unsigned int minimumCutOffFrequency;
    unsigned int maximumCutOffFrequency;
    float bypassThreshold;
    float sweepValue;
}

@end
