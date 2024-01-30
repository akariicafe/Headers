@class UIView;

@interface CNKInsulatingView : UIView

@property (readonly, nonatomic) UIView *insulatedView;
@property (nonatomic) BOOL forwardsHits;

- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 insulatedView:(id)a1;

@end
