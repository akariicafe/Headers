@class NSArray;

@interface PostDemosaicTuningParams : NSObject {
    NSArray *_smoothStrengthHV;
    NSArray *_smoothStrengthD;
}

@property (readonly, nonatomic) struct { BOOL referenceModelCompliant; BOOL enableDotFix; BOOL enableDirectionalLowpass; BOOL enableChromaSuppression; BOOL directionalFilterAlways; float dotDetectThreshold; BOOL enableNoiseSuppression; BOOL newDLPFMethod; float noiseLUT[257]; float edgeAdaptiveThreshold; void /* unknown type, empty encoding */ diagonalWeightParams; void /* unknown type, empty encoding */ smoothStrength; float gradientDivisor; float lcMaxStrength; float lcChromaScaling; void /* unknown type, empty encoding */ csChromaGray; BOOL csUseEnlargedHFLumaSupport; BOOL csUseSparseChromaSampling; float csBilateralLumaSigma; float csBilateralChromaSigma; float csBilateralLowerWeightThreshold; float csBilateralUpperWeightThreshold; float csChromaDesatSmoothMixLuma1; float csChromaDesatSmoothMixBlend1; float csChromaDesatSmoothMixLuma2; float csChromaDesatSmoothMixBlend2; float csHueBasedSuppressionStrength[8]; float csLumaBasedSuppressionStrengthLuma1; float csLumaBasedSuppressionStrengthLuma2; float csLumaBasedSuppressionStrength1; float csLumaBasedSuppressionStrength2; float csHfDetailBasedSuppressionSlopeStart; float csHfDetailBasedSuppressionSlopeEnd; } config;

- (void).cxx_destruct;
- (int)readPlist:(id)a0;
- (const struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; float x5; BOOL x6; BOOL x7; float x8[257]; float x9; float x10; float x11; float x12; BOOL x13; BOOL x14; float x15; float x16; float x17; float x18; float x19; float x20; float x21; float x22; float x23[8]; float x24; float x25; float x26; float x27; float x28; float x29; } *)getConfigDirect;
- (int)updateConfigWithGain:(float)a0;

@end
