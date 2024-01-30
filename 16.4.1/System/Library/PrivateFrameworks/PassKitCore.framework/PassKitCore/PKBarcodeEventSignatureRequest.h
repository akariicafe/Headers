@class NSString, NSData, NSDate, NSNumber;

@interface PKBarcodeEventSignatureRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *deviceAccountIdentifier;
@property (copy, nonatomic) NSString *transactionIdentifier;
@property (copy, nonatomic) NSString *barcodeIdentifier;
@property (copy, nonatomic) NSString *rawMerchantName;
@property (copy, nonatomic) NSString *merchantName;
@property (retain, nonatomic) NSDate *transactionDate;
@property (copy, nonatomic) NSString *currencyCode;
@property (retain, nonatomic) NSNumber *amount;
@property (copy, nonatomic) NSString *transactionStatus;
@property (copy, nonatomic) NSData *partialSignature;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithPaymentTransaction:(id)a0 deviceAccountIdentifier:(id)a1;

@end
