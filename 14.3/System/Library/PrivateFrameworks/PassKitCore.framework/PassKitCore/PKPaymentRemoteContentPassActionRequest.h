@class PKPaymentPassAction, PKPaymentPass;

@interface PKPaymentRemoteContentPassActionRequest : PKPaymentWebServiceRequest

@property (retain, nonatomic) PKPaymentPass *pass;
@property (retain, nonatomic) PKPaymentPassAction *action;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)a0 deviceIdentifier:(id)a1 appleAccountInformation:(id)a2;

@end
