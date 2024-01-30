@class NSString, NSURL, PKPaymentAugmentBaseRequest;

@interface PKAccountWebServiceFinancingPlanNonceRequest : PKAccountWebServiceRequest

@property (copy, nonatomic) NSString *accountIdentifier;
@property (retain, nonatomic) NSURL *baseURL;
@property (copy, nonatomic) NSString *planIdentifier;
@property (retain, nonatomic) PKPaymentAugmentBaseRequest *augmentBaseRequest;

- (id)_urlRequestWithAppleAccountInformation:(id)a0;
- (void).cxx_destruct;

@end
