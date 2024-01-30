@class ASCPublicKeyCredentialAssertionOptions, NSString, NSArray, ASCPublicKeyCredentialCreationOptions, AKPasswordRequest, AKAuthorizationRequest, CASWebRequest;

@interface CASAppSignInRequest : CASAuthenticationRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *overrideBundleIdentifier;
@property (readonly, nonatomic) BOOL isAppleIDOnlyRequest;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) BOOL isPasskeyRequest;
@property (readonly, nonatomic) BOOL isPasskeyRegistrationRequest;
@property (readonly, nonatomic) BOOL hasAnyNonPasskeyRegistrationRequest;
@property (readonly, nonatomic) AKAuthorizationRequest *appleIDRequest;
@property (readonly, nonatomic) AKPasswordRequest *passwordRequest;
@property (copy, nonatomic) NSArray *customAuthenticationMethods;
@property (readonly, nonatomic) CASWebRequest *webRequest;
@property (readonly, nonatomic) ASCPublicKeyCredentialAssertionOptions *platformKeyCredentialAssertionOptions;
@property (readonly, nonatomic) ASCPublicKeyCredentialCreationOptions *platformKeyCredentialRegistrationOptions;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)authType;
- (id)description;
- (void).cxx_destruct;
- (id)initWithRequests:(id)a0;
- (BOOL)_isPlatformKeyOnlyRequest;
- (id)initWithAppleIDRequest:(id)a0 passwordReqeust:(id)a1 platformKeyCredentialAssertionOptions:(id)a2 platformKeyCredentialRegistrationOptions:(id)a3;
- (id)initWithWebRequest:(id)a0;

@end
