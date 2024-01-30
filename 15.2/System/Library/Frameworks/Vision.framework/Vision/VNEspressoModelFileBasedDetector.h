@class VNEspressoResources;

@interface VNEspressoModelFileBasedDetector : VNDetector

@property (readonly, nonatomic) VNEspressoResources *espressoResources;
@property (readonly, nonatomic) unsigned long long networkRequiredInputImageWidth;
@property (readonly, nonatomic) unsigned long long networkRequiredInputImageHeight;
@property (readonly, nonatomic) unsigned long long inputImageAspectRatioHandling;

+ (unsigned int)networkRequiredInputImagePixelFormatForConfigurationOptions:(id)a0;
+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)a0;
+ (id)configurationOptionKeysForDetectorKey;
+ (id)keyForDetectorWithConfigurationOptions:(id)a0;
+ (unsigned long long)inputImageAspectRatioHandlingForConfigurationOptions:(id)a0;
+ (id)espressoModelFileNameForConfigurationOptions:(id)a0;
+ (id)supportedImageSizeSetForOptions:(id)a0 error:(id *)a1;

- (BOOL)supportsProcessingDevice:(id)a0;
- (BOOL)completeInitializationForSession:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)_loadEspressoModelWithConfigurationOptions:(id)a0 error:(id *)a1;
- (int)espressoModelNetworkLayersStorageTypeForConfigurationOptions:(id)a0;
- (BOOL)getWidth:(unsigned long long *)a0 height:(unsigned long long *)a1 ofEspressoModelNetworkBlobNamed:(id)a2 error:(id *)a3;
- (BOOL)bindBuffer:(struct { void *x0; void *x1; unsigned long long x2[4]; unsigned long long x3[4]; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; int x14; } *)a0 toNetworkInputBlobName:(id)a1 error:(id *)a2;
- (BOOL)bindBuffer:(struct { void *x0; void *x1; unsigned long long x2[4]; unsigned long long x3[4]; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; int x14; } *)a0 toNetworkOutputBlobName:(id)a1 error:(id *)a2;
- (BOOL)_bindBuffer:(struct { void *x0; void *x1; unsigned long long x2[4]; unsigned long long x3[4]; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; int x14; } *)a0 toNetworkBlobName:(id)a1 bindMode:(int)a2 error:(id *)a3;
- (BOOL)bindLockedPixelBuffer:(struct __CVBuffer { } *)a0 toNetworkInputBlobName:(id)a1 error:(id *)a2;
- (BOOL)executePlanAndReturnError:(id *)a0;

@end
