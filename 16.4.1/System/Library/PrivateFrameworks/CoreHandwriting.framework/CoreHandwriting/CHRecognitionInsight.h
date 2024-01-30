@class NSError, NSString, CHTokenizedTextResult, CHRecognitionInsightRequest, NSDictionary, NSLocale, NSCharacterSet, CHDrawing;

@interface CHRecognitionInsight : NSObject

@property (retain, nonatomic) CHRecognitionInsightRequest *insightRequest;
@property (copy, nonatomic) NSLocale *recognizerLocale;
@property (nonatomic) int recognizerRecognitionMode;
@property (nonatomic) int recognizerContentType;
@property (nonatomic) int autoCapitalizationMode;
@property (nonatomic) int autoCorrectionMode;
@property (copy, nonatomic) NSCharacterSet *recognizerActiveCharacterSet;
@property (copy, nonatomic) NSDictionary *recognizerOptions;
@property (nonatomic) unsigned long long recognizerMaxRecognitionResultCount;
@property (nonatomic) struct CGSize { double width; double height; } recognizerMinimumDrawingSize;
@property (copy, nonatomic) CHDrawing *inputDrawing;
@property (copy, nonatomic) CHTokenizedTextResult *textResult;
@property (copy, nonatomic) NSError *recognitionError;
@property (readonly, nonatomic) NSString *recognizerRecognitionModeDescription;
@property (readonly, nonatomic) NSString *recognizerContentTypeDescription;
@property (readonly, nonatomic) NSString *autoCapitalizationModeDescription;
@property (readonly, nonatomic) NSString *autoCorrectionModeDescription;

- (id)description;
- (void).cxx_destruct;
- (void)recordConfigurationForRecognizer:(id)a0 options:(id)a1;
- (void)recordInputDrawing:(id)a0;
- (void)recordInsightRequest:(id)a0;
- (void)recordTextResult:(id)a0 recognitionError:(id)a1;

@end
