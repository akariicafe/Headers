@class UILabel, NSString, UIActivityIndicatorView;

@interface LoadingIndicatorViewController : UIViewController

@property (weak, nonatomic) UILabel *titleLabel;
@property (weak, nonatomic) UILabel *messageLabel;
@property (weak) UIActivityIndicatorView *spinnerView;
@property (retain, nonatomic) NSString *titleText;
@property (retain, nonatomic) NSString *messageText;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithTitle:(id)a0 message:(id)a1;
- (void)viewDidLoad;

@end
