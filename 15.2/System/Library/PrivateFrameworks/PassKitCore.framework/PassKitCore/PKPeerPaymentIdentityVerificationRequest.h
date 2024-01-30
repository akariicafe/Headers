@class NSArray, NSString;

@interface PKPeerPaymentIdentityVerificationRequest : PKPeerPaymentWebServiceRequest

@property (copy, nonatomic) NSArray *certificates;
@property (nonatomic) BOOL devSigned;
@property (copy, nonatomic) NSString *prerequisiteIdentifier;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)a0 appleAccountInformation:(id)a1 deviceIdentifier:(id)a2 deviceScore:(id)a3 deviceMetadata:(id)a4;

@end
