@class CAGradientLayer, CAShapeLayer, NSLayoutConstraint, MKBarViewOptions;

@interface MKBarView : UIView {
    CAShapeLayer *_barMaskLayer;
    CAGradientLayer *_filledGradientLayer;
    NSLayoutConstraint *_heightConstraint;
}

@property (copy, nonatomic) MKBarViewOptions *options;

- (void).cxx_destruct;
- (void)_setupViewAndConstraints;
- (void)_setupBarFillLayer;
- (const struct CGPath { } *)_filledRectanglePath;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
