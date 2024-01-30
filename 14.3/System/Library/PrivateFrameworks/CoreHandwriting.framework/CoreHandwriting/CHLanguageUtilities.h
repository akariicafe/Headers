@interface CHLanguageUtilities : NSObject

+ (unsigned int)normalizeLMTokenIDForWord:(id)a0 tokenID:(unsigned int)a1 isFromPattern:(BOOL)a2 score:(double *)a3 languageModel:(void *)a4;
+ (id)tokensRangesForString:(id)a0 outTokenIDs:(id *)a1 languageModel:(void *)a2;
+ (id)splitStringIntoSubtokensForLexicon:(id)a0 minLength:(long long)a1;
+ (BOOL)findPartialMatchInPhraseLexicon:(struct _LXLexicon { } *)a0 token:(id)a1 contextBeforeToken:(id)a2;
+ (id)transliterateStringUsingICUTransliterator:(id)a0 _icuTransliterator:(void **)a1;

@end
