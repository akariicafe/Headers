@class NSData, NSString, NSArray, NSURL, NSDate, PKPeerPaymentRecipient, PKCurrencyAmount, NSDecimalNumber;

@interface PKPeerPaymentQuote : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PKCurrencyAmount *calculatedTotalAmount;
@property (readonly, nonatomic) double validityDuration;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSArray *items;
@property (readonly, copy, nonatomic) NSString *disclosureText;
@property (readonly, copy, nonatomic) NSURL *disclosureURL;
@property (readonly, copy, nonatomic) NSDecimalNumber *currentBalance;
@property (readonly, copy, nonatomic) NSString *currentBalanceCurrency;
@property (readonly, copy, nonatomic) NSData *appleHash;
@property (readonly, copy, nonatomic) NSData *externalHash;
@property (readonly, copy, nonatomic) NSDecimalNumber *totalReceiveAmount;
@property (readonly, copy, nonatomic) NSString *totalReceiveAmountCurrency;
@property (readonly, copy, nonatomic) NSDecimalNumber *totalFees;
@property (readonly, copy, nonatomic) NSString *totalFeesCurrency;
@property (readonly, copy, nonatomic) NSDate *validUntil;
@property (readonly, nonatomic) unsigned long long riskLevel;
@property (retain, nonatomic) PKPeerPaymentRecipient *recipient;
@property (copy, nonatomic) NSString *bankName;
@property (copy, nonatomic) NSString *routingNumber;
@property (copy, nonatomic) NSString *accountNumber;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)preservesCurrentBalance;
- (BOOL)hasExpired;
- (id)firstQuoteItemOfType:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
