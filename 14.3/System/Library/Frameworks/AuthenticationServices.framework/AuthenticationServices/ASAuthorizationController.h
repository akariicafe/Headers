@class UIWindow, NSArray, NSString, NSURL, SOAuthorization, UIViewController;
@protocol ASAuthorizationControllerDelegate, ASAuthorizationControllerPresentationContextProviding;

@interface ASAuthorizationController : NSObject <SOAuthorizationDelegate> {
    SOAuthorization *_appSSOAuthorization;
    NSURL *_appSSORequestURL;
    UIWindow *_appSSOPresentationAnchor;
    UIViewController *_appSSOViewController;
}

@property (readonly, nonatomic) NSArray *authorizationRequests;
@property (weak, nonatomic) id<ASAuthorizationControllerDelegate> delegate;
@property (weak, nonatomic) id<ASAuthorizationControllerPresentationContextProviding> presentationContextProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;

- (id)init;
- (void)authorization:(id)a0 didCompleteWithHTTPAuthorizationHeaders:(id)a1;
- (void).cxx_destruct;
- (void)authorization:(id)a0 didCompleteWithError:(id)a1;
- (void)authorizationDidNotHandle:(id)a0;
- (void)authorization:(id)a0 presentViewController:(id)a1 withCompletion:(id /* block */)a2;
- (void)authorizationDidCancel:(id)a0;
- (void)authorizationDidComplete:(id)a0;
- (void)authorization:(id)a0 didCompleteWithHTTPResponse:(id)a1 httpBody:(id)a2;
- (id)_authKitRequests;
- (id)_authorizationFromAuthKitResult:(id)a0;
- (void)_finishAppSSO;
- (id)initWithAuthorizationRequests:(id)a0;
- (void)performRequests;

@end
