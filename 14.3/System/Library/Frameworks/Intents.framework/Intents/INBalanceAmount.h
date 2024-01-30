@class NSDecimalNumber, NSString;

@interface INBalanceAmount : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDecimalNumber *amount;
@property (readonly, nonatomic) long long balanceType;
@property (readonly, copy, nonatomic) NSString *currencyCode;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAmount:(id)a0 balanceType:(long long)a1;
- (id)initWithAmount:(id)a0 balanceType:(long long)a1 currencyCode:(id)a2;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)_intents_readableTitleWithLocalizer:(id)a0 metadata:(id)a1;
- (id)initWithAmount:(id)a0 currencyCode:(id)a1;
- (BOOL)isEqual:(id)a0;
- (id)descriptionAtIndent:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_dictionaryRepresentation;

@end
