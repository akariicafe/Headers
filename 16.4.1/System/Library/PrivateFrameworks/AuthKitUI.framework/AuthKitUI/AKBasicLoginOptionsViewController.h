@class UIStackView, AKAppleIDAuthenticationInAppContext, OBPrivacyLinkController, UIButton;

@interface AKBasicLoginOptionsViewController : UIViewController

@property (weak, nonatomic) AKAppleIDAuthenticationInAppContext *context;
@property (retain, nonatomic) UIButton *forgotButton;
@property (retain, nonatomic) UIButton *createButton;
@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) OBPrivacyLinkController *privacyController;
@property (nonatomic) BOOL isCreateAppleIDAllowed;
@property (copy, nonatomic) id /* block */ createIDAction;
@property (copy, nonatomic) id /* block */ forgotAction;

- (void)viewDidLoad;
- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (void)_setupStackView;
- (void)_configureButtonForFontAdjustment:(id)a0;
- (id)_createLinkButtonWithSelector:(SEL)a0;
- (void)_refreshCreateAppleIDButton;
- (void)_setupPrivacyLinkControllerWithContext:(id)a0;
- (BOOL)_shouldHideCreateButton;
- (void)createPressed:(id)a0;
- (void)forgotPressed:(id)a0;

@end
