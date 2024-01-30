@class DBInCallWidgetButtonRingView;

@interface DBInCallWidgetButton : UIButton

@property (retain, nonatomic) DBInCallWidgetButtonRingView *ringView;
@property (readonly, nonatomic) long long inCallButtonType;

- (void)setSelected:(BOOL)a0;
- (void)pressesBegan:(id)a0 withEvent:(id)a1;
- (void)setHighlighted:(BOOL)a0;
- (void)setupConstraints;
- (void)pressesCancelled:(id)a0 withEvent:(id)a1;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void)pressesEnded:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (id)initWithButtonType:(long long)a0;

@end
