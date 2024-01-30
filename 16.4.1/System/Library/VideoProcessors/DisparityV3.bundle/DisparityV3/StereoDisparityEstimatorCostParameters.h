@interface StereoDisparityEstimatorCostParameters : NSObject

@property (nonatomic) void /* unknown type, empty encoding */ lambda_ncc;
@property (nonatomic) void /* unknown type, empty encoding */ lambda_grad;
@property (nonatomic) void /* unknown type, empty encoding */ lambda_std;
@property (nonatomic) void /* unknown type, empty encoding */ min_thres_ncc;
@property (nonatomic) void /* unknown type, empty encoding */ max_thres_grad;
@property (nonatomic) void /* unknown type, empty encoding */ max_thres_std;
@property (nonatomic) float gradient_clipping_alpha;
@property (nonatomic) float gradient_clipping_beta;
@property (nonatomic) float global_penalty;

@end
