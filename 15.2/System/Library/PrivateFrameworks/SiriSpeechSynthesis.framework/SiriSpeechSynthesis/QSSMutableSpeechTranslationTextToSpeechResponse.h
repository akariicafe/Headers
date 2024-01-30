@class NSString, QSSTextToSpeechResponse;

@interface QSSMutableSpeechTranslationTextToSpeechResponse : QSSSpeechTranslationTextToSpeechResponse

@property (copy, nonatomic) NSString *conversation_id;
@property (copy, nonatomic) NSString *request_id;
@property (copy, nonatomic) NSString *target_locale;
@property (copy, nonatomic) QSSTextToSpeechResponse *text_to_speech_response;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
