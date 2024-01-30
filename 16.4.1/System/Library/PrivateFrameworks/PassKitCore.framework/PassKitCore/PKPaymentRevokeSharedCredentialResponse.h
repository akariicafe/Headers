@class NSURL;

@interface PKPaymentRevokeSharedCredentialResponse : PKPaymentWebServiceResponse

@property (readonly, nonatomic) NSURL *passURL;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
