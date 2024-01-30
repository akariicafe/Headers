@class PKPeerPaymentPreferences;

@interface PKPeerPaymentUpdatePreferencesRequest : PKPeerPaymentWebServiceRequest

@property (retain, nonatomic) PKPeerPaymentPreferences *peerPaymentPreferences;

- (id)initWithPeerPaymentPreferences:(id)a0;
- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)a0 appleAccountInformation:(id)a1;

@end
