@class PKPeerPaymentPreferences;

@interface PKPeerPaymentUpdatePreferencesResponse : PKPeerPaymentWebServiceResponse

@property (readonly, nonatomic) PKPeerPaymentPreferences *peerPaymentPreferences;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
