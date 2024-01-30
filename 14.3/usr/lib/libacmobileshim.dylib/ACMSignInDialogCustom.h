@class UIColor, NSString, UIBarButtonItem, UIButton;
@protocol ACMSignInDialogDelegate, ACMSignInWidgetProtocol;

@interface ACMSignInDialogCustom : ACMSignInDialog <ACMSignInDialogCustomProtocol, ACMSignInWidgetDelegate>

@property (readonly, retain, nonatomic) id<ACMSignInWidgetProtocol> widget;
@property (readonly, nonatomic) BOOL standardViewController;
@property (retain, nonatomic) Class widgetClass;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) BOOL userNameFieldEditable;
@property (nonatomic) BOOL shouldAuthenticateOnUserInput;
@property (nonatomic) struct CGPoint { double x; double y; } widgetPosition;
@property (nonatomic) NSString *widgetAccountLabel;
@property (nonatomic) long long widgetPasswordReturnKeyType;
@property (retain, nonatomic) UIButton *signInButton;
@property (retain, nonatomic) UIBarButtonItem *signInBarButton;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIBarButtonItem *cancelBarButton;
@property id<ACMSignInDialogDelegate> delegate;
@property (retain, nonatomic) NSString *requestedUserName;
@property (readonly) NSString *userNameString;
@property NSString *passwordString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canSignIn;
- (void)dealloc;
- (void)loadView;
- (void)checkFields;
- (void)setupCustomView;
- (void)setShouldAuthenticateOnUserInput:(BOOL)a0;
- (void)disableControls:(BOOL)a0;
- (BOOL)shouldAuthenticateOnUserInput;
- (void)showWithParentViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)hideWithParentViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)onIForgot:(id)a0;
- (void)onSignIn:(id)a0;

@end
