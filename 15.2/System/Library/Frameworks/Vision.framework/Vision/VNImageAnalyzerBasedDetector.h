@class NSArray;

@interface VNImageAnalyzerBasedDetector : VNDetector {
    struct unique_ptr<vision::mod::ImageAnalyzer, std::default_delete<vision::mod::ImageAnalyzer>> { struct __compressed_pair<vision::mod::ImageAnalyzer *, std::default_delete<vision::mod::ImageAnalyzer>> { struct ImageAnalyzer *__value_; } __ptr_; } _imageAnalyzer;
    struct _Geometry2D_size2D_ { float height; float width; } _networkRequiredInputImageSize;
    BOOL _networkUsesAnisotropicScaling;
    NSArray *_cachedSupportedClassificationIdentifiers;
}

+ (unsigned int)analysisPixelFormatTypeForConfiguration:(id)a0;
+ (id)configurationOptionKeysForDetectorKey;
+ (id)inputImageBlobNameForConfiguration:(id)a0;
+ (id)modelNameForConfiguration:(id)a0;
+ (id)supportedImageSizeSetForOptions:(id)a0 error:(id *)a1;

- (id)sceneLabelsFileName;
- (id)processWithOptions:(id)a0 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 warningRecorder:(id)a2 error:(id *)a3 progressHandler:(id /* block */)a4;
- (unsigned long long)defaultImageCropAndScaleOption;
- (struct CGSize { double x0; double x1; })inputImageSize;
- (BOOL)supportsProcessingDevice:(id)a0;
- (BOOL)completeInitializationForSession:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)configureImageAnalyzerOptions:(void *)a0 error:(id *)a1;
- (unsigned int)analysisTypesForProcessOptions:(id)a0;
- (id)segmentationLabelsFileName;
- (id).cxx_construct;
- (id)observationsForLastAnalysisOfImageAnalyzer:(void *)a0 processOptions:(id)a1 originatingRequestSpecifier:(id)a2 error:(id *)a3;
- (BOOL)providesSceneLabels;
- (id)supportedClassificationIdentifiersAcceptedByBlock:(id /* block */)a0 error:(id *)a1;
- (id)observationsForSceneLabelsFromLastAnalysisOfImageAnalyzer:(void *)a0 identifierAcceptingBlock:(id /* block */)a1 operationPointsProvider:(id)a2 originatingRequestSpecifier:(id)a3 error:(id *)a4;
- (BOOL)providesSegmentationLabels;

@end
