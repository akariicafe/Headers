@class UIView, NSString, ACMExternalAuthenticationRequestImpl, ACMAppleConnectImplComponents, ACMExternalAuthenticationController;
@protocol ACC2SVControllerProtocol, ACMExternalUIControllerProtocol, ACMExternalAppleConnectDelegate, ACMAppleConnectTicketVerificationDelegate;

@interface ACMExternalAppleConnectImpl : ACMAppleConnectImpl <ACMExternalAppleConnectPrivate, ACC2SVControllerDelegate, ACM2SVTransportControllerDelegate, ACMExternalAuthenticationControllerDelegate, ACMExternalAppleConnectImpl>

@property (nonatomic) long long appleConnectState;
@property (retain, nonatomic) id<ACC2SVControllerProtocol> twoSVController;
@property (retain, nonatomic) ACMExternalAuthenticationController *authenticationController;
@property (readonly, nonatomic) id<ACMExternalUIControllerProtocol> uiController;
@property (retain, nonatomic) ACMExternalAuthenticationRequestImpl *currentRequest;
@property id masterObject;
@property id<ACMExternalAppleConnectDelegate, ACMAppleConnectTicketVerificationDelegate> delegate;
@property (nonatomic) long long logLevel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) ACMAppleConnectImplComponents *components;
@property (readonly) unsigned long long signInDialogContentStyle;
@property (readonly) UIView *managerApprovalDialogSummaryView;

+ (void)initialize;

- (void)cancelRequests;
- (void)applicationDidEnterBackground:(id)a0;
- (void)reportError:(id)a0;
- (id)parentViewController;
- (void)dealloc;
- (void)authenticateWithRequest:(id)a0 password:(id)a1;
- (BOOL)isWidgetShown;
- (void)hideSignIn;
- (BOOL)signInAnimated;
- (void)signInDialogWillHide;
- (void)signInDialogDidHide;
- (void)showSignInWithRequest:(id)a0;
- (void)returnResponse:(id)a0 withSelector:(SEL)a1;
- (void)returnError:(id)a0 withSelector:(SEL)a1 withResponseClass:(Class)a2;
- (BOOL)canHideSignInDialog;
- (void)onManageAppleIDForRealm:(id)a0;
- (void)showSignInDialog;
- (void)twoSVTransportController:(id)a0 scheduleHandler:(id)a1 withCompletion:(id /* block */)a2;
- (void)twoSVTransportController:(id)a0 fetchImageWithHandler:(id)a1 completion:(id /* block */)a2;
- (void)twoSVTransportControllerCancelFetchingImages:(id)a0;
- (void)authenticationController:(id)a0 scheduleHandler:(id)a1 withCompletion:(id /* block */)a2;
- (void)authenticationController:(id)a0 perform2StepVerificationWithRequest:(id)a1 completion:(id /* block */)a2;
- (void)authenticateRunningOnMainThreadWithRequest:(id)a0;
- (void)uiControllerOnSignIn:(id)a0 withPassword:(id)a1;
- (void)uiControllerOnSignInCancel:(id)a0;
- (void)uiControllerOnSignIForgot:(id)a0;
- (void)uiControllerWillEnableSignInDialog:(id)a0;
- (void)uiControllerDidEnableSignInDialog:(id)a0;
- (void)uiControllerWillDisableSignInDialog:(id)a0;
- (void)uiControllerDidDisableSignInDialog:(id)a0;
- (id)initWithMasterObject:(id)a0;
- (void)twoSVControllerWillClose:(id)a0;
- (void)twoSVControllerEnterCredentials:(id)a0;
- (void)twoSVController:(id)a0 prepareUIWithCompletion:(id /* block */)a1;
- (void)twoSVController:(id)a0 openMyAppleConnectForRealm:(id)a1;
- (BOOL)shouldReleaseOnMemoryWarning;
- (void)verifyServiceTicket:(id)a0;
- (id)hideAppleConnectSignInDialog;

@end
