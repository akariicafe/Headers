@class NSDecimalNumber, NSString, NSArray, NSData, NSDictionary;

@interface PKPaymentInstallmentConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long feature;
@property (copy, nonatomic) NSData *merchandisingImageData;
@property (retain, nonatomic) NSDecimalNumber *openToBuyThresholdAmount;
@property (retain, nonatomic) NSDecimalNumber *bindingTotalAmount;
@property (copy, nonatomic) NSString *currencyCode;
@property (nonatomic, getter=isInStorePurchase) BOOL inStorePurchase;
@property (copy, nonatomic) NSString *installmentMerchantIdentifier;
@property (copy, nonatomic) NSString *referrerIdentifier;
@property (copy, nonatomic) NSArray *installmentItems;
@property (copy, nonatomic) NSDictionary *applicationMetadata;
@property (nonatomic) long long retailChannel;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (void)encodeToBodyDictionary:(id)a0;
- (BOOL)isEqualToInstallmentConfiguration:(id)a0;

@end
