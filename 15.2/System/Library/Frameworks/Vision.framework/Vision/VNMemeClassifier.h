@interface VNMemeClassifier : VNImageAnalyzerBasedDetector {
    int _modelDrop;
}

+ (unsigned int)analysisPixelFormatTypeForConfiguration:(id)a0;
+ (id)configurationOptionKeysForDetectorKey;
+ (id)inputImageBlobNameForConfiguration:(id)a0;
+ (id)modelNameForConfiguration:(id)a0;

- (id)sceneLabelsFileName;
- (BOOL)completeInitializationForSession:(id)a0 error:(id *)a1;
- (BOOL)configureImageAnalyzerOptions:(void *)a0 error:(id *)a1;
- (unsigned int)analysisTypesForProcessOptions:(id)a0;
- (id)observationsForLastAnalysisOfImageAnalyzer:(void *)a0 processOptions:(id)a1 originatingRequestSpecifier:(id)a2 error:(id *)a3;
- (id)supportedIdentifiersWithOptions:(id)a0 error:(id *)a1;

@end
