@class HUCircleView, NSArray, UIImageView, UIImage;

@interface HUCircleButton : UIButton

@property (retain, nonatomic) HUCircleView *circleView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) NSArray *constraints;
@property (retain, nonatomic) UIImage *iconImage;

- (void)tintColorDidChange;
- (void).cxx_destruct;
- (void)setAlpha:(double)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setupConstraints;

@end
