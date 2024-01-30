@class NSArray, NSDictionary, ShotflowDetectorANODv3, VNFaceBBoxAligner;

@interface VNANFDMultiDetector : VNEspressoModelFileBasedDetector {
    ShotflowDetectorANODv3 *_mMultiHeadedANFDDetector;
    VNFaceBBoxAligner *_faceBBoxAligner;
}

@property (class, readonly) Class detectorClass;
@property (class, readonly) NSArray *knownAnimalIdentifiers;
@property (class, readonly) float faceDetectorChunkAspectRatio;
@property (class, readonly) NSDictionary *detectedObjectClassToRequestClass;
@property (class, readonly) NSDictionary *detectedObjectRequestClassToRequestInfo;
@property (class, readonly) NSDictionary *recognizedAnimalObjectClassToAnimalName;

+ (id)espressoModelFileNameForConfigurationOptions:(id)a0;
+ (id)requestInfoForRequest:(id)a0;
+ (void)_printDebugInfo:(id)a0 detectedObjectsRaw:(id)a1 faceDetectorBGRAImage:(struct __CVBuffer { } *)a2 tempImage:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a3;
+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)a0;
+ (id)configurationOptionKeysForDetectorKey;
+ (Class)anfdMultiDetectorClassToProcessRequest:(id)a0;
+ (Class)detectorClassForConfigurationOptions:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (BOOL)processDetectedObject:(id)a0 requestRevision:(unsigned long long)a1 objectBoundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 imageBuffer:(id)a3 warningRecorder:(id)a4 detectedObjectResults:(id)a5 error:(id *)a6;
- (id)processWithOptions:(id)a0 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 warningRecorder:(id)a2 error:(id *)a3;
- (BOOL)completeInitializationForSession:(id)a0 error:(id *)a1;
- (id)_alignFace:(id)a0 imageBuffer:(id)a1 warningRecorder:(id)a2 error:(id *)a3;
- (void)processRecognizedObjectWithIdentifier:(id)a0 requestRevision:(unsigned long long)a1 objectBoundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 objectConfidence:(float)a3 detectedObjectResults:(id)a4;
- (BOOL)supportsProcessingDevice:(id)a0;

@end
