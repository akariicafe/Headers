@class NSDictionary, NSLocale;

@interface _LTEtiquetteSanitizer : NSObject {
    NSDictionary *_replacementTree;
    NSLocale *_locale;
}

+ (void)initialize;

- (void).cxx_destruct;
- (id)matchesForString:(id)a0;
- (id)initWithModelURL:(id)a0 language:(id)a1;
- (id)initWithReplacementTokenDictionary:(id)a0 language:(id)a1;
- (id)replacementStringForString:(id)a0 forToken:(id)a1;
- (id)sanitizedStringForString:(id)a0;
- (id)stringByReplacingMatches:(id)a0 inString:(id)a1;
- (id)treeForReplacementTokens:(id)a0;

@end
