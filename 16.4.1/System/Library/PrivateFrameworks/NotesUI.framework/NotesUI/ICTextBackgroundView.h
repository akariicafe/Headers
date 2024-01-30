@class UIView;

@interface ICTextBackgroundView : UIView

@property (readonly, nonatomic) UIView *contentView;

- (id)backgroundColor;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setBackgroundColor:(id)a0;
- (void)createLayout;
- (void).cxx_destruct;

@end
