@class NSString, NSArray;

@interface MDMMAIDBearerTokenAuthenticator : NSObject <MDMAuthenticatorProtocol>

@property (class, readonly) NSString *authenticationMethod;

@property (retain, nonatomic) NSString *token;
@property (copy, nonatomic) NSString *personaID;
@property (retain, nonatomic) NSArray *anchorCertificateRefs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_createAuthInvalidError;
+ (id)_createGeneralServerError;
+ (id)_createManagedAppleAccountInvalidatedError;
+ (id)_createMissingBearerTokenError;
+ (id)authenticatorWithAnchorCertificateRefs:(id)a0;

- (void).cxx_destruct;
- (id)initWithTokens:(id)a0;
- (BOOL)authenticateRequest:(id)a0 error:(id *)a1;
- (BOOL)canRefreshToken;
- (void)_executeExchangeRequestWithURL:(id)a0 accountID:(id)a1 completionHandler:(id /* block */)a2;
- (void)_processTokenResponse:(id)a0 data:(id)a1 error:(id)a2 completionHandler:(id /* block */)a3;
- (BOOL)doesWebAuthentication;
- (void)fetchTokenWithAuthParams:(id)a0 accountID:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithRMAccountID:(id)a0;
- (id)prepareForReauthenticationWithAuthParams:(id)a0 accountID:(id)a1 error:(id *)a2;
- (void)refreshTokenWithAuthParams:(id)a0 accountID:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)validAuthParams:(id)a0;

@end
