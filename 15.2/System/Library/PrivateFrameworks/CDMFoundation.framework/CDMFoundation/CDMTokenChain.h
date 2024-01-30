@class NSString, NSMutableArray;

@interface CDMTokenChain : NSObject <NSCopying> {
    NSMutableArray *_characterToTokenIndexMapping;
}

@property (readonly, nonatomic) NSString *string;
@property (readonly, nonatomic) NSString *locale;
@property (readonly, nonatomic) NSMutableArray *tokens;

+ (id)convertCDMTokenChainToProtoTokenChain:(id)a0;

- (id)normalizedString;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithString:(id)a0 locale:(id)a1;
- (void)addToken:(id)a0;
- (id)initWithString:(id)a0 locale:(id)a1 tokens:(id)a2;
- (id)initWithProtoTokenChain:(id)a0;
- (id)cleanStringFromToken:(long long)a0 toToken:(long long)a1;
- (int)tokenIndexFromCharacterIndex:(long long)a0;
- (id)dropWhitespaceTokens;
- (id)dropInsignificantTokens;
- (id)extractTokens;
- (void)trimNonWhitespaceTokens:(int)a0;

@end
