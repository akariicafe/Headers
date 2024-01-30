@class CHTextInputTargetContentInfo, NSString, PKDrawing, NSArray, NSDate, CHTokenizedTextResult;

@interface PKTextInputDebugLogEntry : NSObject

@property (retain, nonatomic) NSDate *entryDate;
@property (copy, nonatomic) NSString *recognitionLocaleIdentifier;
@property (retain, nonatomic) PKDrawing *inputDrawing;
@property (nonatomic) BOOL inputContainsInProgressStroke;
@property (copy, nonatomic) NSArray *inputTargets;
@property (retain, nonatomic) CHTextInputTargetContentInfo *inputTargetContentInfo;
@property (copy, nonatomic) NSString *inputTargetElementType;
@property (retain, nonatomic) CHTokenizedTextResult *tokenizedTextResult;
@property (copy, nonatomic) NSString *resultCommittedText;
@property (copy, nonatomic) NSString *resultTopTranscription;
@property (nonatomic) long long resultCommittedTokenColumnCount;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } resultAffectedRange;
@property (copy, nonatomic) NSString *resultTypeDescription;
@property (copy, nonatomic) NSString *resultCommitReason;
@property (nonatomic) double resultRecognitionDuration;

+ (id)mediumDescriptionForResultQueryItem:(id)a0;
+ (id)_mutableDictionaryRepresentationForResultQueryItem:(id)a0 detailLevel:(long long)a1;
+ (id)_referenceSubstringForTargetContentInfo:(id)a0 resultAffectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 targetContentLevel:(long long)a2 localeIdentifier:(id)a3;
+ (id)_minimalReferenceString:(id)a0 rangeOfInterest:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 tokenSearchDistance:(long long)a2 localeIdentifier:(id)a3;
+ (id)loggedDateFormatter;

- (id)minimalDescription;
- (void).cxx_destruct;
- (id)description;
- (id)mediumDescription;
- (id)dictionaryRepresentationWithTargetContentLevel:(long long)a0;
- (id)referenceSubstringWithTargetContentLevel:(long long)a0;
- (BOOL)_isResultTypeText;
- (id)dictionaryRepresentationWithDetailLevel:(long long)a0 targetContentLevel:(long long)a1;

@end
