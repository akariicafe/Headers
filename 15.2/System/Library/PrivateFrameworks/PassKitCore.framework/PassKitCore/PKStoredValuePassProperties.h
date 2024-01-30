@class NSDecimalNumber, NSString, NSArray, PKCurrencyAmount, NSDate;

@interface PKStoredValuePassProperties : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *appletFormat;
@property (readonly, copy, nonatomic) NSDecimalNumber *balance;
@property (copy, nonatomic) PKCurrencyAmount *balanceAmount;
@property (copy, nonatomic) NSArray *balances;
@property (copy, nonatomic) NSDate *expirationDate;
@property (nonatomic, getter=isBlocked) BOOL blocked;
@property (nonatomic, getter=isInStation) BOOL inStation;
@property (readonly, nonatomic) NSString *displayableBalance;
@property (readonly, nonatomic) NSString *displayableTransitBalance;
@property (readonly, nonatomic) NSDecimalNumber *decimalTransitBalance;
@property (readonly, nonatomic) NSString *currencyCode;
@property (copy, nonatomic) NSArray *enrouteTransitTypes;
@property (readonly, nonatomic) BOOL isEnRoute;
@property (readonly, nonatomic, getter=isBlacklisted) BOOL blacklisted;

+ (id)passPropertiesForPass:(id)a0;
+ (Class)equalityClass;

- (void)encodeWithCoder:(id)a0;
- (id)initWithTransitAppletState:(id)a0 paymentApplication:(id)a1 fieldCollection:(id)a2;
- (id)primaryCashBalance;
- (id)decimalBalance;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)balanceWithIdentifier:(id)a0;

@end
