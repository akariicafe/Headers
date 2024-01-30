@interface VNEspressoHelpers : NSObject

+ (id)_locateFrameworkBundleForResourceWithName:(id)a0 resourceDirectory:(id *)a1 error:(id *)a2;
+ (id)pathForEspressoResource:(id)a0 ofType:(id)a1 error:(id *)a2;
+ (id)pathForEspressoResourceWithFilename:(id)a0 error:(id *)a1;
+ (struct __CVBuffer { } *)createCVPixelBufferWithPixelFormat:(unsigned int)a0 fromImageInEspressoBuffer:(const struct { void *x0; void *x1; unsigned long long x2[4]; unsigned long long x3[4]; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; int x14; } *)a1 error:(id *)a2;
+ (unsigned long long)pixelValueSizeInBytesForBuffer:(const struct { void *x0; void *x1; unsigned long long x2[4]; unsigned long long x3[4]; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; int x14; } *)a0 error:(id *)a1;
+ (BOOL)createSingleNetworkPlanFromResourceName:(id)a0 usingProcessingDevice:(id)a1 lowPriorityMode:(BOOL)a2 inputBlobNames:(id)a3 outputBlobNames:(id)a4 espressoResources:(id *)a5 error:(id *)a6;
+ (BOOL)createSingleNetworkPlanFromResourceName:(id)a0 usingProcessingDevice:(id)a1 lowPriorityMode:(BOOL)a2 inputBlobNames:(id)a3 outputBlobNames:(id)a4 explicitNetworkLayersStorageType:(int)a5 espressoResources:(id *)a6 error:(id *)a7;
+ (BOOL)renderEspressoBufferImage:(const struct { void *x0; void *x1; unsigned long long x2[4]; unsigned long long x3[4]; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; int x14; } *)a0 intoCVPixelBuffer:(struct __CVBuffer { } *)a1 error:(id *)a2;
+ (BOOL)enableMontrealAndReturnError:(id *)a0;
+ (BOOL)feedForwardEspressoBufferForNetwork:(struct { void *x0; int x1; } *)a0 fromBufferWithName:(id)a1 toBufferWithName:(id)a2 firstFrame:(BOOL)a3 error:(id *)a4;
+ (id)pathForEspressoNetworkModelFileWithName:(id)a0 error:(id *)a1;

@end
