@class GainValueArray;

@interface BandDataDAS : NSObject {
    GainValueArray *chromaDenoiseLumaThresholdGain;
    GainValueArray *chromaDenoiseChromaThresholdGain;
    GainValueArray *chromaDenoiseMixingCoeff;
    GainValueArray *lumaDenoiseThresholdGain;
    GainValueArray *lumaDenoiseMixingCoeff;
    GainValueArray *lumaSharpeningScalingOnSkin;
    GainValueArray *lumaDenoisingScalingOnSkin;
    GainValueArray *lumaSharpeningScalingOnSky;
    GainValueArray *lumaDenoisingScalingOnSky;
    GainValueArray *luma3x3SharpeningStrength;
    GainValueArray *lumaLowVarSharpeningStrength;
    GainValueArray *lumaLowVarDetailsLevel;
    GainValueArray *lumaDenoiseThresholdGainStaticScene;
    GainValueArray *lumaDenoiseMixingCoeffStaticScene;
    GainValueArray *lumaSharpeningScalingOnSkinStaticScene;
    GainValueArray *lumaDenoisingScalingOnSkinStaticScene;
    GainValueArray *luma3x3SharpeningStrengthStaticScene;
    GainValueArray *lumaLowVarSharpeningStrengthStaticScene;
    GainValueArray *lumaLowVarDetailsLevelStaticScene;
    GainValueArray *flatnessBoost;
    GainValueArray *flatnessThreshold;
    GainValueArray *gdFlatnessBoostMidtone;
    GainValueArray *gdFlatnessMidtoneValue;
    GainValueArray *gdFlatnessBoostShadow;
    GainValueArray *gdFlatnessBoostHighlight;
    GainValueArray *gdTexturenessThresholdLow;
    GainValueArray *gdTexturenessThresholdHigh;
    GainValueArray *gdTexturenessShadingFactor;
    GainValueArray *radialFlatnessBoost;
    GainValueArray *radialSharpnessBoost;
    GainValueArray *blueBoost;
}

- (void).cxx_destruct;

@end
