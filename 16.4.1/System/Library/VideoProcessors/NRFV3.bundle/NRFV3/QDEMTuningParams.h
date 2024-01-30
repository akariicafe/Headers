@interface QDEMTuningParams : NSObject

@property (readonly, nonatomic) struct { float GuidedFilterAlpha; float GFilterAlphaClampMin; float GFilterAlphaClampMax; float GradientThresholdC; float GradientThresholdE; float GradComp; float GaussianVStrength; float GaussianHStrength; float GaussianD1Strength; float GaussianD2Strength; float GradientPushD; float GradientPushHV; float GradientDivisorD; float GradientDivisorHV; float ColorGradientStrength; float DiagonalWeight; BOOL EnableGaussianNR; BOOL EnableAdaptiveGradPushD; BOOL EnableAdaptiveGradPushHV; struct { unsigned short NoiseGradIndex[16]; unsigned short NoiseSuppressStrength[16]; } NoiseSuppressionLUT; struct { unsigned short GradientDPushIndx[16]; unsigned short GradientDPushLUT[16]; } GradientDPushLUT; struct { unsigned short GradientHVPushIndx[16]; unsigned short GradientHVPushLUT[16]; } GradientHVPushLUT; } config;

- (int)readPlist:(id)a0;
- (int)_setDefaultQDEMConfig;

@end
