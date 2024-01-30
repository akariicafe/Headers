@class GainValueArray;

@interface DeepFusionAddBackModulationBandData : NSObject {
    GainValueArray *flatnessThreshold;
    GainValueArray *deghostingYMinValue;
    GainValueArray *deghostingUVMinValue;
    GainValueArray *skinYSlope;
    GainValueArray *skinUVSlope;
    GainValueArray *skyLumaSlope;
    GainValueArray *ySlope;
    GainValueArray *yAlpha;
    GainValueArray *uvAlpha;
    GainValueArray *clippingThresholdLow;
    GainValueArray *clippingThresholdHigh;
    GainValueArray *shadingSuppressionInversePower;
}

- (void).cxx_destruct;

@end
