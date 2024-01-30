@class UIView;

@interface CPSNavigationAlertProgressView : UIView

@property (nonatomic) double duration;
@property (retain, nonatomic) UIView *progressView;
@property (nonatomic) BOOL hasStartedAnimating;

- (void).cxx_destruct;
- (void)startAnimating;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 duration:(double)a1;

@end
