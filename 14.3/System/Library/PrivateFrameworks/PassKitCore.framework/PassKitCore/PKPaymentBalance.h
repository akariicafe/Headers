@class NSDecimalNumber, NSString, PKCurrencyAmount, NSDate;

@interface PKPaymentBalance : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
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

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)_setValueWithRounding:(id)a0;
- (id)initWithIdentifier:(id)a0 forCurrencyAmount:(id)a1;
- (id)initWithIdentifier:(id)a0 forValue:(id)a1 roundingToExponent:(long long)a2;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
