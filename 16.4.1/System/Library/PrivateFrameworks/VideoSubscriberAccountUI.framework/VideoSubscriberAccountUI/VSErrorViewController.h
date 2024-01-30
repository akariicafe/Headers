@class VSFontCenter, UILabel, NSError, UIButton;

@interface VSErrorViewController : UIViewController

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *messageLabel;
@property (retain, nonatomic) UIButton *recoveryButton;
@property (retain, nonatomic) VSFontCenter *fontCenter;
@property (retain, nonatomic) NSError *error;
@property (nonatomic, getter=isRecoveryDestructive) BOOL recoveryDestructive;

- (void)_updateText;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)_recoveryButtonPressed:(id)a0;

@end
