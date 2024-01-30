@class ASWebAuthenticationSession, NSString, ACAccount, ACAccountStore;

@interface SLGoogleAuthController : SLWebAuthController {
    ACAccount *_account;
    ACAccountStore *_accountStore;
    id /* block */ _presentationBlock;
    ASWebAuthenticationSession *_authenticationSession;
    NSString *_clientID;
}

+ (void)_presentInternetOfflineError;
+ (void)_presentUsernameMismatchAlert;
+ (id)_identityFromUsername:(id)a0 displayName:(id)a1 token:(id)a2 refreshToken:(id)a3 idToken:(id)a4;
+ (id)googleAuthControllerWithAccount:(id)a0 accountStore:(id)a1 presentationBlock:(id /* block */)a2 completion:(id /* block */)a3;
+ (id)googleAuthControllerWithPresentationBlock:(id /* block */)a0 completion:(id /* block */)a1;
+ (id)googleAuthControllerWithYouTubeUsername:(id)a0 presentationBlock:(id /* block */)a1 completion:(id /* block */)a2;

- (void)dealloc;
- (void).cxx_destruct;
- (void)cancelAuthorization;
- (id)_webClient;
- (id)initWithAccount:(id)a0 accountStore:(id)a1 presentationBlock:(id /* block */)a2;
- (id)initWithAccountDescription:(id)a0 presentationBlock:(id /* block */)a1;
- (id)initWithEmailOnlyScope:(BOOL)a0 presentationBlock:(id /* block */)a1;
- (void)_didRedirectToURL:(id)a0 codeVerifier:(id)a1;
- (void)_completeWithIdentity:(id)a0 error:(id)a1;
- (void)_dismissAndCompleteWithIdentity:(id)a0 error:(id)a1;
- (id)_initWithAccount:(id)a0 accountStore:(id)a1 username:(id)a2 youTube:(BOOL)a3 emailOnly:(BOOL)a4 clientID:(id)a5 presentationBlock:(id /* block */)a6 completion:(id /* block */)a7;
- (id)_redirectPathForURI:(id)a0;
- (id)initWithClientID:(id)a0 emailOnlyScope:(BOOL)a1 presentationBlock:(id /* block */)a2;

@end
