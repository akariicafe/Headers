@interface ADAdaptiveCorrectionPipelineParameters : NSObject

@property (nonatomic) double epErrorLimitWidePix_FirstPass;
@property (nonatomic) double epErrorLimitWidePix_SecondPass;
@property (nonatomic) double rangePFL_T;
@property (nonatomic) double rangePFL_W;
@property (nonatomic) double rangeOCxT;
@property (nonatomic) double rangeOCxW;
@property (nonatomic) double rangeOCyW;
@property (nonatomic) double intermediateMacroDistMM;
@property (nonatomic) double extremeMacroDistMM;
@property (nonatomic) int minPointsForAdjustment;
@property (nonatomic) double errorVal_GreaterThanInf;
@property (nonatomic) double errorVal_LessThanExtremeMacro;
@property (nonatomic) double errorVal_BetweenIntermediate_ExtremeMacro;
@property (nonatomic) BOOL runAnalyticalPreconditioning;
@property (nonatomic) double spgEpsilon;
@property (nonatomic) float temporalFilteringStrength;

@end
