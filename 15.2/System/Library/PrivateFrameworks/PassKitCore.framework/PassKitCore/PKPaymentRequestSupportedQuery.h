@class NSArray, NSString, NSSet, PKPaymentWebService;

@interface PKPaymentRequestSupportedQuery : NSObject

@property (readonly, nonatomic) BOOL issuedOnTheWeb;
@property (readonly, nonatomic) NSArray *supportedNetworkIDs;
@property (readonly, nonatomic) unsigned long long merchantCapabilities;
@property (readonly, nonatomic) NSString *merchantCountryCode;
@property (readonly, nonatomic) long long paymentMode;
@property (readonly, nonatomic) NSSet *paymentApplicationStates;
@property (readonly, nonatomic) PKPaymentWebService *webService;

+ (id)webQueryWithSupportedNetworkIDs:(id)a0 merchantCapabilities:(unsigned long long)a1 merchantCountryCode:(id)a2 paymentMode:(long long)a3 paymentApplicationStates:(id)a4 webService:(id)a5;
+ (id)inAppQueryWithSupportedNetworkIDs:(id)a0 merchantCapabilities:(unsigned long long)a1 merchantCountryCode:(id)a2 paymentMode:(long long)a3 paymentApplicationStates:(id)a4;

- (id)initWithIssuedOnTheWeb:(BOOL)a0 supportedNetworkIDs:(id)a1 merchantCapabilities:(unsigned long long)a2 merchantCountryCode:(id)a3 paymentMode:(long long)a4 paymentApplicationStates:(id)a5 webService:(id)a6;
- (void).cxx_destruct;

@end
