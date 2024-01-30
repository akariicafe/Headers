@class UIButton, UILabel, NSString;

@interface RPPairingShowViewController : UIViewController

@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UILabel *verificationCodeLabel;
@property (copy, nonatomic) id /* block */ dismissHandler;
@property (copy, nonatomic) NSString *password;

+ (id)instantiateViewController;

- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)handleCancelButton:(id)a0;
- (void)_updatePasswordUI;

@end
