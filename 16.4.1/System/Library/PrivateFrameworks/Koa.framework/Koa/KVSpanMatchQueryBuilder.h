@class NSString, NSMutableString, NSLocale;

@interface KVSpanMatchQueryBuilder : NSObject {
    NSLocale *_locale;
    NSString *_cleanText;
    NSMutableString *_cleanTextMutable;
    struct TokenStream { struct Token *__begin_; struct Token *__end_; struct __compressed_pair<skit::Token *, std::allocator<skit::Token>> { struct Token *__value_; } __end_cap_; } _tokens;
    struct TokenStream { struct Token *__begin_; struct Token *__end_; struct __compressed_pair<skit::Token *, std::allocator<skit::Token>> { struct Token *__value_; } __end_cap_; } _normalized_tokens;
}

+ (id)queryFromTokenChain:(id)a0;

- (id)build;
- (id).cxx_construct;
- (id)init;
- (id)initWithLocale:(id)a0;
- (void).cxx_destruct;
- (void)addTokenWithValue:(id)a0 cleanValue:(id)a1 normalizedValues:(id)a2 beginIndex:(unsigned int)a3 endIndex:(unsigned int)a4 isSignificant:(BOOL)a5 isWitespace:(BOOL)a6;
- (id)initWithLocale:(id)a0 cleanText:(id)a1;

@end
