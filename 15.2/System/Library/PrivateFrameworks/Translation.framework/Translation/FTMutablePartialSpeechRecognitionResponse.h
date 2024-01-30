@class NSString;

@interface FTMutablePartialSpeechRecognitionResponse : FTPartialSpeechRecognitionResponse

@property (copy, nonatomic) NSString *speech_id;
@property (copy, nonatomic) NSString *session_id;
@property (nonatomic) int return_code;
@property (copy, nonatomic) NSString *return_str;
@property (copy, nonatomic) NSString *recognition_text;
@property (nonatomic) BOOL is_stable_result;
@property (nonatomic) int audio_duration_ms;
@property (nonatomic) int confidence;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *request_locale;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
