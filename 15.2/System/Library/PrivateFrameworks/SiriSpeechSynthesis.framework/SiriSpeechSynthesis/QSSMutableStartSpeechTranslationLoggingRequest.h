@class NSString, QSSLanguageDetected, NSArray, QSSTranslationLocalePair;

@interface QSSMutableStartSpeechTranslationLoggingRequest : QSSStartSpeechTranslationLoggingRequest

@property (copy, nonatomic) NSString *conversation_id;
@property (copy, nonatomic) NSString *request_id;
@property (copy, nonatomic) QSSTranslationLocalePair *translation_locale_pair;
@property (copy, nonatomic) QSSLanguageDetected *detected_locale;
@property (copy, nonatomic) NSString *user_selected_locale;
@property (copy, nonatomic) NSArray *senses;
@property (copy, nonatomic) NSString *user_selected_sense;
@property (copy, nonatomic) NSArray *user_interacted_senses;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
