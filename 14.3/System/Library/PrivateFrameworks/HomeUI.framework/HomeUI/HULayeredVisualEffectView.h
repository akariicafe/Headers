@class UIVisualEffectView, HULayeredBackgroundEffect, UIView, HULayeredContentEffect;

@interface HULayeredVisualEffectView : UIView

@property (retain, nonatomic) UIVisualEffectView *contentEffectView;
@property (retain, nonatomic) UIVisualEffectView *backgroundEffectView;
@property (retain, nonatomic) UIView *backgroundFillView;
@property (retain, nonatomic) HULayeredContentEffect *contentEffect;
@property (retain, nonatomic) HULayeredBackgroundEffect *backgroundEffect;
@property (nonatomic) double contentEffectAlpha;
@property (nonatomic) double backgroundEffectAlpha;
@property (readonly, nonatomic) UIView *contentView;
@property (nonatomic) double cornerRadius;

- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 withHorizontalFittingPriority:(float)a1 verticalFittingPriority:(float)a2;
- (void).cxx_destruct;
- (void)_applyCornerRadius;
- (void)_updateSubviewOrder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateBackgroundEffects;
- (void)_updateContentEffects;
- (id)initWithContentEffect:(id)a0 backgroundEffect:(id)a1;

@end
