@class NSDecimalNumber, NSString, NSData, NSDate;

@interface NFPeerPaymentTransferRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDecimalNumber *transactionAmount;
@property (copy, nonatomic) NSString *appleTransactionHash;
@property (copy, nonatomic) NSString *publicTransactionHash;
@property (copy, nonatomic) NSDate *transactionDate;
@property (copy, nonatomic) NSString *transactionCurrency;
@property (copy, nonatomic) NSString *transactionCountry;
@property (copy, nonatomic) NSData *nonce;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
