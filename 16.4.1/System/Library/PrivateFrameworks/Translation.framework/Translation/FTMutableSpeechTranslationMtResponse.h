@class NSString, FTTranslationLocalePair, NSArray;

@interface FTMutableSpeechTranslationMtResponse : FTSpeechTranslationMtResponse

@property (copy, nonatomic) NSString *conversation_id;
@property (copy, nonatomic) NSString *request_id;
@property (nonatomic) int return_code;
@property (copy, nonatomic) NSString *return_str;
@property (copy, nonatomic) FTTranslationLocalePair *translation_locale_pair;
@property (copy, nonatomic) NSArray *n_best_translated_phrases;
@property (nonatomic) BOOL is_final;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
