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

+ (struct CGSize { double x0; double x1; })detectorImageSizeForOptions:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1;
+ (BOOL)preheatModelsForOptions:(id)a0 revision:(long long)a1 error:(id *)a2;
+ (id)supportedLanguagesForRevision:(long long)a0 error:(id *)a1;

- (id)textResultsInImage:(id)a0 options:(id)a1 withProgressHandler:(id /* block */)a2 error:(id *)a3;
- (id)thresholdsForTextFeature:(id)a0;
- (unsigned long long)subfeatureOutputType;
- (struct CGSize { double x0; double x1; })smallestImageSizeForTextWithRelativeHeight:(double)a0 originalImageSize:(struct CGSize { double x0; double x1; })a1;
- (id)initWithOptions:(id)a0 error:(id *)a1;
- (float)highConfidenceThreshold;
- (void).cxx_destruct;
- (float)mediumConfidenceThreshold;
- (void)cancel;
- (id)filterResultsForTextFeatures:(id)a0;
- (id)applyLanguageCorrectionToResults:(id)a0 image:(id)a1 latticeResults:(id *)a2 progressHandler:(id /* block */)a3;
- (BOOL)noLMValidateProbability:(id)a0 options:(id)a1;
- (BOOL)lmValidateProbability:(id)a0 options:(id)a1;
- (BOOL)validateProbability:(id)a0 validRangeMin:(double)a1 validRangeMax:(double)a2 options:(id)a3;

@end
