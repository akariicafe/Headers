@class NSString, NSSet, PKFelicaGreenCarTicket, NSNumber, PKFelicaShinkansenTicket;

@interface PKFelicaAppletHistory : PKTransitAppletHistory {
    NSSet *_existingKeys;
}

@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSString *transactionID;
@property (readonly, copy, nonatomic) NSNumber *SPID;
@property (readonly, nonatomic) long long transactionType;
@property (readonly, nonatomic, getter=isInShinkansenStation) BOOL inShinkansenStation;
@property (readonly, nonatomic, getter=isShinkansenTicketActive) BOOL shinkansenTicketActive;
@property (readonly, nonatomic, getter=isGreenCarTicketUsed) BOOL greenCarTicketUsed;
@property (readonly, nonatomic, getter=isBalanceAllowedForCommute) BOOL balanceAllowedForCommute;
@property (readonly, nonatomic, getter=isLowBalanceNotificationEnabled) BOOL lowBalanceNotificationEnabled;
@property (readonly, copy, nonatomic) PKFelicaShinkansenTicket *shinkansenTicket;
@property (readonly, nonatomic) PKFelicaGreenCarTicket *greenCarTicket;

+ (BOOL)supportsSecureCoding;
+ (long long)appletTypeForDictionary:(id)a0;

- (void)_addEnrouteTransitType:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isInStation;
- (void)sanitizeValuesWithState:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0 source:(long long)a1;
- (void)dealloc;

@end
