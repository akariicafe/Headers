@class NSURL, NSString, NSURLSession;

@interface WFOAuth2SessionManager : NSObject

@property (readonly, nonatomic) NSURLSession *session;
@property (readonly, copy, nonatomic) NSURL *tokenURL;
@property (readonly, copy, nonatomic) NSURL *authorizationURL;
@property (readonly, copy, nonatomic) NSString *clientID;
@property (readonly, copy, nonatomic) NSString *clientSecret;
@property (readonly, nonatomic) NSString *authenticationMethod;

+ (id)combinedScopeFromScopes:(id)a0;

- (void).cxx_destruct;
- (void)sendRequest:(id)a0 completionHandler:(id /* block */)a1;
- (id)authorizationSessionWithResponseType:(id)a0 scopes:(id)a1 redirectURI:(id)a2 completionHandler:(id /* block */)a3;
- (void)authenticateWithCode:(id)a0 redirectURI:(id)a1 completionHandler:(id /* block */)a2;
- (void)authenticateWithParameters:(id)a0 completionHandler:(id /* block */)a1;
- (void)authenticateWithRefreshCredential:(id)a0 completionHandler:(id /* block */)a1;
- (void)authenticateWithRequest:(id)a0 refreshToken:(id)a1 completionHandler:(id /* block */)a2;
- (void)authenticateWithScopes:(id)a0 completionHandler:(id /* block */)a1;
- (void)authenticateWithUsername:(id)a0 password:(id)a1 scopes:(id)a2 completionHandler:(id /* block */)a3;
- (id)authorizationSessionWithAuthorizationURL:(id)a0 responseType:(id)a1 scopes:(id)a2 redirectURI:(id)a3 specifyRedirectURI:(BOOL)a4 completionHandler:(id /* block */)a5;
- (id)initWithSessionConfiguration:(id)a0 tokenURL:(id)a1 authorizationURL:(id)a2 authenticationMethod:(id)a3 clientID:(id)a4 clientSecret:(id)a5;

@end
