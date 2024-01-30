@class NSString, UITextView, NSLayoutConstraint;

@interface _CARLearnMoreViewController : UIViewController

@property (copy, nonatomic) NSString *resourcePath;
@property (retain, nonatomic) UITextView *textView;
@property (retain, nonatomic) NSLayoutConstraint *bottomMarginConstraint;

- (void).cxx_destruct;
- (void)viewSafeAreaInsetsDidChange;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;
- (id)initWithContentsOfResource:(id)a0 ofType:(id)a1;
- (void)_configureLearnMoreView;

@end
