@interface DAExchangeOAuthFlowController : DAEASOAuthFlowController

- (id)_accountDescription;
- (id)initialRedirectURL;
- (id)initWithAuthURI:(id)a0 easEndPoint:(id)a1 username:(id)a2;
- (void)exchangeAuthCode:(id)a0 codeVerifier:(id)a1 withCompletion:(id /* block */)a2;

@end
