@class NSArray, NSString;

@interface ASAuthorizationOpenIDRequest : ASAuthorizationRequest

@property (copy, nonatomic) NSArray *requestedScopes;
@property (copy, nonatomic) NSString *state;
@property (copy, nonatomic) NSString *nonce;
@property (copy, nonatomic) NSString *requestedOperation;

- (void).cxx_destruct;

@end
