@class NSDecimalNumber, NSString;

@interface PKCurrencyAmount : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDecimalNumber *amount;
@property (copy, nonatomic) NSString *currency;
@property (nonatomic) long long exponent;
@property (copy, nonatomic) NSString *preformattedString;

- (long long)compareToCurrencyCode:(id)a0 amount:(id)a1;
- (id)formattedStringValue;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isCurrency;
- (id)initWithAmount:(id)a0 currency:(id)a1 exponent:(long long)a2;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithAmount:(id)a0 exponent:(long long)a1 preformattedString:(id)a2;
- (id)description;
- (id)minimalFormattedStringValue;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToCurrencyAmount:(id)a0;
- (id)minimalFormattedStringValueInLocale:(id)a0;
- (id)initWithAmount:(id)a0 currency:(id)a1;
- (id)absoluteValue;
- (id)negativeValue;
- (void)encodeWithCoder:(id)a0;

@end
