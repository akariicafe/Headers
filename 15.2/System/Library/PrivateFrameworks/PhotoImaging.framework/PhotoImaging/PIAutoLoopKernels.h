@interface PIAutoLoopKernels : NSObject

+ (id)alphaCompositingKernel;
+ (id)dynamismMapKernel;
+ (id)longExposureFusionKernels;
+ (id)dynamismMapRefineKernel;
+ (id)rgbToLumaKernel;
+ (id)homographyKernel;
+ (id)nccKernel;
+ (id)nccCoarseKernel;
+ (id)blur7x7Kernel;
+ (id)blur5x5Kernel;
+ (id)blur3x3Kernel;
+ (id)fusionKernel;

@end
