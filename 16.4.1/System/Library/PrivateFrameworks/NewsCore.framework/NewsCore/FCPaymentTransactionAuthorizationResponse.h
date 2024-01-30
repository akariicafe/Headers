@class NSError, FCAuthKitAuthorizationCredential;

@interface FCPaymentTransactionAuthorizationResponse : NSObject

@property (readonly, nonatomic) FCAuthKitAuthorizationCredential *credential;
@property (readonly, nonatomic) NSError *accountSignupError;

- (void).cxx_destruct;
- (id)initWithCredential:(id)a0 accountSignupError:(id)a1;

@end
