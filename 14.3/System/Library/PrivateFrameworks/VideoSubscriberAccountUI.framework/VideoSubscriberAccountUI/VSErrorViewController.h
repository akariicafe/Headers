@class VSFontCenter, UILabel, NSError, UIButton;

@interface VSErrorViewController : UIViewController

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *messageLabel;
@property (retain, nonatomic) UIButton *recoveryButton;
@property (retain, nonatomic) VSFontCenter *fontCenter;
@property (retain, nonatomic) NSError *error;
@property (nonatomic, getter=isRecoveryDestructive) BOOL recoveryDestructive;

- (void)_updateText;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;
- (void)_recoveryButtonPressed:(id)a0;

@end
