@class NSLayoutConstraint, UILabel, UIView, UIButton;

@interface GKDefaultPrivacyViewController : UIViewController

@property (retain, nonatomic) UILabel *publicTitle;
@property (retain, nonatomic) UILabel *publicSubTitle;
@property (retain, nonatomic) UILabel *friendsOnlyTitle;
@property (retain, nonatomic) UILabel *friendsOnlySubtitle;
@property (retain, nonatomic) UILabel *meOnlyTitle;
@property (retain, nonatomic) UILabel *meOnlySubtitle;
@property (retain, nonatomic) UIView *publicDivider;
@property (retain, nonatomic) UIView *publicContainer;
@property (retain, nonatomic) UIButton *publicButton;
@property (retain, nonatomic) UIButton *friendsOnlyButton;
@property (retain, nonatomic) UIButton *meOnlyButton;
@property (retain, nonatomic) UILabel *subTitle;
@property (retain, nonatomic) NSLayoutConstraint *topMargin;
@property (retain, nonatomic) UIView *buttonContainer;
@property (retain, nonatomic) NSLayoutConstraint *mainStackViewTrailingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *mainStackViewLeadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *continueButtonEqualMainTitleWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *continueButtonWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *continueButtonBottomConstraint;
@property (retain, nonatomic) UILabel *underageHintLabel;
@property (retain, nonatomic) UIButton *nextButton;
@property (retain, nonatomic) UILabel *mainTitle;
@property (nonatomic) int profilePrivacyVisibility;
@property long long numberOfClicksOnPrivacySelection;

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)updateUI;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)nextPressed:(id)a0;
- (void)notNowButtonPressed:(id)a0;
- (void)reportPrivacySelectionClickAnalytics;
- (void)button1Pressed:(id)a0;
- (void)button2Pressed:(id)a0;
- (void)button3Pressed:(id)a0;

@end
