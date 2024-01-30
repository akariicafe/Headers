@class NSString, NSArray, FTTranslationRequest, FTStartSpeechRequest;

@interface FTMutableStartSpeechTranslationRequest : FTStartSpeechTranslationRequest

@property (copy, nonatomic) NSString *conversation_id;
@property (copy, nonatomic) NSString *request_id;
@property (copy, nonatomic) NSArray *translation_locale_pairs;
@property (copy, nonatomic) FTStartSpeechRequest *start_speech_request;
@property (copy, nonatomic) FTTranslationRequest *translation_request;
@property (copy, nonatomic) NSArray *text_to_speech_requests;
@property (nonatomic) BOOL restricted_mode;
@property (copy, nonatomic) NSString *app_id;
@property (nonatomic) long long opt_in_status;
@property (nonatomic) BOOL streaming_mode;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
