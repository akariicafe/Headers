@class CPSNavigationAlertProgressView;

@interface CPSNavigationAlertFocusButton : CPSButton

@property (weak, nonatomic) CPSNavigationAlertProgressView *altFocusProgressView;

- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)pressesBegan:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)pressesCancelled:(id)a0 withEvent:(id)a1;
- (void)pressesEnded:(id)a0 withEvent:(id)a1;
- (void)setHighlighted:(BOOL)a0;

@end
