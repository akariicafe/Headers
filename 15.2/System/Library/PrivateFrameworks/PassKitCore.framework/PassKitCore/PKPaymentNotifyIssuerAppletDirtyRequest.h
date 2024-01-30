@class NSString;

@interface PKPaymentNotifyIssuerAppletDirtyRequest : PKPaymentWebServiceRequest {
    NSString *_passSerialNumber;
    NSString *_deviceAccountIdentifier;
}

- (id)_urlRequestWithServiceURL:(id)a0 deviceIdentifier:(id)a1 appleAccountInformation:(id)a2;
- (void).cxx_destruct;
- (id)initWithPassSerialNumber:(id)a0 deviceAccountIdentifier:(id)a1;

@end
