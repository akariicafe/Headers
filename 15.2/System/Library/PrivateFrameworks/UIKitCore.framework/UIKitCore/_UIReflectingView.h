@class UIView;

@interface _UIReflectingView : UIView {
    UIView *_gradientView;
    double _reflectionAlpha;
}

@property (readonly, retain, nonatomic) UIView *containerView;
@property (nonatomic) double reflectionFraction;
@property (nonatomic) double reflectionAlpha;

- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateGradientColors;
- (void).cxx_destruct;
- (id)_gradientLayer;
- (void)setBackgroundColor:(id)a0;

@end
