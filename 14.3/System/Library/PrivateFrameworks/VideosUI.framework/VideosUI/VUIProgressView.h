@class UIColor, VUIProgressBarView, UIImageView, UIView;

@interface VUIProgressView : UIView {
    VUIProgressBarView *_progressBarView;
}

@property (retain, nonatomic) UIImageView *shadowImageView;
@property (retain, nonatomic) UIView *materialView;
@property (nonatomic) unsigned long long style;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double height;
@property (nonatomic) double progress;
@property (retain, nonatomic) UIColor *progressTintColor;
@property (retain, nonatomic) UIColor *gradientStartColor;
@property (retain, nonatomic) UIColor *gradientEndColor;
@property (retain, nonatomic) UIColor *completeTintColor;
@property (nonatomic) BOOL useVisualEffectForMaterial;
@property (nonatomic) BOOL useMaterial;
@property (nonatomic) BOOL shouldProgressBarUseRoundCorner;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } padding;

- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_updateForStyleChange;
- (id)_maskImageForProgressBar;
- (void)_layoutMaterialView;

@end
