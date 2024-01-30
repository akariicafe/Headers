@class NSData, NSString, NSArray, NSURL, UIWindow, ASCAgentProxy, NSObject, UIViewController, SOAuthorization, NSNumber;
@protocol ASAuthorizationControllerDelegate, ASAuthorizationControllerPresentationContextProviding, OS_os_activity;

@interface ASAuthorizationController : NSObject <SOAuthorizationDelegate> {
    SOAuthorization *_appSSOAuthorization;
    NSURL *_appSSORequestURL;
    UIWindow *_appSSOPresentationAnchor;
    UIViewController *_appSSOViewController;
    ASCAgentProxy *_authenticationServicesAgentProxy;
    NSObject<OS_os_activity> *_authorizationActivity;
}

@property (copy, nonatomic) NSString *proxiedAppName;
@property (copy, nonatomic) NSString *proxiedAppIdentifier;
@property (copy, nonatomic) NSString *proxiedBundleIdentifier;
@property (copy, nonatomic) NSString *proxiedTeamIdentifier;
@property (copy, nonatomic) NSArray *proxiedAssociatedDomains;
@property (copy, nonatomic) NSData *proxiedIconData;
@property (copy, nonatomic) NSNumber *proxiedIconScale;
@property (copy, nonatomic) NSString *proxiedOriginDeviceName;
@property (copy, nonatomic) NSString *proxySheetHeaderOverride;
@property (copy, nonatomic) NSString *proxySheetTitleOverride;
@property (copy, nonatomic) NSString *proxySheetSubtitleOverride;
@property (copy, nonatomic) NSString *proxySheetNoCredentialsErrorTitleOverride;
@property (copy, nonatomic) NSString *proxySheetNoCredentialsErrorMessageOverride;
@property (nonatomic) BOOL useAlternativeSecurityKeysIcon;
@property (readonly, nonatomic) NSArray *authorizationRequests;
@property (weak, nonatomic) id<ASAuthorizationControllerDelegate> delegate;
@property (weak, nonatomic) id<ASAuthorizationControllerPresentationContextProviding> presentationContextProvider;
@property (copy, nonatomic) NSArray *customAuthorizationMethods;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;

- (void)_failWithError:(id)a0;
- (void)cancel;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)performRequests;
- (id)initWithAuthorizationRequests:(id)a0;
- (void)authorization:(id)a0 didCompleteWithAuthorizationResult:(id)a1;
- (void)authorization:(id)a0 didCompleteWithError:(id)a1;
- (void)authorization:(id)a0 didCompleteWithHTTPAuthorizationHeaders:(id)a1;
- (void)authorization:(id)a0 didCompleteWithHTTPResponse:(id)a1 httpBody:(id)a2;
- (void)authorization:(id)a0 presentViewController:(id)a1 withCompletion:(id /* block */)a2;
- (void)authorizationDidCancel:(id)a0;
- (void)authorizationDidComplete:(id)a0;
- (void)authorizationDidNotHandle:(id)a0;
- (id)_authenticationServicesAgentProxy;
- (id)_convertCoreErrorToPublicError:(id)a0;
- (void)performAutoFillAssistedRequests;
- (id)_authKitRequestFromAppleIDRequest:(id)a0;
- (id)_authKitRequests;
- (id)_authenticatedResponseFromHTTPResponse:(id)a0 httpBody:(id)a1;
- (id)_authorizationFromAuthKitResult:(id)a0;
- (id)_authorizationRequestsHandledByAuthenticationServicesDaemon:(id)a0;
- (void)_completeWithAuthorization:(id)a0;
- (void)_finishAppSSO;
- (BOOL)_onlyHasAppleIDRequest:(id)a0;
- (void)_performAuthKitRequests:(id)a0 options:(unsigned long long)a1;
- (void)_performAuthorizationRequests:(id)a0 requestStyle:(long long)a1 requestOptions:(unsigned long long)a2;
- (void)_performRequestsWithStyle:(long long)a0 options:(unsigned long long)a1;
- (id)_publicErrorFromAuthKitError:(id)a0;
- (id)_requestContextWithRequests:(id)a0 error:(id *)a1;
- (BOOL)_shouldPerformRequestsWithAuthKit:(id)a0;
- (void)performRequestsWithOptions:(unsigned long long)a0;

@end
