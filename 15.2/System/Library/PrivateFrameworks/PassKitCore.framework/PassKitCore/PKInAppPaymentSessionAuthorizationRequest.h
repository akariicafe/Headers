@class NSDecimalNumber, NSString, NSArray, NSData, PKPaymentApplication, PKPaymentMerchantSession;

@interface PKInAppPaymentSessionAuthorizationRequest : NSObject

@property (retain, nonatomic) PKPaymentApplication *paymentApplication;
@property (retain, nonatomic) NSString *currencyCode;
@property (retain, nonatomic) NSString *countryCode;
@property (retain, nonatomic) NSDecimalNumber *transactionAmount;
@property (nonatomic) unsigned long long merchantCapabilities;
@property (copy, nonatomic) NSArray *supportedNetworks;
@property (copy, nonatomic) NSString *merchantIdentifier;
@property (retain, nonatomic) NSData *applicationData;
@property (retain, nonatomic) PKPaymentMerchantSession *merchantSession;

- (void).cxx_destruct;

@end
