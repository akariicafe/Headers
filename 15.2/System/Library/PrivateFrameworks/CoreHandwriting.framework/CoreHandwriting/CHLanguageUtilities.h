@interface CHLanguageUtilities : NSObject

+ (unsigned int)normalizeLMTokenIDForWord:(id)a0 tokenID:(unsigned int)a1 isFromPattern:(BOOL)a2 score:(double *)a3 languageModel:(void *)a4;
+ (BOOL)isMecabraConversionCandidateAllowed:(id)a0;
+ (id)tokensRangesForString:(id)a0 outTokenIDs:(id *)a1 languageModel:(void *)a2;
+ (id)splitStringIntoSubtokensForLexicon:(id)a0 minLength:(long long)a1;
+ (BOOL)findPartialMatchInPhraseLexicon:(struct _LXLexicon { } *)a0 token:(id)a1 contextBeforeToken:(id)a2;
+ (id)transliterateStringUsingICUTransliterator:(id)a0 _icuTransliterator:(void **)a1;
+ (unsigned int)tokenIDForString:(id)a0 withLexicon:(struct _LXLexicon { } *)a1;
+ (double)characterLMLogProbabilityForString:(id)a0 characterLM:(id)a1;
+ (id)mecabraTokenizationAndKanaConversionForString:(id)a0 mecabraEngine:(struct __Mecabra { } *)a1 contextRef:(struct __MecabraContext { } *)a2 leftCandidateRef:(void *)a3 alternativeCandidateLimit:(long long)a4;

@end
