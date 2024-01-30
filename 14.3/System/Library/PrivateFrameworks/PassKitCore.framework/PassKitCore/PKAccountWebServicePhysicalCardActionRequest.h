@class PKPaymentDeviceMetadata, NSString, PKPhysicalCardAction, NSURL, NSData, PKApplePayTrustHashResponse;

@interface PKAccountWebServicePhysicalCardActionRequest : PKAccountWebServiceRequest <PKAccountWebServiceApplePayTrustProtocol, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *accountIdentifier;
@property (copy, nonatomic) NSString *physicalCardIdentifier;
@property (retain, nonatomic) PKPhysicalCardAction *action;
@property (retain, nonatomic) PKPaymentDeviceMetadata *deviceMetadata;
@property (retain, nonatomic) PKApplePayTrustHashResponse *hashResponse;
@property (retain, nonatomic) NSURL *baseURL;
@property (copy, nonatomic) NSData *publicKeyHash;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (Class)signatureResponseClass;
- (id)endpointComponents;
- (id)initWithCoder:(id)a0;
- (id)_urlRequestWithAppleAccountInformation:(id)a0;
- (id)manifestHashWithReferenceIdentifier:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
