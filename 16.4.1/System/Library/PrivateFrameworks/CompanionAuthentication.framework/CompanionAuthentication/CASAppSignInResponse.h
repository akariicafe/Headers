@class ASCPlatformPublicKeyCredentialRegistration, AKAuthorization, NSURL, CASPasswordCredential, ASCPlatformPublicKeyCredentialAssertion;
@protocol ASAuthorizationCredential;

@interface CASAppSignInResponse : CASAuthenticationResponse <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) AKAuthorization *appleIDAuthorization;
@property (readonly, nonatomic) CASPasswordCredential *passwordCredential;
@property (readonly, nonatomic) id<ASAuthorizationCredential> credential;
@property (readonly, nonatomic) AKAuthorization *authorization;
@property (readonly, nonatomic) AKAuthorization *authorizaton;
@property (readonly, nonatomic) NSURL *webCallbackURL;
@property (readonly, nonatomic) ASCPlatformPublicKeyCredentialAssertion *platformKeyCredentialAssertion;
@property (readonly, nonatomic) ASCPlatformPublicKeyCredentialRegistration *platformKeyCredentialRegistration;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithAppleIDAuthorization:(id)a0;
- (id)initWithPasswordCredential:(id)a0;
- (id)initWithPlatformKeyCredentialAssertion:(id)a0;
- (id)initWithPlatformKeyCredentialRegistration:(id)a0;
- (id)initWithWebCallbackURL:(id)a0;

@end
