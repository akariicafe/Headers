@class NSString;

@interface VNDetectTextRectanglesRequest : VNImageBasedRequest

@property (nonatomic) unsigned long long algorithm;
@property (nonatomic) unsigned long long minimumCharacterPixelHeight;
@property (nonatomic) BOOL detectDiacritics;
@property (nonatomic) BOOL minimizeFalseDetections;
@property (copy, nonatomic) NSString *textRecognition;
@property (nonatomic) BOOL reportCharacterBoxes;

+ (void)initialize;
+ (Class)configurationClass;
+ (void)recordDefaultOptionsInDictionary:(id)a0;

- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (void)applyConfigurationOfRequest:(id)a0;
- (BOOL)_detectCreditCardTextWithRequestPerformingContext:(id)a0 requestRevision:(unsigned long long)a1 error:(id *)a2;
- (BOOL)_detectTextWithRequestPerformingContext:(id)a0 requestRevision:(unsigned long long)a1 error:(id *)a2;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)a0;

@end
