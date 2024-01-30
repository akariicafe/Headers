@class UIStackView, OBPrivacyLinkController, AKAppleIDAuthenticationInAppContext, UIView, UIButton;

@interface AKBasicLoginOptionsViewController : UIViewController

@property (weak, nonatomic) AKAppleIDAuthenticationInAppContext *context;
@property (retain) UIStackView *optionsStack;
@property (retain) UIButton *forgotButton;
@property (retain) UIButton *createButton;
@property (retain) UIView *privacyView;
@property (retain) OBPrivacyLinkController *privacyController;
@property BOOL isCreateAppleIDAllowed;
@property (copy, nonatomic) id /* block */ createIDAction;
@property (copy, nonatomic) id /* block */ forgotAction;

- (void)viewDidLoad;
- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_refreshCreateAppleIDButton;
- (void)_configureButtonForFontAdjustment:(id)a0;
- (void)_configureOptionsStack;
- (void)_addPrivacyView:(id)a0;
- (BOOL)_shouldHideCreateButton;
- (void)forgotPressed:(id)a0;
- (void)createPressed:(id)a0;

@end
