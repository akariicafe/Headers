@class NSString;

@interface PKPaymentNotifyIssuerAppletDirtyRequest : PKPaymentWebServiceRequest {
    NSString *_passSerialNumber;
    NSString *_deviceAccountIdentifier;
}

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)a0 deviceIdentifier:(id)a1 appleAccountInformation:(id)a2;
- (id)initWithPassSerialNumber:(id)a0 deviceAccountIdentifier:(id)a1;

@end
