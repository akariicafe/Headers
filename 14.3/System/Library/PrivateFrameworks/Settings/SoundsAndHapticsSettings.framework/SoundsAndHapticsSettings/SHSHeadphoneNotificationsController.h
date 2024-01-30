@class UIScrollView, UILabel, UIButton;

@interface SHSHeadphoneNotificationsController : UIViewController

@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UIButton *learnMoreButton;

- (id)titleText;
- (void).cxx_destruct;
- (id)descriptionText;
- (void)viewDidLoad;
- (id)createTitleLabel;
- (id)createScrollView;
- (id)createDescriptionLabel;
- (id)createLearnMoreButton;
- (void)openHealthArticleSafeListening;

@end
