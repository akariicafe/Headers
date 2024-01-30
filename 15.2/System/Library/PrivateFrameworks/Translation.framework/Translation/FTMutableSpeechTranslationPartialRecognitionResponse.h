@class NSString;

@interface FTMutableSpeechTranslationPartialRecognitionResponse : FTSpeechTranslationPartialRecognitionResponse

@property (copy, nonatomic) NSString *conversation_id;
@property (copy, nonatomic) NSString *request_id;
@property (nonatomic) int return_code;
@property (copy, nonatomic) NSString *return_str;
@property (copy, nonatomic) NSString *source_locale;
@property (copy, nonatomic) NSString *recognition_text;
@property (nonatomic) int confidence;
@property (nonatomic) BOOL is_stable_result;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
