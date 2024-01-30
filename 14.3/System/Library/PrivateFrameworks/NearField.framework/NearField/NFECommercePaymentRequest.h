@class NSDecimalNumber, NSString, NSData, NSDate;

@interface NFECommercePaymentRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *appletIdentifier;
@property (retain, nonatomic) NSData *merchantData;
@property (retain, nonatomic) NSString *currencyCode;
@property (retain, nonatomic) NSString *countryCode;
@property (retain, nonatomic) NSDecimalNumber *transactionAmount;
@property (retain, nonatomic) NSDate *transactionDate;
@property (nonatomic) unsigned char merchantCapabilities;
@property (nonatomic) unsigned int unpredictableNumber;
@property (retain, nonatomic) NSData *networkMerchantIdentifier;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
