@interface HBFGPUParameters : NSObject

@property (nonatomic) int iterations;
@property (nonatomic) int scales;
@property (nonatomic) int radius;
@property (nonatomic) int padding;
@property (nonatomic) float sigma_0;
@property (nonatomic) float sigma_1;
@property (nonatomic) float sigma_2;
@property (nonatomic) float sigma_w;
@property (nonatomic) float conf_min;
@property (nonatomic) float conf_max;
@property (nonatomic) float occ_thres;

@end
