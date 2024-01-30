@class NSString, NSData, DAEASOAuthPKCEChallenge;

@interface DAEASOAuthFlowController : NSObject <SL_OOPAuthFlowDelegate, UIWebViewDelegate> {
    id /* block */ _completion;
}

@property (nonatomic) unsigned long long oauthType;
@property (copy, nonatomic) NSString *oauthURI;
@property (retain, nonatomic) NSString *tokenRequestURI;
@property (retain, nonatomic) NSString *jwksURI;
@property (retain, nonatomic) NSData *jwksData;
@property (retain, nonatomic) NSString *issuer;
@property (copy, nonatomic) NSString *clientID;
@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *easEndPoint;
@property (retain, nonatomic) NSString *claimsChallenge;
@property (retain, nonatomic) NSString *state;
@property (retain, nonatomic) DAEASOAuthPKCEChallenge *challenge;
@property (copy, nonatomic) NSString *redirectURI;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)upgradeAuthorizationEndpoint:(id)a0;
+ (id)upgradeTokenEndpoint:(id)a0;

- (void).cxx_destruct;
- (id)_accountDescription;
- (id)authURLForUsername:(id)a0;
- (id)initialRedirectURL;
- (id)requestForAuthURL:(id)a0;
- (void)setAuthFlowCompletion:(id /* block */)a0;
- (BOOL)shouldHideWebViewForLoadWithRequest:(id)a0;
- (void)webViewDidFinishLoadWithPageTitleSupplier:(id /* block */)a0;
- (void)_exchangeAuthCode:(id)a0 codeVerifier:(id)a1 claims:(id)a2 forTokensAndUsernameWithCompletion:(id /* block */)a3;
- (void)_exchangeAuthCode:(id)a0 codeVerifier:(id)a1 claims:(id)a2 forTokensWithCompletion:(id /* block */)a3;
- (id)_urlRequestForOAuthTokenFromAuthCode:(id)a0 codeVerifier:(id)a1 claims:(id)a2;
- (id)authURLForUsername:(id)a0 originalAuthURL:(id)a1;
- (void)exchangeAuthCode:(id)a0 codeVerifier:(id)a1 claims:(id)a2 forTokensAndUsernameWithCompletion:(id /* block */)a3;
- (id)initWithOAuthType:(unsigned long long)a0 authURI:(id)a1 username:(id)a2 claims:(id)a3;
- (void)retrieveJWKSDataFromURI:(id)a0 withCompletion:(id /* block */)a1;
- (void)retrieveOpenIDMetadataFromURI:(id)a0 withCompletion:(id /* block */)a1;

@end
