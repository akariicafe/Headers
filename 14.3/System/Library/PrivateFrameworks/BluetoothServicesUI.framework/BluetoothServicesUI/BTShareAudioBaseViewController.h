@class UILabel, BTShareAudioViewController, UIView;

@interface BTShareAudioBaseViewController : UIViewController

@property (retain, nonatomic) BTShareAudioViewController *mainController;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *cardView;
@property (nonatomic) BOOL viewActive;

- (void).cxx_destruct;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)_handleMenuButton:(id)a0;

@end
