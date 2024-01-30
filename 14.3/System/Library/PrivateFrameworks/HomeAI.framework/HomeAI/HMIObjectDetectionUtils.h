@interface HMIObjectDetectionUtils : NSObject

+ (void)nmsMultiClass:(id)a0 output:(id)a1 nmsConfiguration:(id)a2;
+ (void)nonMaximumSuppression:(id)a0 output:(id)a1 withThreshold:(double)a2 withMetric:(long long)a3;
+ (float)intersectionOverUnion:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 b:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (float)intersectionOverMinArea:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 b:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (id)convertObjectDetections:(id)a0 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 originalImageSize:(struct CGSize { double x0; double x1; })a2;

@end
