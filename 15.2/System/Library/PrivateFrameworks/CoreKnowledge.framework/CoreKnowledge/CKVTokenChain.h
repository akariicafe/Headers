@class NSString, NSArray, NSLocale;

@interface CKVTokenChain : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *normalizedString;
@property (readonly, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) NSArray *tokens;

+ (id)tokenChainBuilderForString:(id)a0 locale:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithString:(id)a0 locale:(id)a1 tokens:(id)a2;
- (BOOL)isEqualToTokenChain:(id)a0;

@end
