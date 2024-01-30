@class AKAuthorization, CASPasswordCredential;
@protocol ASAuthorizationCredential;

@interface CASAppSignInResponse : CASAuthenticationResponse <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) AKAuthorization *appleIDAuthorization;
@property (readonly, nonatomic) CASPasswordCredential *passwordCredential;
@property (readonly, nonatomic) id<ASAuthorizationCredential> credential;
@property (readonly, nonatomic) AKAuthorization *authorization;
@property (readonly, nonatomic) AKAuthorization *authorizaton;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithAppleIDAuthorization:(id)a0;
- (id)initWithPasswordCredential:(id)a0;

@end
