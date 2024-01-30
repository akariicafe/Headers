@class NSString, NSDictionary, CRLanguageCorrection, CRPerformanceStatistics;

@interface CREngineFast : NSObject <CREngine>

@property unsigned long long revision;
@property (retain) NSDictionary *options;
@property (retain, nonatomic) CRLanguageCorrection *languageCorrection;
@property BOOL shouldCancel;
@property (retain) CRPerformanceStatistics *textRecognitionStats;
@property (retain) CRPerformanceStatistics *languageCorrectionStats;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)preheatModelsForOptions:(id)a0 revision:(long long)a1 error:(id *)a2;
+ (struct CGSize { double x0; double x1; })detectorImageSizeForOptions:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1;
+ (id)supportedLanguagesForRevision:(long long)a0 error:(id *)a1;

- (void)cancel;
- (void).cxx_destruct;
- (id)initWithOptions:(id)a0 error:(id *)a1;
- (struct CGSize { double x0; double x1; })smallestImageSizeForTextWithRelativeHeight:(double)a0 originalImageSize:(struct CGSize { double x0; double x1; })a1;
- (id)applyLanguageCorrectionToResults:(id)a0 image:(id)a1 latticeResults:(id *)a2 progressHandler:(id /* block */)a3;
- (id)filterResultsForTextFeatures:(id)a0;
- (float)highConfidenceThreshold;
- (BOOL)lmValidateProbability:(id)a0 options:(id)a1;
- (float)mediumConfidenceThreshold;
- (BOOL)noLMValidateProbability:(id)a0 options:(id)a1;
- (unsigned long long)subfeatureOutputType;
- (id)textResultsInImage:(id)a0 options:(id)a1 withProgressHandler:(id /* block */)a2 error:(id *)a3;
- (id)thresholdsForTextFeature:(id)a0;
- (BOOL)validateProbability:(id)a0 validRangeMin:(double)a1 validRangeMax:(double)a2 options:(id)a3;

@end
