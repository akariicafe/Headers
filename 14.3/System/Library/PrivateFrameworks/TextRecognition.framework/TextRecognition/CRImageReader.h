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
+ (id)supportedLanguagesForOptions:(id)a0 revision:(long long)a1 error:(id *)a2;
+ (id)_engineFromOptions:(id)a0 error:(id *)a1;
+ (Class)_engineClassFromOptions:(id)a0 error:(id *)a1;
+ (unsigned long long)defaultRevisionNumber;
+ (id)descriptionForErrorCode:(long long)a0;
+ (id)languageSetFromOptionsDictionary:(id)a0;

- (void)cancel;
- (id)initWithOptions:(id)a0;
- (void).cxx_destruct;
- (id)signpostLog;
- (id)resultsForPixelBuffer:(struct __CVBuffer { } *)a0 options:(id)a1 error:(id *)a2;
- (id)resultsForPixelBuffer:(struct __CVBuffer { } *)a0 roi:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 options:(id)a2 error:(id *)a3 withProgressHandler:(id /* block */)a4;
- (struct CGSize { double x0; double x1; })smallestImageSizeForTextWithRelativeHeight:(double)a0 originalImageSize:(struct CGSize { double x0; double x1; })a1;
- (id)initWithOptions:(id)a0 error:(id *)a1;
- (id)detectorStats;
- (id)postProcStats;
- (id)resultsForPixelBuffer:(struct __CVBuffer { } *)a0 roi:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 options:(id)a2 error:(id *)a3;
- (id)textResultsForImage:(id)a0 roi:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 options:(id)a2 error:(id *)a3 withProgressHandler:(id /* block */)a4;
- (id)confidenceThresholdProvider;
- (id)textResultsForImage:(id)a0 options:(id)a1 withProgressHandler:(id /* block */)a2;
- (id)textDetectorResultsForImage:(id)a0 error:(id *)a1;
- (id)recognizerStats;
- (id)recognizerInferenceStats;
- (id)recognizerDecodingStats;
- (id)detectorInferenceStats;
- (BOOL)purgeCaches:(id)a0;
- (id)textResultsForImageAtURL:(id)a0 options:(id)a1;
- (id)textResultsForImage:(id)a0 options:(id)a1;
- (id)textRecognizerResultsForTextFeatures:(id)a0 inImage:(id)a1 options:(id)a2;
- (id)textRecognizerResultsForTextFeatures:(id)a0 forImageAtURL:(id)a1 options:(id)a2;

@end
