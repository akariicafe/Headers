@class NSString, UIAlertView;
@protocol ACMSignInDialogDelegate;

@interface ACMiTunesSignInDialog : ACMSignInDialog <ACMiTunesSignInDialogProtocol, UIAlertViewDelegate>

@property (retain) NSString *titleField;
@property (readonly, nonatomic) UIAlertView *signInDialog;
@property BOOL isShown;
@property (readonly) BOOL isPortraitMode;
@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } userNameFrame;
@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } passwordFrame;
@property (nonatomic) long long previousInterfaceOrientation;
@property (nonatomic) struct CGSize { double width; double height; } titleStringSize;
@property (nonatomic) BOOL isUserNameEditable;
@property (retain, nonatomic) NSString *alertViewPrompt;
@property id<ACMSignInDialogDelegate> delegate;
@property (retain, nonatomic) NSString *requestedUserName;
@property (readonly) NSString *userNameString;
@property NSString *passwordString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (long long)statusBarStyle;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)dealloc;
- (void)loadView;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)didRotate:(id)a0;
- (void)didPresentAlertView:(id)a0;
- (void)viewDidLoad;
- (void)handleRotation;
- (BOOL)shouldPasswordTextFieldReturnOnSignInDisallowed;
- (void)disableControls:(BOOL)a0;
- (void)showWithParentViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)hideWithParentViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (id)dialogTitle;
- (BOOL)changeTitleStringIfNeeded;
- (void)handleTextFieldShouldReturnOnNonPasswordField;

@end
