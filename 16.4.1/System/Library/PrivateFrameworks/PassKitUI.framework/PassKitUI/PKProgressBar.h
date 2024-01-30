@class UIColor, CAGradientLayer;

@interface PKProgressBar : UIView {
    CAGradientLayer *_fillLayer;
    UIColor *_originalStartColor;
    UIColor *_originalEndColor;
}

@property (nonatomic) double progress;
@property (nonatomic) double cornerRadius;
@property (nonatomic) BOOL roundEndCap;
@property (retain, nonatomic) UIColor *gradientStartColor;
@property (retain, nonatomic) UIColor *gradientEndColor;

- (void)_dynamicUserInterfaceTraitDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_updateLayerColors;

@end
