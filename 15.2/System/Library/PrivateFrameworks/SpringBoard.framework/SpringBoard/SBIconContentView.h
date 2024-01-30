@class UIView;

@interface SBIconContentView : UIView

@property (nonatomic) long long orientation;
@property (retain, nonatomic) UIView *contentView;

- (void)layoutSubviews;
- (id)initWithOrientation:(long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)preferredFocusEnvironments;

@end
