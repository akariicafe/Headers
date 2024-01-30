@protocol PKPeerPaymentWebServiceTargetDeviceProtocol;

@interface PKPeerPaymentWebServiceRequest : PKOverlayableWebServiceRequest

@property (retain, nonatomic) id<PKPeerPaymentWebServiceTargetDeviceProtocol> targetDevice;

- (id)_urlRequestWithServiceURL:(id)a0 appleAccountInformation:(id)a1 deviceIdentifier:(id)a2;
- (void).cxx_destruct;
- (id)_murlRequestWithServiceURL:(id)a0 endpointComponents:(id)a1 queryParameters:(id)a2 appleAccountInformation:(id)a3;
- (id)_murlRequestWithURL:(id)a0;
- (id)_urlRequestWithServiceURL:(id)a0 appleAccountInformation:(id)a1;
- (id)_urlRequestWithServiceURL:(id)a0 appleAccountInformation:(id)a1 deviceIdentifier:(id)a2 deviceScore:(id)a3 deviceMetadata:(id)a4;

@end
