@class PKPaymentPassAction;

@interface PKPaymentRemoteContentPassActionRequest : PKPaymentWebServiceRequest

@property (retain, nonatomic) PKPaymentPassAction *action;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)a0 deviceIdentifier:(id)a1 passTypeIdentifier:(id)a2 passSerialNumber:(id)a3 appleAccountInformation:(id)a4;

@end
