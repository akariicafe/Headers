@class NSString, PKCurrencyAmount;

@interface PKTransactionAmount : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *label;
@property (retain, nonatomic) PKCurrencyAmount *amount;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithCurrencyAmount:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithCurrencyAmount:(id)a0 label:(id)a1;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
