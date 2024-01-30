@class NSString;

@interface VNFaceDetector : VNDetector <VNDetectorKeyProviding>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldDumpDebugIntermediates;
+ (void)recordDefaultConfigurationOptionsInDictionary:(id)a0;
+ (void)printDebugInfo:(id)a0 facesDataRaw:(struct vector<vision::mod::DetectedObject, std::__1::allocator<vision::mod::DetectedObject> > { struct DetectedObject *x0; struct DetectedObject *x1; struct __compressed_pair<vision::mod::DetectedObject *, std::__1::allocator<vision::mod::DetectedObject> > { struct DetectedObject *x0; } x2; } *)a1 faceDetectorBGRAImage:(struct __CVBuffer { } *)a2 tempImage:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a3;
+ (Class)detectorClassForConfigurationOptions:(id)a0 error:(id *)a1;
+ (void)fullyPopulateConfigurationOptions:(id)a0;

- (void)purgeIntermediates;

@end
