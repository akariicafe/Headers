@class UINavigationItem, NSString, UIStackView, UINavigationBar, UIButton, NDOWarranty, NSLayoutConstraint, UILabel;
@protocol NDOAppleCareFlowDelegate;

@interface NDOAppleCareViewController : UIViewController <NDOAppleCareWebViewPresenterProtocol, NDOAppleCareAMSUIViewPresenterProtocol>

@property (retain) NDOWarranty *warranty;
@property (retain) NSString *serialNumber;
@property unsigned long long presentationType;
@property (weak, nonatomic) NSLayoutConstraint *leadingConstraint;
@property (weak, nonatomic) NSLayoutConstraint *trailingConstraint;
@property (weak, nonatomic) NSLayoutConstraint *notNowButtonLeadingConstraint;
@property (weak, nonatomic) NSLayoutConstraint *notNowButtonTrailingConstraint;
@property (weak, nonatomic) UINavigationBar *navBar;
@property (weak, nonatomic) UINavigationItem *navBarItem;
@property (weak, nonatomic) UILabel *detailsTextView;
@property (weak, nonatomic) UIStackView *buttonStackView;
@property (weak, nonatomic) UIButton *notNowButton;
@property (weak, nonatomic) UIButton *continueButton;
@property (weak) id<NDOAppleCareFlowDelegate> presentor;

- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (void)okButtonPressed;
- (void)cancelPressed:(id)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (id)initWithWarranty:(id)a0 presentationType:(unsigned long long)a1;
- (id)initWithWarranty:(id)a0 presentationType:(unsigned long long)a1 serialNumber:(id)a2;
- (void)completeWithStatus:(unsigned long long)a0 params:(id)a1;
- (void)completeWithStatus:(unsigned long long)a0;
- (void)webviewFinishedWithCompletion:(unsigned long long)a0;
- (void)amsUIViewFinishedWithCompletion:(unsigned long long)a0;
- (void)amsUIViewFinishedWithCompletion:(unsigned long long)a0 params:(id)a1;
- (id)initWithWarranty:(id)a0;
- (void)getAppleCarePressed:(id)a0;
- (void)notNowPressed:(id)a0;

@end
