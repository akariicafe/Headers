@class NLTokenizer;

@interface ICSearchQueryParser : NSObject

@property (class, readonly, nonatomic) NLTokenizer *tokenizer;

+ (id)tokensFromString:(id)a0 language:(id)a1;
+ (id)_queryStringForSingleTokenString:(id)a0 queryFields:(id)a1 matchType:(unsigned char)a2 queryFlags:(id)a3;
+ (id)spellCheckerGuessesForSearchString:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 language:(id)a2;
+ (id)spellChecker;
+ (id)expandedTokensForSearchString:(id)a0 language:(id)a1;
+ (id)queryStringForExpandedTokens:(id)a0 queryFields:(id)a1 matchType:(unsigned char)a2;
+ (id)queryStringForSearchString:(id)a0 queryFields:(id)a1 matchType:(unsigned char)a2;
+ (id)prefixMatchingQueryStringForSearchString:(id)a0 enableSpellCheckSPI:(BOOL)a1 languageForSpellchecking:(id)a2 expandedTokens:(id *)a3;

@end
