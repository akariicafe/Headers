@class NSDecimalNumber, NSString, NSArray, PKFelicaTransitAppletState, NSNumber, NSDate;

@interface PKTransitAppletState : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PKFelicaTransitAppletState *felicaState;
@property (nonatomic, getter=isBlacklisted) BOOL blacklisted;
@property (copy, nonatomic) NSNumber *historySequenceNumber;
@property (copy, nonatomic) NSNumber *serverRefreshIdentifier;
@property (copy, nonatomic) NSDecimalNumber *balance;
@property (copy, nonatomic) NSNumber *loyaltyBalance;
@property (copy, nonatomic) NSString *currency;
@property (copy, nonatomic) NSDate *expirationDate;
@property (copy, nonatomic) NSArray *balances;
@property (copy, nonatomic) NSArray *enrouteTransitTypes;
@property (nonatomic) BOOL needsStationProcessing;
@property (nonatomic) BOOL appletStateDirty;
@property (readonly, nonatomic, getter=isInStation) BOOL inStation;

- (id)processUpdateWithAppletHistory:(id)a0 concreteTransactions:(id *)a1 ephemeralTransaction:(id *)a2;
- (id)updatedEnrouteTransitTypesFromExistingTypes:(id)a0 newTypes:(id)a1;
- (id)transitPassPropertiesWithPaymentApplication:(id)a0;
- (void).cxx_destruct;
- (void)_resolveTransactionsFromState:(id)a0 toState:(id)a1 withHistoryRecords:(id)a2 concreteTransactions:(id *)a3 ephemeralTransaction:(id *)a4 balanceLabels:(id)a5 unitDictionary:(id)a6;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)processUpdateWithAppletHistory:(id)a0 concreteTransactions:(id *)a1 ephemeralTransaction:(id *)a2 mutatedBalances:(id *)a3 balanceLabelDictionary:(id)a4 unitDictionary:(id)a5;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)processUpdateWithAppletHistory:(id)a0 concreteTransactions:(id *)a1 ephemeralTransaction:(id *)a2 mutatedBalances:(id *)a3;
- (id)processUpdateWithAppletHistory:(id)a0 concreteTransactions:(id *)a1 ephemeralTransaction:(id *)a2 mutatedBalances:(id *)a3 balanceLabelDictionary:(id)a4;
- (void)encodeWithCoder:(id)a0;
- (void)addEnrouteTransitType:(id)a0;

@end
