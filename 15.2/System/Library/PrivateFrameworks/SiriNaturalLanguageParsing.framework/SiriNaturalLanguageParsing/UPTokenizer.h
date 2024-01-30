@class NSLocale;

@interface UPTokenizer : NSObject

@property (readonly, copy) NSLocale *locale;

+ (id)nonWhitespaceTokensForTokens:(id)a0;

- (id)initWithLocale:(id)a0;
- (void).cxx_destruct;
- (id)tokenizeUtterance:(id)a0;

@end
