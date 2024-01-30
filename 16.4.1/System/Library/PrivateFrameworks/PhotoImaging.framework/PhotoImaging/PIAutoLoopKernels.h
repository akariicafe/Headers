@interface PIAutoLoopKernels : NSObject

+ (id)rgbToLumaKernel;
+ (id)nccCoarseKernel;
+ (id)alphaCompositingKernel;
+ (id)blur3x3Kernel;
+ (id)blur5x5Kernel;
+ (id)blur7x7Kernel;
+ (id)dynamismMapKernel;
+ (id)dynamismMapRefineKernel;
+ (id)fusionKernel;
+ (id)homographyKernel;
+ (id)longExposureFusionKernels;
+ (id)nccKernel;

@end
