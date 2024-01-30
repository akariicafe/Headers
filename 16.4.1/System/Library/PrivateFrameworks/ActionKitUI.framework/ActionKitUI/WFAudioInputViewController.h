@class UILabel, UIView;

@interface WFAudioInputViewController : UIViewController

@property (readonly, nonatomic) UILabel *statusLabel;
@property (readonly, nonatomic) UIView *contentView;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)loadView;
- (BOOL)accessibilityPerformMagicTap;
- (void)handleTap;

@end
