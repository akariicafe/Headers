@class VSFontCenter, UILabel, NSError, UIButton;

@interface VSErrorViewController : UIViewController

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *messageLabel;
@property (retain, nonatomic) UIButton *recoveryButton;
@property (retain, nonatomic) VSFontCenter *fontCenter;
@property (retain, nonatomic) NSError *error;
@property (nonatomic, getter=isRecoveryDestructive) BOOL recoveryDestructive;

- (void)_updateText;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)dealloc;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)_recoveryButtonPressed:(id)a0;

@end
