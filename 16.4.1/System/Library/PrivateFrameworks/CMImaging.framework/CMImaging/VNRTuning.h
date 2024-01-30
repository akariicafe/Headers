@class GainValueArray, NSArray;

@interface VNRTuning : NSObject {
    GainValueArray *_deghostPatchSigmaLumaGVA;
    GainValueArray *_deghostPatchSigmaChromaGVA;
    GainValueArray *_deghostBoostFactorGVA;
    GainValueArray *_fusionStrengthLumaGVA;
    GainValueArray *_fusionStrengthChromaGVA;
    GainValueArray *_ghostAttenuationLumaGVA;
    GainValueArray *_ghostAttenuationBreakthroughSigmaLumaGVA;
    GainValueArray *_ghostAttenuationChromaGVA;
    GainValueArray *_ghostAttenuationBreakthroughSigmaChromaGVA;
    float _deghostPatchSigmaLuma;
    float _deghostPatchSigmaChroma;
    float _deghostBoostFactor;
    float _fusionStrengthLuma;
    float _fusionStrengthChroma;
    float _ghostAttenuationLuma;
    float _ghostAttenuationBreakthroughSigmaLuma;
    float _ghostAttenuationChroma;
    float _ghostAttenuationBreakthroughSigmaChroma;
    NSArray *_lumaBands;
    NSArray *_chromaBands;
}

- (void).cxx_destruct;
- (int)updateWithGain:(float)a0;
- (id)initWithTuningParamsDict:(id)a0;

@end
