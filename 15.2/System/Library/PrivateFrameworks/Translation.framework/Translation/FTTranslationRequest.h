@class FTSpeechTranslationInfo, NSString, NSArray, FTSiriTranslationInfo, FTSiriPayloadTranslationInfo, NSMutableDictionary, NSData, FTWebTranslationInfo;

@interface FTTranslationRequest : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct TranslationRequest { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSString *speech_id;
@property (readonly, nonatomic) NSString *request_id;
@property (readonly, nonatomic) NSString *task;
@property (readonly, nonatomic) NSString *source_language;
@property (readonly, nonatomic) NSString *target_language;
@property (readonly, nonatomic) NSArray *translation_phrase;
@property (readonly, nonatomic) FTSiriTranslationInfo *siri_translation_info;
@property (readonly, nonatomic) FTSpeechTranslationInfo *speech_translation_info;
@property (readonly, nonatomic) FTSiriPayloadTranslationInfo *siri_payload_translation_info;
@property (readonly, nonatomic) NSString *sequence_id;
@property (readonly, nonatomic) FTWebTranslationInfo *web_translation_info;
@property (readonly, nonatomic) BOOL disable_log;
@property (readonly, nonatomic) long long opt_in_status;
@property (readonly, nonatomic) NSString *app_id;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct TranslationRequest { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (struct Offset<siri::speech::schema_fb::TranslationRequest> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initWithFlatbuffData:(id)a0;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct TranslationRequest { unsigned char x0[1]; } *)a1;

@end
