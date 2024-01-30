@class CRNeuralTextRecognizer, NSString, CRNeuralTextDetector, NSDictionary, CRPerformanceStatistics;

@interface CREngineAccurate : NSObject <CREngine>

@property (retain) CRNeuralTextDetector *ocrDetector;
@property (retain) CRNeuralTextRecognizer *ocrRecognizer;
@property (retain) NSDictionary *options;
@property unsigned long long revision;
@property BOOL shouldCancel;
@property (retain) CRPerformanceStatistics *detectorStats;
@property (retain) CRPerformanceStatistics *postProcStats;
@property (retain) CRPerformanceStatistics *recognizerStats;
@property (retain) CRPerformanceStatistics *detectorInferenceStats;
@property (retain) CRPerformanceStatistics *recognizerInferenceStats;
@property (retain) CRPerformanceStatistics *recognizerDecodingStats;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) float mediumConfidenceThreshold;
@property (readonly) float highConfidenceThreshold;

+ (id)supportedLanguagesForRevision:(long long)a0 error:(id *)a1;
+ (double)_normalizeScoreForFeature:(id)a0;

- (void)cancel;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })smallestImageSizeForTextWithRelativeHeight:(double)a0 originalImageSize:(struct CGSize { double x0; double x1; })a1;
- (id)initWithOptions:(id)a0 error:(id *)a1;
- (id)textRecognizerResultsForTextFeatures:(id)a0 image:(id)a1;
- (id)textDetectorResultsForImage:(id)a0 error:(id *)a1;
- (id)textResultsInImage:(id)a0 options:(id)a1 withProgressHandler:(id /* block */)a2 error:(id *)a3;
- (id)_titleTextFeatureFromFeatures:(id)a0 imageWidth:(unsigned long long)a1 imageHeight:(unsigned long long)a2;

@end
