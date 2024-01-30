@interface INVocabulary : NSObject

+ (id)sharedVocabulary;

- (id)init;
- (void)removeAllVocabularyStrings;
- (void)setVocabularyStrings:(id)a0 ofType:(long long)a1;
- (void)_THROW_EXCEPTION_FOR_PROCESS_MISSING_ENTITLEMENT_com_apple_developer_siri;
- (void)setVocabulary:(id)a0 ofType:(long long)a1;

@end
