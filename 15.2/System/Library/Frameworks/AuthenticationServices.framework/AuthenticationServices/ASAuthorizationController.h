@class UIWindow, NSArray, NSString, NSURL, SOAuthorization, ASCAgentProxy, UIViewController;
@protocol ASAuthorizationControllerDelegate, ASAuthorizationControllerPresentationContextProviding;

@interface ASAuthorizationController : NSObject <SOAuthorizationDelegate> {
    SOAuthorization *_appSSOAuthorization;
    NSURL *_appSSORequestURL;
    UIWindow *_appSSOPresentationAnchor;
    UIViewController *_appSSOViewController;
    ASCAgentProxy *_authenticationServicesAgentProxy;
}

@property (readonly, nonatomic) NSArray *authorizationRequests;
@property (weak, nonatomic) id<ASAuthorizationControllerDelegate> delegate;
@property (weak, nonatomic) id<ASAuthorizationControllerPresentationContextProviding> presentationContextProvider;
@property (copy, nonatomic) NSArray *customAuthorizationMethods;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;

- (void)authorizationDidComplete:(id)a0;
- (void)authorizationDidNotHandle:(id)a0;
- (void)authorization:(id)a0 didCompleteWithHTTPResponse:(id)a1 httpBody:(id)a2;
- (void)authorization:(id)a0 didCompleteWithError:(id)a1;
- (void)authorization:(id)a0 didCompleteWithAuthorizationResult:(id)a1;
- (void)authorization:(id)a0 didCompleteWithHTTPAuthorizationHeaders:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)authorization:(id)a0 presentViewController:(id)a1 withCompletion:(id /* block */)a2;
- (void)authorizationDidCancel:(id)a0;
- (void)dealloc;
- (id)_authorizationRequestsHandledByAuthenticationServicesDaemon:(id)a0;
- (BOOL)_shouldPerformRequestsWithAuthKit:(id)a0;
- (id)_authKitRequests;
- (void)_performAuthKitRequests:(id)a0;
- (void)_performAuthorizationRequests:(id)a0;
- (id)_authorizationFromAuthKitResult:(id)a0;
- (id)_authKitRequestFromAppleIDRequest:(id)a0;
- (void)_finishAppSSO;
- (id)_authenticatedResponseFromHTTPResponse:(id)a0 httpBody:(id)a1;
- (BOOL)_onlyHasAppleIDRequest:(id)a0;
- (id)_convertCoreErrorToPublicError:(id)a0;
- (id)_requestContextWithRequests:(id)a0 error:(id *)a1;
- (id)_authenticationServicesAgentProxy;
- (id)initWithAuthorizationRequests:(id)a0;
- (void)performRequests;

@end
