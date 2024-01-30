@class UILabel, UIView;

@interface WFAudioInputViewController : UIViewController

@property (readonly, nonatomic) UILabel *statusLabel;
@property (readonly, nonatomic) UIView *contentView;

- (void)loadView;
- (void).cxx_destruct;
- (BOOL)accessibilityPerformMagicTap;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)handleTap;

@end
