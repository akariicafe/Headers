@interface DAExchangeOAuthFlowController : DAEASOAuthFlowController

- (id)_accountDescription;
- (id)initialRedirectURL;
- (void)exchangeAuthCode:(id)a0 codeVerifier:(id)a1 claims:(id)a2 withCompletion:(id /* block */)a3;
- (id)initWithAuthURI:(id)a0 easEndPoint:(id)a1 username:(id)a2 claims:(id)a3;

@end
