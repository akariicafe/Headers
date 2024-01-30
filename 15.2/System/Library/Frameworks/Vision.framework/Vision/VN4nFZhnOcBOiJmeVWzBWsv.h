@interface VN4nFZhnOcBOiJmeVWzBWsv : VNImageAnalyzerBasedDetector

+ (unsigned int)analysisPixelFormatTypeForConfiguration:(id)a0;
+ (id)inputImageBlobNameForConfiguration:(id)a0;
+ (id)modelNameForConfiguration:(id)a0;

- (BOOL)supportsProcessingDevice:(id)a0;
- (BOOL)configureImageAnalyzerOptions:(void *)a0 error:(id *)a1;
- (unsigned int)analysisTypesForProcessOptions:(id)a0;
- (id)observationsForLastAnalysisOfImageAnalyzer:(void *)a0 processOptions:(id)a1 originatingRequestSpecifier:(id)a2 error:(id *)a3;

@end
