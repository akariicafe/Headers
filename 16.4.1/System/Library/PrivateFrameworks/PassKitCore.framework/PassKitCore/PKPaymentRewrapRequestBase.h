@class NSData, NSString, NSArray, NSDictionary, PKWrappedPayment, PKPaymentApplication, PKAccount, PKPaymentPass;

@interface PKPaymentRewrapRequestBase : PKPaymentWebServiceRequest

@property (readonly, nonatomic) NSArray *endpointComponents;
@property (nonatomic) long long type;
@property (retain, nonatomic) PKPaymentPass *pass;
@property (retain, nonatomic) PKPaymentApplication *paymentApplication;
@property (retain, nonatomic) PKWrappedPayment *wrappedPayment;
@property (copy, nonatomic) NSData *applicationData;
@property (nonatomic) long long cryptogramType;
@property (copy, nonatomic) NSDictionary *serviceProviderData;
@property (copy, nonatomic) NSString *paymentHash;
@property (copy, nonatomic) NSString *currencyCode;
@property (copy, nonatomic) NSString *initiative;
@property (copy, nonatomic) NSString *initiativeContext;
@property (copy, nonatomic) NSString *merchantTokenManagementURL;
@property (nonatomic) BOOL isDeferredPayment;
@property (copy, nonatomic) NSArray *multiTokenContexts;
@property (copy, nonatomic) NSDictionary *fundingSourceDetails;
@property (retain, nonatomic) PKAccount *account;
@property (copy, nonatomic) NSString *shippingAddressHash;
@property (copy, nonatomic) NSString *deviceAssessments;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)a0 deviceIdentifier:(id)a1 rewrapData:(id)a2 appleAccountInformation:(id)a3;
- (id)bodyDictionary;

@end
