@class GainValueArray, DeepFusionTuningImageParameters;

@interface DeepFusionNoiseTuningParameters : NSObject {
    GainValueArray *LSCAmpFactor;
    GainValueArray *ev0FusionTarget;
    GainValueArray *longFusionTarget;
    GainValueArray *lumaPowerDenom;
    DeepFusionTuningImageParameters *ref;
    DeepFusionTuningImageParameters *sl;
}

- (void).cxx_destruct;
- (int)readPlist:(id)a0;

@end
