@class StereoDisparityEstimatorCostParameters, TVL1_v3_SolverParameters, HBFGPUParameters, TVL1_v3_RegularizationParameters, StereoDisparityEstimatorPreprocessingParameters;

@interface StereoDisparityEstimatorParameters : NSObject

@property (retain, nonatomic) StereoDisparityEstimatorPreprocessingParameters *preprocessing;
@property (retain, nonatomic) StereoDisparityEstimatorCostParameters *cost;
@property (retain, nonatomic) TVL1_v3_RegularizationParameters *reg;
@property (retain, nonatomic) TVL1_v3_SolverParameters *solver;
@property (retain, nonatomic) HBFGPUParameters *hbf;

- (id)init;
- (void).cxx_destruct;

@end
