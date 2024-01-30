@class NSString, NSData;

@interface STSMerchantPaymentRequest : STSInAppPaymentRequest

@property (retain, nonatomic) NSString *appletIdentifier;
@property (retain, nonatomic) NSData *networkMerchantIdentifier;
@property (nonatomic) long long merchantCapabilities;
@property (retain, nonatomic) NSData *merchantData;
@property (nonatomic) unsigned int unpredictableNumber;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithTransactionAmount:(id)a0 currencyCode:(id)a1 countryCode:(id)a2 transactionDate:(id)a3 merchantCapabilities:(long long)a4 merchantData:(id)a5 unpredictableNumber:(unsigned int)a6;
- (id)toNFECommercePaymentRequest:(id)a0;

@end
