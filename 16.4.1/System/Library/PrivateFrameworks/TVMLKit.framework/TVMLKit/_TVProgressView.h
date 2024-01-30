@class UIColor, UIImageView, UIVisualEffectView, _TVProgressBarView;

@interface _TVProgressView : UIView {
    _TVProgressBarView *_progressBarView;
}

@property (retain, nonatomic) UIImageView *shadowImageView;
@property (nonatomic) long long style;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double progress;
@property (retain, nonatomic) UIColor *progressTintColor;
@property (retain, nonatomic) UIColor *gradientStartColor;
@property (retain, nonatomic) UIColor *gradientEndColor;
@property (retain, nonatomic) UIColor *completeTintColor;
@property (nonatomic) BOOL useMaterial;
@property (nonatomic) BOOL shouldProgressBarUseRoundCorner;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (retain, nonatomic) UIVisualEffectView *materialView;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_layoutMaterialView;
- (id)_maskImageForProgressBar;
- (void)_updateForStyleChange;

@end
