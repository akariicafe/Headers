@class NSDecimalNumber, NSString, NSURL, CNPostalAddress, NSData, PKApplePayTrustHashResponse;

@interface PKAccountWebServiceInstallmentAuthorizationRequest : PKAccountWebServiceRequest <PKAccountWebServiceApplePayTrustProtocol>

@property (copy, nonatomic) NSString *accountIdentifier;
@property (copy, nonatomic) NSString *bindToken;
@property (retain, nonatomic) NSDecimalNumber *authorizationAmount;
@property (copy, nonatomic) NSString *installmentGroupIdentifier;
@property (retain, nonatomic) CNPostalAddress *shippingAddress;
@property (retain, nonatomic) PKApplePayTrustHashResponse *hashResponse;
@property (retain, nonatomic) NSURL *baseURL;
@property (copy, nonatomic) NSData *publicKeyHash;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (Class)signatureResponseClass;
- (id)endpointComponents;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_urlRequestWithAppleAccountInformation:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)manifestHashWithReferenceIdentifier:(id)a0;

@end
