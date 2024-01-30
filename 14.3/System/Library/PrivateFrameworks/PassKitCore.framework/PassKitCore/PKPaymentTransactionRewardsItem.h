@class NSString, NSDecimalNumber, PKCurrencyAmount;

@interface PKPaymentTransactionRewardsItem : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) PKCurrencyAmount *currencyAmount;
@property (retain, nonatomic) NSDecimalNumber *eligibleValue;
@property (nonatomic) unsigned long long eligibleValueUnit;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_initWithRewardsDictionary:(id)a0;
- (BOOL)isEqualToRewardsItem:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)jsonDictionaryRepresentation;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
