@class NSDecimalNumber, NSString, NSArray, NSNumber;

@interface PKPayLaterFinancingControllerConfiguration : NSObject

@property (copy, nonatomic) NSDecimalNumber *transactionAmount;
@property (copy, nonatomic) NSString *currencyCode;
@property (copy, nonatomic) NSString *merchantCountryCode;
@property (copy, nonatomic) NSString *merchantIdentifier;
@property (copy, nonatomic) NSString *originURL;
@property (copy, nonatomic) NSString *webMerchantIdentifier;
@property (copy, nonatomic) NSString *webMerchantName;
@property (copy, nonatomic) NSString *merchantName;
@property (copy, nonatomic) NSNumber *adamIdentifier;
@property (nonatomic) BOOL isMerchantTokenRequest;
@property (nonatomic) BOOL isMultiTokenRequest;
@property (copy, nonatomic) NSArray *supportedNetworks;
@property (readonly, nonatomic) unsigned long long channel;
@property (readonly, nonatomic) unsigned long long channelType;

- (void).cxx_destruct;
- (id)initWithCurrencyCode:(id)a0 channel:(unsigned long long)a1;
- (id)initWithTransactionAmount:(id)a0 currencyCode:(id)a1 merchantCountryCode:(id)a2 merchantIdentifier:(id)a3 originURL:(id)a4 webMerchantIdentifier:(id)a5 webMerchantName:(id)a6 merchantName:(id)a7 adamIdentifier:(id)a8 isMerchantTokenRequest:(BOOL)a9 isMultiTokenRequest:(BOOL)a10 channel:(unsigned long long)a11 channelType:(unsigned long long)a12 supportedNetworks:(id)a13;
- (void)updateMerchantIdentifier:(id)a0 originURL:(id)a1 webMerchantIdentifier:(id)a2 webMerchantName:(id)a3;
- (void)updateTransactionAmount:(id)a0;

@end
