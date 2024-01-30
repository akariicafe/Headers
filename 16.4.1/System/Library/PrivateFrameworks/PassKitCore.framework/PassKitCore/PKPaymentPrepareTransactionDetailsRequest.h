@class PKPaymentMerchantSession, NSString, NSDecimalNumber;

@interface PKPaymentPrepareTransactionDetailsRequest : PKPaymentWebServiceRequest

@property (retain, nonatomic) PKPaymentMerchantSession *merchantSession;
@property (copy, nonatomic) NSString *secureElementIdentifier;
@property (copy, nonatomic) NSDecimalNumber *amount;
@property (copy, nonatomic) NSString *currencyCode;

+ (id)serverSupportedLanguages;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)a0 appleAccountInformation:(id)a1;
- (id)initWithMerchantSession:(id)a0 secureElementIdentifier:(id)a1 amount:(id)a2 currencyCode:(id)a3;

@end
