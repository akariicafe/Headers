@class NSDictionary, NSArray, NSObject;
@protocol CREngine;

@interface CRImageReader : NSObject {
    NSArray *_outputObjectTypes;
}

@property (retain, nonatomic) NSDictionary *userOptions;
@property BOOL shouldCancel;
@property (retain, nonatomic) NSObject<CREngine> *engine;
@property (copy) NSArray *outputObjectTypes;

+ (id)defaultOptions;
+ (id)errorWithErrorCode:(long long)a0;
+ (BOOL)preheatModelsForOptions:(id)a0 revision:(long long)a1 error:(id *)a2;
+ (id)supportedLanguagesForOptions:(id)a0 revision:(long long)a1 error:(id *)a2;
+ (Class)_engineClassFromOptions:(id)a0 error:(id *)a1;
+ (id)_engineFromOptions:(id)a0 error:(id *)a1;
+ (unsigned long long)_typeForFeature:(id)a0 enginePreferredRegionType:(unsigned long long)a1;
+ (unsigned long long)defaultRevisionNumber;
+ (id)descriptionForErrorCode:(long long)a0;
+ (struct CGSize { double x0; double x1; })detectorImageSizeForOptions:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1;
+ (BOOL)languageIsChinese:(id)a0;
+ (BOOL)languageIsCyrillic:(id)a0;
+ (BOOL)languageIsJapanese:(id)a0;
+ (BOOL)languageIsKorean:(id)a0;
+ (BOOL)languageIsLatin:(id)a0;
+ (id)languageSetFromOptionsDictionary:(id)a0;
+ (id)prioritizationForOptions:(id)a0;

- (void)cancel;
- (id)initWithOptions:(id)a0;
- (void).cxx_destruct;
- (id)documentOutputRegionForImage:(id)a0 options:(id)a1 roi:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 error:(id *)a3 withProgressHandler:(id /* block */)a4;
- (id)initWithOptions:(id)a0 error:(id *)a1;
- (id)recognizeDetectedBlocks:(id)a0 inImage:(id)a1 error:(id *)a2 withProgressHandler:(id /* block */)a3;
- (id)resultsForPixelBuffer:(struct __CVBuffer { } *)a0 options:(id)a1 error:(id *)a2;
- (id)resultsForPixelBuffer:(struct __CVBuffer { } *)a0 roi:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 options:(id)a2 error:(id *)a3 withProgressHandler:(id /* block */)a4;
- (struct CGSize { double x0; double x1; })smallestImageSizeForTextWithRelativeHeight:(double)a0 originalImageSize:(struct CGSize { double x0; double x1; })a1;
- (id)recognizerStats;
- (id)_lineRegionFromTextFeature:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1 titleFeature:(id)a2 title:(id *)a3;
- (id)_lineRegionsFromTextFeatures:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1 titleFeature:(id)a2 title:(id *)a3;
- (id)_regionsFromTextFeatures:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1 titleFeature:(id)a2 title:(id *)a3;
- (id)confidenceThresholdProvider;
- (id)detectorInferenceStats;
- (id)detectorStats;
- (id)documentOutputRegionForImage:(id)a0 roi:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 error:(id *)a2 withProgressHandler:(id /* block */)a3;
- (id)documentOutputRegionForTextFeatures:(id)a0 image:(id)a1;
- (id)lineWrappingStats;
- (id)orientationCorrectionStats;
- (id)postProcStats;
- (BOOL)purgeCaches:(id)a0;
- (id)recognizerDecodingStats;
- (id)recognizerInferenceStats;
- (id)resultsForCRImage:(id)a0 roi:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 options:(id)a2 error:(id *)a3 withProgressHandler:(id /* block */)a4;
- (id)resultsForPixelBuffer:(struct __CVBuffer { } *)a0 roi:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 options:(id)a2 error:(id *)a3;
- (id)textDetectorResultsForImage:(id)a0 error:(id *)a1;
- (id)textGroupingStats;
- (id)textRecognizerResultsForTextFeatures:(id)a0 forImageAtURL:(id)a1 options:(id)a2;
- (id)textRecognizerResultsForTextFeatures:(id)a0 inImage:(id)a1 options:(id)a2;
- (id)textResultsForImage:(id)a0 options:(id)a1;
- (id)textResultsForImage:(id)a0 options:(id)a1 withProgressHandler:(id /* block */)a2;
- (id)textResultsForImage:(id)a0 roi:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 options:(id)a2 error:(id *)a3 withProgressHandler:(id /* block */)a4;
- (id)textResultsForImageAtURL:(id)a0 options:(id)a1;

@end
