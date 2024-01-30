@class NSString;

@interface QSSMutableTranslationSupportedLanguagesResponse_LanguagePair : QSSTranslationSupportedLanguagesResponse_LanguagePair

@property (copy, nonatomic) NSString *source_locale;
@property (copy, nonatomic) NSString *target_locale;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
