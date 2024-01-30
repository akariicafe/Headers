@class NSNumber, NSData, NSString;

@interface PKFelicaTransitAppletState : PKTransitAppletState <NSCopying>

@property (nonatomic, getter=isShinkansenTicketActive) BOOL shinkansenTicketActive;
@property (nonatomic, getter=isGreenCarTicketUsed) BOOL greenCarTicketUsed;
@property (nonatomic, getter=isBalanceAllowedForCommute) BOOL balanceAllowedForCommute;
@property (nonatomic, getter=isLowBalanceNotificationEnabled) BOOL lowBalanceNotificationEnabled;
@property (copy, nonatomic) NSNumber *shinkansenValidityStartDate;
@property (copy, nonatomic) NSNumber *shinkansenValidityTerm;
@property (copy, nonatomic) NSData *shinkansenOriginStationCode;
@property (copy, nonatomic) NSData *shinkansenDestinationStationCode;
@property (copy, nonatomic) NSNumber *shinkansenDepartureTime;
@property (copy, nonatomic) NSNumber *shinkansenArrivalTime;
@property (copy, nonatomic) NSString *shinkansenTrainName;
@property (copy, nonatomic) NSNumber *shinkansenCarNumber;
@property (copy, nonatomic) NSNumber *shinkansenSeatNumber;
@property (copy, nonatomic) NSNumber *shinkansenSeatRow;
@property (copy, nonatomic) NSData *shinkansenSecondaryOriginStationCode;
@property (copy, nonatomic) NSData *shinkansenSecondaryDestinationStationCode;
@property (copy, nonatomic) NSNumber *shinkansenSecondaryDepartureTime;
@property (copy, nonatomic) NSNumber *shinkansenSecondaryArrivalTime;
@property (copy, nonatomic) NSString *shinkansenSecondaryTrainName;
@property (copy, nonatomic) NSNumber *shinkansenSecondaryCarNumber;
@property (copy, nonatomic) NSNumber *shinkansenSecondarySeatRow;
@property (copy, nonatomic) NSNumber *shinkansenSecondarySeatNumber;
@property (copy, nonatomic) NSData *greenCarOriginStationCode;
@property (copy, nonatomic) NSData *greenCarDestinationStationCode;
@property (copy, nonatomic) NSNumber *greenCarValidityStartDate;
@property (nonatomic) BOOL hasGreenCarTicket;
@property (nonatomic) BOOL hasShinkansenTicket;
@property (copy, nonatomic) NSString *shinkansenOriginStationString;
@property (copy, nonatomic) NSString *shinkansenDestinationStationString;
@property (copy, nonatomic) NSString *shinkansenSecondaryOriginStationString;
@property (copy, nonatomic) NSString *shinkansenSecondaryDestinationStationString;
@property (copy, nonatomic) NSString *greenCarOriginStationString;
@property (copy, nonatomic) NSString *greenCarDestinationStationString;
@property (readonly, nonatomic, getter=isInShinkansenStation) BOOL inShinkansenStation;

+ (BOOL)supportsSecureCoding;

- (id)processUpdateWithAppletHistory:(id)a0 concreteTransactions:(id *)a1 ephemeralTransaction:(id *)a2;
- (id)init;
- (BOOL)isInStation;
- (void)_resolveTransactionsFromState:(id)a0 toState:(id)a1 withHistoryRecords:(id)a2 concreteTransactions:(id *)a3 ephemeralTransaction:(id *)a4;
- (id)_concreteTransactionForRecordAtIndex:(unsigned long long)a0 withBalance:(unsigned int *)a1 historyRecords:(id)a2 terminalState:(id)a3 numberProcessed:(unsigned long long *)a4 exitedShinkansen:(BOOL *)a5;
- (id)transitPassPropertiesWithPaymentApplication:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)processUpdateWithAppletHistory:(id)a0 concreteTransactions:(id *)a1 ephemeralTransaction:(id *)a2 mutatedBalances:(id *)a3 balanceLabelDictionary:(id)a4 unitDictionary:(id)a5;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
