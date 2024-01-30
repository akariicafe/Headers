@class NSDecimalNumber;

@interface PKCreditAccountRates : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDecimalNumber *aprForPurchases;

- (void)encodeWithCoder:(id)a0;
- (id)jsonString;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)jsonDictionaryRepresentation;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (id)formattedAPRForPurchasesPercentageString;
- (unsigned long long)hash;

@end
