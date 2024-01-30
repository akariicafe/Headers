@class NSString, NSArray, QSSRecognitionResult;

@interface QSSMutableKeywordFinderRequest : QSSKeywordFinderRequest

@property (copy, nonatomic) NSString *speech_id;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSArray *keywords;
@property (copy, nonatomic) QSSRecognitionResult *recognition_result;
@property (nonatomic) BOOL enable_sanitization;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
