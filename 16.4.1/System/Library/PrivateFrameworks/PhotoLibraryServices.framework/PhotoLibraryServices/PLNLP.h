@interface PLNLP : NSObject

+ (id)dateIntervalsFromMessage:(id)a0 onDate:(id)a1;
+ (id)tokensFromString:(id)a0 options:(long long)a1;
+ (id)_englishStopWords;
+ (id)_frenchStopWords;
+ (id)dateFilterForCMMWithAttributes:(id)a0 withReferenceDate:(id)a1;
+ (id)lemmasForToken:(id)a0 locale:(id)a1 options:(long long)a2;
+ (id)ngramsFromTokens:(id)a0 ofSize:(unsigned long long)a1 usingSeparator:(id)a2;
+ (BOOL)nlpSearchSupportsLocale:(id)a0;
+ (id)stopWordsForLanguageCode:(id)a0;
+ (id)stringWithoutDiacriticsFromString:(id)a0;

@end
