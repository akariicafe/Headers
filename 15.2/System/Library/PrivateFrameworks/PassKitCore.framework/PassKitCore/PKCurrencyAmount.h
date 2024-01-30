@class NSDecimalNumber, NSString;

@interface PKCurrencyAmount : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDecimalNumber *amount;
@property (copy, nonatomic) NSString *currency;
@property (nonatomic) long long exponent;
@property (copy, nonatomic) NSString *preformattedString;

- (BOOL)isEqualToCurrencyAmount:(id)a0;
- (id)absoluteValue;
- (id)minimalFormattedStringValueInLocale:(id)a0;
- (id)initWithAmount:(id)a0 currency:(id)a1;
- (id)negativeValue;
- (void)encodeWithCoder:(id)a0;
- (id)initWithAmount:(id)a0 exponent:(long long)a1 preformattedString:(id)a2;
- (id)initWithAmount:(id)a0 currency:(id)a1 exponent:(long long)a2;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (long long)compareToCurrencyCode:(id)a0 amount:(id)a1;
- (id)minimalFormattedStringValue;
- (id)formattedStringValue;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)amountByConvertingToSmallestCommonCurrencyUnit;
- (unsigned long long)hash;
- (BOOL)isCurrency;

@end
