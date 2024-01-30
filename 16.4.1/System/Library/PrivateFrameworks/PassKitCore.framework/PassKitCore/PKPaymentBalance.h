@class NSDecimalNumber, NSSet, NSString, NSArray, PKCurrencyAmount, NSDate;

@interface PKPaymentBalance : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSSet *identifiers;
@property (copy, nonatomic) NSDecimalNumber *value;
@property (copy, nonatomic) NSString *currencyCode;
@property (readonly, nonatomic) PKCurrencyAmount *currencyValue;
@property (readonly, nonatomic) BOOL isCurrency;
@property (nonatomic) long long exponent;
@property (readonly, nonatomic) NSString *formattedValue;
@property (copy, nonatomic) NSString *localizedTitle;
@property (copy, nonatomic) NSString *localizedDescription;
@property (nonatomic) BOOL isPrimary;
@property (copy, nonatomic) NSDate *lastUpdateDate;
@property (copy, nonatomic) NSString *preformattedString;
@property (copy, nonatomic) NSArray *componentBalances;

+ (id)identifiersFromComponentBalances:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (void)_setValueWithRounding:(id)a0;
- (id)initWithComponentBalances:(id)a0;
- (id)initWithComponentBalances:(id)a0 identifiers:(id)a1;
- (id)initWithComponentBalances:(id)a0 identifiers:(id)a1 expiredBalances:(id)a2;
- (id)initWithIdentifier:(id)a0 forCurrencyAmount:(id)a1;
- (id)initWithIdentifier:(id)a0 forValue:(id)a1 roundingToExponent:(long long)a2;
- (id)initWithIdentifiers:(id)a0 forCurrencyAmount:(id)a1;
- (id)initWithIdentifiers:(id)a0 forValue:(id)a1 roundingToExponent:(long long)a2;
- (BOOL)isComposed;

@end
