@class NSDecimalNumber, NSString, NSArray, NSSet, NSDate, NSNumber;

@interface PKTransitAppletHistory : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long source;
@property (copy, nonatomic) NSString *serviceProvider;
@property (copy, nonatomic) NSNumber *serverRefreshIdentifier;
@property (nonatomic, getter=isBlacklisted) BOOL blacklisted;
@property (copy, nonatomic) NSString *currency;
@property (copy, nonatomic) NSDecimalNumber *balance;
@property (copy, nonatomic) NSNumber *loyaltyBalance;
@property (retain, nonatomic) NSDate *expirationDate;
@property (copy, nonatomic) NSArray *balances;
@property (copy, nonatomic) NSArray *historyRecords;
@property (copy, nonatomic) NSArray *inStationDetails;
@property (copy, nonatomic) NSSet *enrouteTransitTypes;
@property (readonly, nonatomic, getter=isInStation) BOOL inStation;

- (void)encodeWithCoder:(id)a0;
- (void)sanitizeValuesWithState:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)felicaHistory;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0 source:(long long)a1;
- (void)dealloc;

@end
