@class ASAuthorizationController, NSString, ASAuthorizationSingleSignOnProvider, SFAuthenticationSession;
@protocol ASWebAuthenticationPresentationContextProviding;

@interface ASWebAuthenticationSession : NSObject <ASAuthorizationControllerDelegate, ASAuthorizationControllerPresentationContextProviding> {
    ASAuthorizationController *_authorizationController;
    ASAuthorizationSingleSignOnProvider *_ssoProvider;
    NSString *_callbackURLScheme;
    SFAuthenticationSession *_authenticationSession;
    id /* block */ _originalCompletionHandler;
    ASWebAuthenticationSession *_referenceToSelf;
}

@property (weak, nonatomic) id<ASWebAuthenticationPresentationContextProviding> presentationContextProvider;
@property (nonatomic) BOOL prefersEphemeralWebBrowserSession;
@property (readonly, nonatomic) BOOL canStart;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)handleSSOExtensionIdentifier:(struct { unsigned int x0[8]; })a0;
+ (void)resetSSOExtensionIdentifier;

- (void)cancel;
- (BOOL)start;
- (void)_invalidate;
- (void).cxx_destruct;
- (void)authorizationController:(id)a0 didCompleteWithAuthorization:(id)a1;
- (void)authorizationController:(id)a0 didCompleteWithError:(id)a1;
- (id)presentationAnchorForAuthorizationController:(id)a0;
- (id)initWithURL:(id)a0 callbackURLScheme:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithURL:(id)a0 callbackURLScheme:(id)a1 usingEphemeralSession:(BOOL)a2 completionHandler:(id /* block */)a3;
- (id)initWithURL:(id)a0 callbackURLScheme:(id)a1 usingEphemeralSession:(BOOL)a2 jitEnabled:(BOOL)a3 completionHandler:(id /* block */)a4;
- (BOOL)_startDryRun:(BOOL)a0;

@end
