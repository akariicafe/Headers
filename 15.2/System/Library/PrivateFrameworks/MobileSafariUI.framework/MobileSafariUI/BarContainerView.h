@class NSMutableSet;

@interface BarContainerView : UIView

@property (readonly, copy, nonatomic) NSMutableSet *barViews;

- (void)didMoveToSuperview;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)registerBarView:(id)a0;
- (void).cxx_destruct;
- (void)unregisterBarView:(id)a0;

@end
