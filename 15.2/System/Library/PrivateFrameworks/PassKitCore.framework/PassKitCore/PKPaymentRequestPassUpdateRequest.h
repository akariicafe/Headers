@class PKPassUpgradeRequest, PKPaymentPass;

@interface PKPaymentRequestPassUpdateRequest : PKPaymentWebServiceRequest

@property (readonly, nonatomic) PKPaymentPass *pass;
@property (readonly, nonatomic) PKPassUpgradeRequest *request;

- (id)_urlRequestWithServiceURL:(id)a0 deviceIdentifier:(id)a1 appleAccountInformation:(id)a2;
- (void).cxx_destruct;
- (id)initWithPaymentPass:(id)a0 updateRequest:(id)a1;

@end
