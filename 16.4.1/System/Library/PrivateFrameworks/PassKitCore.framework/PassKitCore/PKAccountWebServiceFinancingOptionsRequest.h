@class NSDecimalNumber, NSString, NSArray, NSURL, PKCurrencyAmount, NSNumber;

@interface PKAccountWebServiceFinancingOptionsRequest : PKAccountWebServiceRequest

@property (copy, nonatomic) NSString *accountIdentifier;
@property (copy, nonatomic) NSDecimalNumber *amount;
@property (copy, nonatomic) NSString *currencyCode;
@property (copy, nonatomic) NSString *countryCode;
@property (copy, nonatomic) NSString *merchantIdentifier;
@property (copy, nonatomic) NSString *originURL;
@property (copy, nonatomic) NSString *webMerchantIdentifier;
@property (copy, nonatomic) NSString *webMerchantName;
@property (copy, nonatomic) NSString *merchantName;
@property (copy, nonatomic) NSNumber *adamIdentifier;
@property (nonatomic) BOOL isMerchantTokenRequest;
@property (nonatomic) BOOL isMultiTokenRequest;
@property (copy, nonatomic) NSString *referrerIdentifier;
@property (copy, nonatomic) NSString *sessionIdentifier;
@property (retain, nonatomic) PKCurrencyAmount *dueNext30Days;
@property (nonatomic) unsigned long long channel;
@property (copy, nonatomic) NSArray *supportedNetworks;
@property (retain, nonatomic) NSURL *baseURL;

- (id)_urlRequestWithAppleAccountInformation:(id)a0;
- (void).cxx_destruct;

@end
