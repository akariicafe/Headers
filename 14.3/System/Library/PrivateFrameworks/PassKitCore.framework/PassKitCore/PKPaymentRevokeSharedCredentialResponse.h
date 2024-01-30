@class NSURL;

@interface PKPaymentRevokeSharedCredentialResponse : PKPaymentWebServiceResponse

@property (readonly, nonatomic) NSURL *passURL;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
