@class NSString;

@interface VNFaceDetector : VNDetector <VNDetectorKeyProviding>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)detectorClassForConfigurationOptions:(id)a0 error:(id *)a1;
+ (void)printDebugInfo:(id)a0 facesDataRaw:(void *)a1 faceDetectorBGRAImage:(struct __CVBuffer { } *)a2 tempImage:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a3;
+ (void)fullyPopulateConfigurationOptions:(id)a0;
+ (BOOL)calculateTilesForRegionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 imageWidth:(unsigned long long)a1 imageHeight:(unsigned long long)a2 tileSizeInPixels:(unsigned long long)a3 overlapFraction:(float)a4 aspectRatioThreshold:(float)a5 columns:(unsigned long long *)a6 rows:(unsigned long long *)a7 tiles:(void *)a8 error:(id *)a9;
+ (id)configurationOptionKeysForDetectorKey;
+ (BOOL)shouldDumpDebugIntermediates;
+ (void)recordDefaultConfigurationOptionsInDictionary:(id)a0;

- (id)internalProcessUsingQualityOfServiceClass:(unsigned int)a0 options:(id)a1 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 warningRecorder:(id)a3 error:(id *)a4 progressHandler:(id /* block */)a5;
- (void)purgeIntermediates;

@end
