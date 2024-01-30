@class UIView;

@interface _UIReflectingView : UIView {
    UIView *_gradientView;
    double _reflectionAlpha;
}

@property (readonly, retain, nonatomic) UIView *containerView;
@property (nonatomic) double reflectionFraction;
@property (nonatomic) double reflectionAlpha;

- (void).cxx_destruct;
- (void)setBackgroundColor:(id)a0;
- (void)_updateGradientColors;
- (void)layoutSubviews;
- (id)_gradientLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
