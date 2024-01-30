@interface JasperPointCloudUtils : NSObject

+ (int)calculateJasperPointsPositionInImage:(id)a0 outputJasperPointArray:(double *)a1 confidenceLogicOption:(int)a2;
+ (void)croppedAndScaleJasperPoints:(double *)a0 inputJasperPointArraySize:(int)a1 cropX:(int)a2 cropY:(int)a3 scaleX:(double)a4 scaleY:(double)a5 outputVector:(void *)a6;
+ (int)dropIllegalJasperPoints:(struct vector<float, std::allocator<float>> { float *x0; float *x1; struct __compressed_pair<float *, std::allocator<float>> { float *x0; } x2; })a0 depthMaxLimitation:(int)a1 depthMinLimitation:(int)a2 imageMaxWidth:(int)a3 imageMaxHeight:(int)a4 outputJasperPointsFloatArray:(float *)a5 outputNumberOfUniquiePoints:(unsigned int *)a6;

@end
