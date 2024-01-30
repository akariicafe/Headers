@class ASWebAuthenticationSession, ACAccount, ACAccountStore;

@interface SLGoogleAuthController : SLWebAuthController {
    ACAccount *_account;
    ACAccountStore *_accountStore;
    id /* block */ _presentationBlock;
    ASWebAuthenticationSession *_authenticationSession;
}

+ (void)_presentInternetOfflineError;
+ (void)_presentUsernameMismatchAlert;
+ (id)_identityFromUsername:(id)a0 displayName:(id)a1 token:(id)a2 refreshToken:(id)a3;
+ (id)googleAuthControllerWithPresentationBlock:(id /* block */)a0 completion:(id /* block */)a1;
+ (id)googleAuthControllerWithAccount:(id)a0 accountStore:(id)a1 presentationBlock:(id /* block */)a2 completion:(id /* block */)a3;
+ (id)googleAuthControllerWithYouTubeUsername:(id)a0 presentationBlock:(id /* block */)a1 completion:(id /* block */)a2;

- (void)cancelAuthorization;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_webClient;
- (id)initWithAccountDescription:(id)a0 presentationBlock:(id /* block */)a1;
- (id)initWithAccount:(id)a0 accountStore:(id)a1 presentationBlock:(id /* block */)a2;
- (id)_initWithAccount:(id)a0 accountStore:(id)a1 username:(id)a2 youTube:(BOOL)a3 presentationBlock:(id /* block */)a4 completion:(id /* block */)a5;
- (void)_dismissAndCompleteWithIdentity:(id)a0 error:(id)a1;
- (void)_didRedirectToURL:(id)a0 codeVerifier:(id)a1;
- (void)_completeWithIdentity:(id)a0 error:(id)a1;
- (id)_redirectPathForURI:(id)a0;

@end
