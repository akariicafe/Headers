@interface VCPCNNPoseEstimator : NSObject

+ (id)estimator;

- (float *)getInputBuffer;
- (int)computePoseScore:(float *)a0;
- (int)detectPoseForFace:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inBuffer:(struct __CVBuffer { } *)a1 yaw:(long long *)a2;

@end
