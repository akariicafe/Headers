@class UIColor, NSArray, UIImageView, UIImage, UIToolbar, UIView, NSString;
@protocol ACMSignInDialogDelegate;

@interface ACMSignInDialogSimple_Modern : ACMSignInDialogCustom <ACMSignInDialogSimpleProtocol>

@property (readonly, nonatomic) UIImage *iForgotImage;
@property (retain, nonatomic) UIToolbar *toolbar;
@property (retain, nonatomic) UIImageView *logoView;
@property (retain, nonatomic) NSArray *burButtonItems;
@property (retain, nonatomic) UIView *container;
@property (readonly, nonatomic) double widgetConstraintMultiplier;
@property (readonly, nonatomic) double widgetConstraintConstant;
@property (retain, nonatomic) UIImage *logo;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) NSString *accountNameFieldPlaceholder;
@property id<ACMSignInDialogDelegate> delegate;
@property (retain, nonatomic) NSString *requestedUserName;
@property (readonly) NSString *userNameString;
@property NSString *passwordString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (id)widget;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)a0;
- (id)passwordField;
- (void)loadView;
- (id)tintColor;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (id)darkTextColor;
- (BOOL)canSignIn;
- (id)accountNameField;
- (void)checkFields;
- (BOOL)standardViewController;
- (BOOL)userNameFieldEditable;
- (void)disableControls:(BOOL)a0;
- (Class)widgetClass;
- (BOOL)shouldAuthenticateOnUserInput;
- (id)createCancelItem;
- (id)createIForgotItem;
- (void)buildConstraints;
- (void)buildWidgetContentGroupHorizontalConstraints;
- (void)buildWidgetContentGroupVerticalConstraints;
- (void)buildHorizontalConstraints;
- (void)buildVerticalConstraints;
- (BOOL)shouldManuallyChangeStatusBarStyle;
- (id)darkDisabledTextColor;

@end
