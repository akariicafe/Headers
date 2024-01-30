@interface TVL1_v3_SolverParameters : NSObject

@property (nonatomic) float tau;
@property (nonatomic) float sigma;
@property (nonatomic) float theta;
@property (nonatomic) float huber_eps;
@property (nonatomic) int warpings;
@property (nonatomic) int iterations;
@property (nonatomic) float a_checkerboard;
@property (nonatomic) float b_checkerboard;

@end
