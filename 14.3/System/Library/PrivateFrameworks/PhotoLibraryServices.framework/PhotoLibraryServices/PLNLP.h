@interface PLNLP : NSObject

+ (id)_englishStopWords;
+ (id)lemmasForToken:(id)a0 locale:(id)a1 options:(long long)a2;
+ (id)stringWithoutDiacriticsFromString:(id)a0;
+ (id)ngramsFromTokens:(id)a0 ofSize:(unsigned long long)a1 usingSeparator:(id)a2;
+ (id)dateFilterForCMMWithAttributes:(id)a0 withReferenceDate:(id)a1;
+ (id)stopWordsForLanguageCode:(id)a0;
+ (id)_frenchStopWords;
+ (id)tokensFromString:(id)a0 options:(long long)a1;
+ (id)dateIntervalsFromMessage:(id)a0 onDate:(id)a1;
+ (BOOL)nlpSearchSupportsLocale:(id)a0;

@end
