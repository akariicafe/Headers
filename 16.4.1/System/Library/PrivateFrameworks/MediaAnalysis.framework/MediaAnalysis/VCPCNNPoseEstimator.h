@interface VCPCNNPoseEstimator : NSObject

+ (id)estimator;

- (int)detectPoseForFace:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inBuffer:(struct __CVBuffer { } *)a1 yaw:(long long *)a2;
- (int)computePoseScore:(float *)a0;
- (float *)getInputBuffer;

@end
