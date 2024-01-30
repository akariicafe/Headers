@class UIColor, NSString, NSMutableSet, UIImage, ACMAppleConnectImplComponents, UIView;
@protocol ACMUIControllerDelegate, ACMBaseAuthenticationRequest, ACMSignInDialogProtocol;

@interface ACMEUIController : NSObject <ACMSignInDialogDelegate, ACMExternalUIControllerProtocol>

@property (retain, nonatomic) id<ACMSignInDialogProtocol> signInDialog;
@property (retain, nonatomic) NSMutableSet *shownAlerts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long signInStyle;
@property (retain, nonatomic) UIImage *logoImage;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) NSString *accountNameFieldPlaceholder;
@property (nonatomic) struct CGPoint { double x; double y; } widgetPosition;
@property (retain, nonatomic) NSString *widgetAccountLabel;
@property (retain, nonatomic) id signInButton;
@property (retain, nonatomic) id cancelButton;
@property (nonatomic) long long widgetPasswordReturnKeyType;
@property (nonatomic) BOOL shouldAuthenticateOnUserInput;
@property (nonatomic) NSString *password;
@property (readonly) ACMAppleConnectImplComponents *components;
@property (nonatomic) id<ACMUIControllerDelegate> delegate;
@property (nonatomic, getter=isWidgetEnabled) BOOL widgetEnabled;
@property (readonly, nonatomic) BOOL isWidgetShown;
@property (retain, nonatomic) id<ACMBaseAuthenticationRequest> request;
@property (readonly) unsigned long long signInDialogContentStyle;
@property (readonly) UIView *managerApprovalDialogSummaryView;

- (void)alertView:(id)a0 didDismissWithButtonIndex:(long long)a1;
- (id)init;
- (void)dealloc;
- (BOOL)isWidgetShown;
- (BOOL)useAlertView;
- (void)showSignInWidgetWithParentViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)hideSignInWidgetWithParentViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)cancelSignInWidget;
- (void)showAlertWithAlertMessage:(id)a0 buttonTitle:(id)a1 cancelButtonTitle:(id)a2 errorTag:(long long)a3;
- (id)createAlertDialog;
- (BOOL)useCustomWidget;
- (id)createCustomWidget;
- (id)createStandardWidget;
- (void)onIForgot:(id)a0;
- (void)onSignIn:(id)a0;
- (void)onSignInCancel:(id)a0;
- (void)signInDialogWillBecomeEnabled;
- (void)signInDialogDidBecomeEnabled;
- (void)signInDialogWillBecomeDisabled;
- (void)signInDialogDidBecomeDisabled;
- (void)onManageAppleID:(id)a0;
- (Class)standardSignInClass;
- (Class)customSignInClass;
- (Class)iTunesSignInClass;
- (Class)signInWidgetClass;

@end
