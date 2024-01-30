@class CRSDashboardFocusableItem;
@protocol DBWidgetFocusableViewDelegate;

@interface DBWidgetFocusableView : UIView

@property (retain, nonatomic) CRSDashboardFocusableItem *focusableItem;
@property (weak, nonatomic) id<DBWidgetFocusableViewDelegate> delegate;

- (void)pressesChanged:(id)a0 withEvent:(id)a1;
- (BOOL)isUserInteractionEnabled;
- (void)pressesBegan:(id)a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)canBecomeFocused;
- (void)pressesCancelled:(id)a0 withEvent:(id)a1;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)pressesEnded:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)_selected;

@end
