@interface InpaintingEspressoHelpers : NSObject

+ (id)pathForEspressoNetworkModelFileWithName:(id)a0 error:(id *)a1;
+ (BOOL)bindEspressoInputBufferForInputName:(id)a0 buffer:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a1 preprocessingParams:(struct { float x0; float x1; float x2; float x3; BOOL x4; })a2 network:(struct { void *x0; int x1; })a3 noAlphaPremultiply:(BOOL)a4 error:(id *)a5;
+ (id)convertEspressoOutput:(struct { void *x0; void *x1; unsigned long long x2[4]; unsigned long long x3[4]; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; int x14; })a0 intoOutputImageWrapper:(id)a1 usingOutputPixelsRange:(int)a2 andOutputFormat:(int)a3 error:(id *)a4;
+ (void *)createEspressoContextForCPUEngine:(int *)a0;
+ (void *)createEspressoContextUsingFastestDevicePresent__engineUsed:(int *)a0;
+ (BOOL)createSingleNetworkPlanFromResourceDescriptor:(id)a0 resourceFileName:(id)a1 lowPriorityMode:(BOOL)a2 cpuOnlyModel:(BOOL)a3 membraneModel:(BOOL)a4 modelInputPixelFormat:(int)a5 modelOutputPixelFormat:(int)a6 inputBlobNames:(id)a7 outputBlobNames:(id)a8 storeInEspressoResources:(id)a9 error:(id *)a10;
+ (id)generatePoissonMembraneOnBGRA8VTargetImage:(id)a0 forSourceImage:(id)a1 usingMaskOutline:(id)a2 atProcessingResolution:(int)a3 withOutputFormat:(int)a4 outputImage:(id)a5 andModel:(id)a6 error:(id *)a7;
+ (id)performInpaintingOnBGRA8VImage:(id)a0 usingMask:(id)a1 atProcessingResolution:(int)a2 withOutputFormat:(int)a3 outputImage:(id)a4 andModel:(id)a5 error:(id *)a6;
+ (id)performInpaintingOnImage:(id)a0 usingMask:(id)a1 atProcessingResolution:(int)a2 withModel:(id)a3 error:(id *)a4;
+ (BOOL)selectConfigurationAndBuildPlanForNetwork:(id)a0 configurationName:(id)a1 error:(id *)a2;
+ (int)selectModelProcessingResolutionBasedOnEdgeSize:(double)a0 amongResolutions:(id)a1;

@end
