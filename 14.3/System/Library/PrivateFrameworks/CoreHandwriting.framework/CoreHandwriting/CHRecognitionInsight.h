@class NSError, NSString, NSArray, CHTokenizedTextResult, CHRecognitionInsightRequest, NSDictionary, NSLocale, NSCharacterSet, CHDrawing;

@interface CHRecognitionInsight : NSObject

@property (retain, nonatomic) CHRecognitionInsightRequest *insightRequest;
@property (copy, nonatomic) NSLocale *recognizerLocale;
@property (nonatomic) int recognizerRecognitionMode;
@property (nonatomic) int recognizerContentType;
@property (nonatomic) int autoCapitalizationMode;
@property (copy, nonatomic) NSCharacterSet *recognizerActiveCharacterSet;
@property (copy, nonatomic) NSDictionary *recognizerOptions;
@property (nonatomic) unsigned long long recognizerMaxRecognitionResultCount;
@property (nonatomic) struct CGSize { double width; double height; } recognizerMinimumDrawingSize;
@property (copy, nonatomic) CHDrawing *inputDrawing;
@property (copy, nonatomic) NSArray *inputDrawingCutPoints;
@property (copy, nonatomic) NSArray *spaceProbabilities;
@property (copy, nonatomic) NSArray *charBoundaryProbabilities;
@property (copy, nonatomic) NSArray *delayedStrokeProbabilities;
@property (copy, nonatomic) CHTokenizedTextResult *textResult;
@property (copy, nonatomic) NSError *recognitionError;
@property (readonly, nonatomic) NSString *recognizerRecognitionModeDescription;
@property (readonly, nonatomic) NSString *recognizerContentTypeDescription;
@property (readonly, nonatomic) NSString *autoCapitalizationModeDescription;

- (void)dealloc;
- (id)description;
- (void)recordSpaceProbabilities:(const struct vector<double, std::__1::allocator<double> > { double *x0; double *x1; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x0; } x2; } *)a0;
- (void)recordCharBoundaryProbabilities:(const struct vector<double, std::__1::allocator<double> > { double *x0; double *x1; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x0; } x2; } *)a0;
- (void)recordDelayedStrokeProbabilities:(const struct vector<double, std::__1::allocator<double> > { double *x0; double *x1; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x0; } x2; } *)a0;
- (void)recordConfigurationForRecognizer:(id)a0 options:(id)a1;
- (void)recordTextResult:(id)a0 recognitionError:(id)a1;
- (void)recordInsightRequest:(id)a0;
- (void)recordInputDrawing:(id)a0;
- (void)recordInputDrawingCutPoints:(id)a0;

@end
