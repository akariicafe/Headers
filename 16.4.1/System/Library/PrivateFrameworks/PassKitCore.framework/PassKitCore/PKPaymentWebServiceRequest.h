@protocol PKPaymentWebServiceTargetDeviceProtocol;

@interface PKPaymentWebServiceRequest : PKOverlayableWebServiceRequest

@property (retain, nonatomic) id<PKPaymentWebServiceTargetDeviceProtocol> targetDevice;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_murlRequestWithServiceURL:(id)a0 endpointComponents:(id)a1 queryParameters:(id)a2 appleAccountInformation:(id)a3;
- (id)_murlRequestWithServiceURL:(id)a0 version:(id)a1 endpointComponents:(id)a2 queryParameters:(id)a3 appleAccountInformation:(id)a4;
- (id)_murlRequestWithURL:(id)a0;
- (void)_signRequest:(id)a0 webService:(id)a1 completion:(id /* block */)a2;
- (void)_signRequestData:(id)a0 forRequest:(id)a1 webService:(id)a2 completion:(id /* block */)a3;

@end
