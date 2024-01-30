@class PKPeerPaymentPreferences;

@interface PKPeerPaymentUpdatePreferencesRequest : PKPeerPaymentWebServiceRequest

@property (retain, nonatomic) PKPeerPaymentPreferences *peerPaymentPreferences;

- (void).cxx_destruct;
- (id)initWithPeerPaymentPreferences:(id)a0;
- (id)_urlRequestWithServiceURL:(id)a0 appleAccountInformation:(id)a1;

@end
