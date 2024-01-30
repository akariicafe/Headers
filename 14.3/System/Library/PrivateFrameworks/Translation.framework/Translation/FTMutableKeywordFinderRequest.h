@class NSString, NSArray, FTRecognitionResult;

@interface FTMutableKeywordFinderRequest : FTKeywordFinderRequest

@property (copy, nonatomic) NSString *speech_id;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSArray *keywords;
@property (copy, nonatomic) FTRecognitionResult *recognition_result;
@property (nonatomic) BOOL enable_sanitization;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
