@class NSString, NSDictionary, CRNeuralTextDetector, CRMultiModelTextRecognizer, CRPerformanceStatistics;

@interface CREngineAccurate : NSObject <CREngine>

@property (retain) CRNeuralTextDetector *ocrDetector;
@property (retain) CRMultiModelTextRecognizer *ocrRecognizer;
@property (retain) NSDictionary *options;
@property unsigned long long revision;
@property BOOL shouldCancel;
@property (retain) CRPerformanceStatistics *recognizerStats;
@property (readonly) CRPerformanceStatistics *detectorStats;
@property (readonly) CRPerformanceStatistics *postProcStats;
@property (readonly) CRPerformanceStatistics *detectorInferenceStats;
@property (readonly) CRPerformanceStatistics *recognizerInferenceStats;
@property (readonly) CRPerformanceStatistics *recognizerDecodingStats;
@property (readonly) CRPerformanceStatistics *textGroupingStats;
@property (readonly) CRPerformanceStatistics *orientationCorrectionStats;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })detectorImageSizeForOptions:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1;
+ (BOOL)preheatModelsForOptions:(id)a0 revision:(long long)a1 error:(id *)a2;
+ (id)supportedLanguagesForRevision:(long long)a0 error:(id *)a1;
+ (double)_normalizeScoreForFeature:(id)a0;

- (id)textResultsInImage:(id)a0 options:(id)a1 withProgressHandler:(id /* block */)a2 error:(id *)a3;
- (id)thresholdsForTextFeature:(id)a0;
- (id)_titleTextFeatureFromFeatures:(id)a0 imageWidth:(unsigned long long)a1 imageHeight:(unsigned long long)a2;
- (unsigned long long)subfeatureOutputType;
- (id)textDetectorResultsForImage:(id)a0 error:(id *)a1;
- (struct CGSize { double x0; double x1; })smallestImageSizeForTextWithRelativeHeight:(double)a0 originalImageSize:(struct CGSize { double x0; double x1; })a1;
- (id)initWithOptions:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)textRecognizerResultsForTextFeatures:(id)a0 image:(id)a1 progressHandler:(id /* block */)a2 error:(id *)a3;
- (void)cancel;

@end
