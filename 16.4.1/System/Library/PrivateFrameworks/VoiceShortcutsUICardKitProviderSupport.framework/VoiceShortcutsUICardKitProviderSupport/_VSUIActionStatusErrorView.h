@class UILabel, UIImageView, UIView;

@interface _VSUIActionStatusErrorView : UIView

@property (retain, nonatomic) UILabel *errorLabel;
@property (retain, nonatomic) UIImageView *errorIconView;
@property (retain, nonatomic) UIView *errorIconBackgroundView;

- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_setUpViews;

@end
