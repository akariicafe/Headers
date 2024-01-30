@class PKApplePayTrustSignature;
@protocol PKAccountWebServiceApplePayTrustProtocol;

@interface PKAccountWebServiceApplePayTrustRequest : PKAccountWebServiceRequest {
    id<PKAccountWebServiceApplePayTrustProtocol> _protocol;
}

@property (retain, nonatomic) PKApplePayTrustSignature *signature;

- (Class)responseClass;
- (void).cxx_destruct;
- (id)endpointComponents;
- (id)_urlRequestWithAppleAccountInformation:(id)a0;
- (id)initWithApplePayTrustProtocol:(id)a0;

@end
