@class NSString;

@interface PKPeerPaymentIdentityVerificationRequiredResponse : PKPeerPaymentWebServiceResponse

@property (readonly, copy, nonatomic) NSString *prerequisiteIdentifier;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
