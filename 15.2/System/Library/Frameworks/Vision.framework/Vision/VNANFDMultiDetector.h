@class NSArray, NSDictionary, ShotflowDetector, VNFaceBBoxAligner;

@interface VNANFDMultiDetector : VNEspressoModelFileBasedDetector {
    VNFaceBBoxAligner *_faceBBoxAligner;
}

@property (class, readonly) Class detectorClass;
@property (class, readonly) NSArray *knownAnimalIdentifiers;
@property (class, readonly) float faceDetectorChunkAspectRatio;
@property (class, readonly) NSDictionary *detectedObjectClassToRequestKey;
@property (class, readonly) NSDictionary *detectedObjectRequestKeyToRequestInfo;
@property (class, readonly) NSDictionary *recognizedAnimalObjectClassToAnimalName;

@property (readonly, nonatomic) ShotflowDetector *shotflowDetector;

+ (unsigned int)networkRequiredInputImagePixelFormatForConfigurationOptions:(id)a0;
+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)a0;
+ (id)configurationOptionKeysForDetectorKey;
+ (unsigned long long)inputImageAspectRatioHandlingForConfigurationOptions:(id)a0;
+ (id)espressoModelFileNameForConfigurationOptions:(id)a0;
+ (Class)detectorClassForConfigurationOptions:(id)a0 error:(id *)a1;
+ (id)supportedImageSizeSetForOptions:(id)a0 error:(id *)a1;
+ (Class)anfdMultiDetectorClassToProcessRequest:(id)a0;
+ (id)requestInfoForRequest:(id)a0;
+ (void)_printDebugInfo:(id)a0 detectedObjectsRaw:(id)a1 faceDetectorBGRAImage:(struct __CVBuffer { } *)a2 tempImage:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a3;

- (id)processWithOptions:(id)a0 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 warningRecorder:(id)a2 error:(id *)a3 progressHandler:(id /* block */)a4;
- (BOOL)processDetectedObject:(id)a0 originatingRequestSpecifier:(id)a1 objectBoundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 imageBuffer:(id)a3 warningRecorder:(id)a4 detectedObjectResults:(id)a5 error:(id *)a6;
- (BOOL)updateRuntimeParametersFromOptions:(id)a0 error:(id *)a1;
- (BOOL)completeInitializationForSession:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)_alignFace:(id)a0 imageBuffer:(id)a1 warningRecorder:(id)a2 error:(id *)a3;
- (void)processRecognizedObjectWithIdentifier:(id)a0 originatingRequestSpecifier:(id)a1 objectBoundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 objectConfidence:(float)a3 detectedObjectResults:(id)a4;

@end
