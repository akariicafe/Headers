@interface BWAdaptiveCorrectionPreviewRegistrationTuningParameters : NSObject {
    struct AdaptiveCorrectionConfig { double epErrorLimitWidePix_FirstPass; double epErrorLimitWidePix_SecondPass; double rangePFL_T; double rangePFL_W; double rangeOCxT; double rangeOCxW; double rangeOCyW; double intermediateMacroDistMM; double extremeMacroDistMM; int minPointsForAdjustment; double errorVal_GreaterThanInf; double errorVal_LessThanExtremeMacro; double errorVal_BetweenIntermediate_ExtremeMacro; BOOL runAnalyticalPreconditioning; double spgEpsilon; float temporalFilteringStrength; float temporalFilteringStrengthParallel; } _adaptiveCorrectionConfigs[3];
}

@property (readonly, nonatomic) float keypointsMinSelectionScore;
@property (readonly, nonatomic) unsigned int configuredNumKeypoints;
@property (readonly, nonatomic) double epipolarWeightFalloffDistance;
@property (readonly, nonatomic) double macroDepthWeightFalloffDistance;
@property (readonly, nonatomic) struct BWAdaptiveCorrectionPreviewRegistrationRegToolBoxConfig { unsigned int numPyrLevels; unsigned int imageWidth; unsigned int imageHeight; unsigned int keypointGridWidth; unsigned int keypointGridHeight; unsigned int keypointsTemplateRadius; unsigned int keypointsSearchRadius; float keypointsMinNccScore; } regToolBoxConfig;
@property (readonly, nonatomic) const struct AdaptiveCorrectionConfig { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; int x9; double x10; double x11; double x12; BOOL x13; double x14; float x15; float x16; } *adaptiveCorrectionConfigsPtr;

+ (void)initialize;

- (id)init;
- (id)initWithTuningDictionary:(id)a0;

@end
