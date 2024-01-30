@interface INVocabulary : NSObject

+ (id)sharedVocabulary;

- (void)_THROW_EXCEPTION_FOR_PROCESS_MISSING_ENTITLEMENT_com_apple_developer_siri;
- (id)init;
- (void)removeAllVocabularyStrings;
- (void)setVocabulary:(id)a0 ofType:(long long)a1;
- (void)setVocabularyStrings:(id)a0 ofType:(long long)a1;

@end
