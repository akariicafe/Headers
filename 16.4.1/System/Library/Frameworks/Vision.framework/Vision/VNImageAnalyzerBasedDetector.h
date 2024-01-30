@class NSArray;

@interface VNImageAnalyzerBasedDetector : VNDetector {
    struct shared_ptr<vision::mod::ImageAnalyzer> { struct ImageAnalyzer *__ptr_; struct __shared_weak_count *__cntrl_; } _imageAnalyzer;
    struct _Geometry2D_size2D_ { float height; float width; } _networkRequiredInputImageSize;
    BOOL _networkUsesAnisotropicScaling;
    NSArray *_cachedSupportedClassificationIdentifiers;
}

+ (id)configurationOptionKeysForDetectorKey;
+ (id)supportedImageSizeSetForOptions:(id)a0 error:(id *)a1;
+ (unsigned int)analysisPixelFormatTypeForConfiguration:(id)a0;
+ (id)inputImageBlobNameForConfiguration:(id)a0;
+ (id)modelNameForConfiguration:(id)a0;

- (id).cxx_construct;
- (struct CGSize { double x0; double x1; })inputImageSize;
- (BOOL)createRegionOfInterestCrop:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 options:(id)a1 warningRecorder:(id)a2 pixelBuffer:(struct __CVBuffer **)a3 error:(id *)a4 progressHandler:(id /* block */)a5;
- (id)internalProcessUsingQualityOfServiceClass:(unsigned int)a0 options:(id)a1 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 warningRecorder:(id)a3 error:(id *)a4 progressHandler:(id /* block */)a5;
- (id)processRegionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 croppedPixelBuffer:(const struct __CVBuffer { } *)a1 options:(id)a2 qosClass:(unsigned int)a3 warningRecorder:(id)a4 error:(id *)a5 progressHandler:(id /* block */)a6;
- (BOOL)completeInitializationForSession:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (unsigned int)analysisTypesForProcessOptions:(id)a0;
- (BOOL)configureImageAnalyzerOptions:(void *)a0 error:(id *)a1;
- (unsigned long long)defaultImageCropAndScaleOption;
- (id)observationsForLastAnalysisOfImageAnalyzer:(void *)a0 processOptions:(id)a1 originatingRequestSpecifier:(id)a2 qosClass:(unsigned int)a3 error:(id *)a4;
- (id)observationsForSceneLabelsFromLastAnalysisOfImageAnalyzer:(void *)a0 identifierAcceptingBlock:(id /* block */)a1 operationPointsProvider:(id)a2 originatingRequestSpecifier:(id)a3 qosClass:(unsigned int)a4 error:(id *)a5;
- (BOOL)providesSceneLabels;
- (BOOL)providesSegmentationLabels;
- (id)sceneLabelsFileName;
- (id)segmentationLabelsFileName;
- (id)supportedClassificationIdentifiersAcceptedByBlock:(id /* block */)a0 error:(id *)a1;

@end
