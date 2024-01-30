@interface WBSTranslationURLParser : NSObject

+ (id)parseURL:(id)a0 forProvider:(long long)a1;
+ (void)_normalizeSourceLanguage:(id *)a0 targetLanguage:(id *)a1 forProvider:(long long)a2;
+ (id)_parseURL:(id)a0 sourceLanguageKey:(id)a1 targetLanguageKey:(id)a2 urlKey:(id)a3 provider:(long long)a4;

@end
