@class NSArray, NSDictionary, VNSaliencyOHeatmapBoundingBoxGenerator;

@interface VNSmartCam5GatingDetector : VNImageAnalyzerBasedDetector {
    NSDictionary *_documentIdentifierToSceneLabels;
    VNSaliencyOHeatmapBoundingBoxGenerator *_boundingBoxGenerator;
}

@property (readonly, copy) NSArray *supportedDocumentElementIdentifiers;

+ (unsigned int)analysisPixelFormatTypeForConfiguration:(id)a0;
+ (id)inputImageBlobNameForConfiguration:(id)a0;
+ (id)modelNameForConfiguration:(id)a0;

- (id)sceneLabelsFileName;
- (id)supportedClassificationIdentifiersWithOptions:(id)a0 error:(id *)a1;
- (unsigned long long)defaultImageCropAndScaleOption;
- (BOOL)completeInitializationForSession:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)configureImageAnalyzerOptions:(void *)a0 error:(id *)a1;
- (unsigned int)analysisTypesForProcessOptions:(id)a0;
- (id)segmentationLabelsFileName;
- (id)observationsForLastAnalysisOfImageAnalyzer:(void *)a0 processOptions:(id)a1 originatingRequestSpecifier:(id)a2 error:(id *)a3;

@end
