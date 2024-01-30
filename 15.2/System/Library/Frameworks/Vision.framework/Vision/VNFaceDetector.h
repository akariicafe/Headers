@class NSString;

@interface VNFaceDetector : VNDetector <VNDetectorKeyProviding>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)configurationOptionKeysForDetectorKey;
+ (void)recordDefaultConfigurationOptionsInDictionary:(id)a0;
+ (Class)detectorClassForConfigurationOptions:(id)a0 error:(id *)a1;
+ (void)fullyPopulateConfigurationOptions:(id)a0;
+ (BOOL)shouldDumpDebugIntermediates;
+ (void)printDebugInfo:(id)a0 facesDataRaw:(void *)a1 faceDetectorBGRAImage:(struct __CVBuffer { } *)a2 tempImage:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a3;

- (void)purgeIntermediates;

@end
