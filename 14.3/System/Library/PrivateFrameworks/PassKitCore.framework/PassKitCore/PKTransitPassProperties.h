@class PKFelicaPassProperties, NSString, NSDecimalNumber, NSArray, PKCurrencyAmount, NSDate;

@interface PKTransitPassProperties : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PKFelicaPassProperties *felicaProperties;
@property (copy, nonatomic) NSString *appletFormat;
@property (copy, nonatomic) PKCurrencyAmount *balance;
@property (copy, nonatomic) NSDate *expirationDate;
@property (nonatomic, getter=isBlacklisted) BOOL blacklisted;
@property (readonly, nonatomic) NSString *displayableTransitBalance;
@property (readonly, nonatomic) NSDecimalNumber *decimalTransitBalance;
@property (readonly, nonatomic) NSString *currencyCode;
@property (copy, nonatomic) NSArray *enrouteTransitTypes;
@property (readonly, nonatomic) BOOL isEnRoute;
@property (readonly, copy, nonatomic) NSDecimalNumber *transitBalance;
@property (readonly, copy, nonatomic) NSString *transitBalanceCurrencyCode;
@property (readonly, nonatomic, getter=isInStation) BOOL inStation;

+ (id)passPropertiesForPass:(id)a0;
+ (Class)equalityClass;

- (id)initWithTransitAppletState:(id)a0 paymentApplication:(id)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
