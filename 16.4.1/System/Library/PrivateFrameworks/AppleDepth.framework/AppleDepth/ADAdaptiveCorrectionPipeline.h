@class ADAdaptiveCorrectionPipelineParameters;

@interface ADAdaptiveCorrectionPipeline : NSObject {
    struct AdaptiveCorrectionConfig { double epErrorLimitWidePix_FirstPass; double epErrorLimitWidePix_SecondPass; double rangePFL_T; double rangePFL_W; double rangeOCxT; double rangeOCxW; double rangeOCyW; double intermediateMacroDistMM; double extremeMacroDistMM; int minPointsForAdjustment; double errorVal_GreaterThanInf; double errorVal_LessThanExtremeMacro; double errorVal_BetweenIntermediate_ExtremeMacro; BOOL runAnalyticalPreconditioning; double spgEpsilon; float temporalFilteringStrength; } _config;
    struct AdaptiveCorrection { } *_adc;
    ADAdaptiveCorrectionPipelineParameters *_pipelineParameters;
}

@property (readonly) int maxNumPoints;

+ (long long)approximateCorrectionWithPointsTele:(const double *)a0 xyPointsWide:(const double *)a1 numPoints:(int)a2 calModel:(id)a3;
+ (long long)computeVerticalBaselineTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a0 extrinsicRefToAuxPrime:(struct { void /* unknown type, empty encoding */ x0[4]; } *)a1 rotationRefToRefPrime:(struct { void /* unknown type, empty encoding */ x0[2]; } *)a2 rotationAuxToAuxPrime:(struct { void /* unknown type, empty encoding */ x0[2]; } *)a3;
+ (void)convertCameraCalibrationTele:(id)a0 cameraCalibrationWide:(id)a1 toDistortionModelTele:(struct DistortionModel { double x0; double x1; double x2; double x3; double x4[8]; double x5[8]; } *)a2 toDistortionModelWide:(struct DistortionModel { double x0; double x1; double x2; double x3; double x4[8]; double x5[8]; } *)a3 toCalModel:(struct CalModel { double x0[2]; double x1[2]; double x2[2]; double x3[12]; } *)a4;
+ (void)convertExtrinsics:(struct { void /* unknown type, empty encoding */ x0[4]; })a0 toInternalFormat:(double[12])a1;
+ (void)convertInternalExtrinsics:(double[12])a0 toMatrix:(struct { void /* unknown type, empty encoding */ x0[4]; } *)a1;
+ (struct CalModel { double x0[2]; double x1[2]; double x2[2]; double x3[12]; })convertToInternalCalModel:(id)a0;
+ (void)fillDistortionModel:(struct DistortionModel { double x0; double x1; double x2; double x3; double x4[8]; double x5[8]; } *)a0 andUpdateCalModel:(struct CalModel { double x0[2]; double x1[2]; double x2[2]; double x3[12]; } *)a1 forCamera:(int)a2 fromCalib:(id)a3;
+ (double)meanFundamentalEpipolarErrorForCalModel:(const struct CalModel { double x0[2]; double x1[2]; double x2[2]; double x3[12]; } *)a0 xyPointsTele:(const double *)a1 xyPointsWide:(const double *)a2 numPoints:(int)a3;
+ (long long)rotateCalModel:(const struct CalModel { double x0[2]; double x1[2]; double x2[2]; double x3[12]; } *)a0 extrinsicRefToAuxRotated:(struct { void /* unknown type, empty encoding */ x0[4]; })a1 rotationRef:(struct { void /* unknown type, empty encoding */ x0[2]; })a2 rotationAux:(struct { void /* unknown type, empty encoding */ x0[2]; })a3 calRotated:(struct CalModel { double x0[2]; double x1[2]; double x2[2]; double x3[12]; } *)a4;
+ (long long)rotateDistortionModel:(const struct DistortionModel { double x0; double x1; double x2; double x3; double x4[8]; double x5[8]; } *)a0 rotation:(struct { void /* unknown type, empty encoding */ x0[2]; })a1 distRotated:(struct DistortionModel { double x0; double x1; double x2; double x3; double x4[8]; double x5[8]; } *)a2;
+ (long long)transformPointsWithMatrix:(const double *)a0 numPoints:(int)a1 transformMatrix:(struct { void /* unknown type, empty encoding */ x0[2]; })a2 xyPointsTransformed:(double *)a3;
+ (void)updateADCalModel:(id)a0 fromInternalCalModel:(const struct CalModel { double x0[2]; double x1[2]; double x2[2]; double x3[12]; } *)a1;
+ (void)updateADCameraCalib:(id)a0 fromDistortionModel:(const struct DistortionModel { double x0; double x1; double x2; double x3; double x4[8]; double x5[8]; } *)a1 andCalModel:(const struct CalModel { double x0[2]; double x1[2]; double x2[2]; double x3[12]; } *)a2 forCamera:(int)a3;
+ (void)updateCameraCalibrationTele:(id)a0 cameraCalibrationWide:(id)a1 withDistortionModelTele:(const struct DistortionModel { double x0; double x1; double x2; double x3; double x4[8]; double x5[8]; } *)a2 withDistortionModelWide:(const struct DistortionModel { double x0; double x1; double x2; double x3; double x4[8]; double x5[8]; } *)a3 withCalModel:(const struct CalModel { double x0[2]; double x1[2]; double x2[2]; double x3[12]; } *)a4;

- (void).cxx_destruct;
- (struct AdaptiveCorrectionStatus { int x0; BOOL x1; struct CalModel { double x0[2]; double x1[2]; double x2[2]; double x3[12]; } x2; int x3; BOOL x4; BOOL x5; struct CalModel { double x0[2]; double x1[2]; double x2[2]; double x3[12]; } x6; double x7; int x8; BOOL x9; double x10; struct CalModel { double x0[2]; double x1[2]; double x2[2]; double x3[12]; } x11; BOOL x12[2048]; int x13; BOOL x14; struct CalModel { double x0[2]; double x1[2]; double x2[2]; double x3[12]; } x15; double x16; int x17; BOOL x18; double x19; struct CalModel { double x0[2]; double x1[2]; double x2[2]; double x3[12]; } x20; BOOL x21[2048]; struct DistortionModel { double x0; double x1; double x2; double x3; double x4[8]; double x5[8]; } x22; struct DistortionModel { double x0; double x1; double x2; double x3; double x4[8]; double x5[8]; } x23; int x24; BOOL x25; double x26; int x27; BOOL x28; double x29; struct CalModel { double x0[2]; double x1[2]; double x2[2]; double x3[12]; } x30; struct DistortionModel { double x0; double x1; double x2; double x3; double x4[8]; double x5[8]; } x31; struct DistortionModel { double x0; double x1; double x2; double x3; double x4[8]; double x5[8]; } x32; BOOL x33[2048]; })getStatus;
- (long long)fullCorrectionWithCameraCalibrationTele:(id)a0 cameraCalibrationWide:(id)a1 xyPointsTele:(const double *)a2 xyPointsWide:(const double *)a3 numPoints:(int)a4;
- (long long)fullCorrectionWithPointsTele:(const double *)a0 xyPointsWide:(const double *)a1 numPoints:(int)a2 calModel:(id)a3;
- (long long)fullTemporalCorrectionWithCameraCalibrationTele:(id)a0 cameraCalibrationWide:(id)a1 xyPointsTele:(const double *)a2 xyPointsWide:(const double *)a3 numPoints:(int)a4;
- (struct AdaptiveCorrectionConfig { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; int x9; double x10; double x11; double x12; BOOL x13; double x14; float x15; })getConfigFromPipelineParams;
- (id)initWithMaxNumPoints:(int)a0;
- (id)initWithMaxNumPoints:(int)a0 andParameters:(id)a1;

@end
