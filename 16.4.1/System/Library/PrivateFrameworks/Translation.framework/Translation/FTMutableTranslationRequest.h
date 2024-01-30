@class FTSiriTranslationInfo, NSString, NSArray, FTSpeechTranslationInfo, FTSiriPayloadTranslationInfo, FTWebTranslationInfo;

@interface FTMutableTranslationRequest : FTTranslationRequest

@property (copy, nonatomic) NSString *speech_id;
@property (copy, nonatomic) NSString *request_id;
@property (copy, nonatomic) NSString *task;
@property (copy, nonatomic) NSString *source_language;
@property (copy, nonatomic) NSString *target_language;
@property (copy, nonatomic) NSArray *translation_phrase;
@property (copy, nonatomic) FTSiriTranslationInfo *siri_translation_info;
@property (copy, nonatomic) FTSpeechTranslationInfo *speech_translation_info;
@property (copy, nonatomic) FTSiriPayloadTranslationInfo *siri_payload_translation_info;
@property (copy, nonatomic) NSString *sequence_id;
@property (copy, nonatomic) FTWebTranslationInfo *web_translation_info;
@property (nonatomic) BOOL disable_log;
@property (nonatomic) long long opt_in_status;
@property (copy, nonatomic) NSString *app_id;
@property (copy, nonatomic) NSString *use_case;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
