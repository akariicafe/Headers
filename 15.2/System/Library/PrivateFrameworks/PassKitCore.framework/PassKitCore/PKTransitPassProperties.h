@class NSDecimalNumber, NSString, PKFelicaPassProperties, NSDate;

@interface PKTransitPassProperties : PKStoredValuePassProperties

@property (readonly, nonatomic) PKFelicaPassProperties *felicaProperties;
@property (readonly, copy, nonatomic) NSDecimalNumber *transitBalance;
@property (readonly, copy, nonatomic) NSString *transitBalanceCurrencyCode;
@property (readonly, nonatomic, getter=isBlacklisted) BOOL blacklisted;
@property (readonly, copy, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic, getter=isBlocked) BOOL blocked;
@property (readonly, nonatomic, getter=isInStation) BOOL inStation;


@end
