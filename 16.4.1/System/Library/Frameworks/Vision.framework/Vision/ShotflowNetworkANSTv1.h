@interface ShotflowNetworkANSTv1 : ShotflowNetworkANODBase

+ (id)modelName;
+ (unsigned long long)mumberPosClasses;
+ (struct CGSize { double x0; double x1; })inputImageSize;
+ (id)inputLayerName;
+ (BOOL)hasPose;
+ (const void *)importantClasses;
+ (BOOL)inputBGR;
+ (struct tuple<float, float, float> { struct __tuple_impl<std::__tuple_indices<0, 1, 2>, float, float, float> { float x0; float x1; float x2; } x0; })inputBiasRGB;
+ (float)inputScale;

- (void)initializeBuffers;
- (id)processVImage:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a0 inputIsBGR:(BOOL)a1;
- (int)setInputShape:(unsigned long long)a0 height:(unsigned long long)a1;

@end
