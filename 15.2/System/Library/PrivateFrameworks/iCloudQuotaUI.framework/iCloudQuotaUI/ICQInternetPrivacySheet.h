@class UIStackView, NSString, UIImageView, UIScrollView, UILabel, ICQInternetPrivacyViewModel;

@interface ICQInternetPrivacySheet : UIViewController

@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) UIImageView *iconView;
@property (copy, nonatomic) NSString *headerText;
@property (retain, nonatomic) UILabel *heaerLabel;
@property (copy, nonatomic) NSString *bodyText;
@property (retain, nonatomic) UILabel *bodyLabel;
@property (weak, nonatomic) ICQInternetPrivacyViewModel *viewModel;

- (void)viewDidLoad;
- (void)setupUI;
- (BOOL)_deviceIsiPad;
- (void).cxx_destruct;
- (void)doneButtonTapped:(id)a0;
- (void)setupScrollView;
- (void)setTextForIdentifier:(id)a0;
- (void)setupStack;
- (void)addHeaderIcon;
- (void)addHeaderText;
- (void)addBodyText;
- (id)createTextViewWithText:(id)a0;
- (id)initWithIdentifier:(id)a0 viewModel:(id)a1;

@end
