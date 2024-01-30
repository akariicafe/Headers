@class AVLayoutView;

@interface AVBackgroundView : UIView

@property (retain, nonatomic) AVLayoutView *layoutView;
@property (nonatomic) BOOL automaticallyDrawsRoundedCorners;
@property (nonatomic) BOOL prefersLowQualityEffects;
@property (nonatomic, getter=isCircular) BOOL circular;

- (void).cxx_destruct;
- (void)_ensureOrRemoveLayoutView;
- (void)_updateBackdropShape;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)addSubview:(id)a0 applyingMaterialStyle:(long long)a1 tintEffectStyle:(long long)a2;
- (BOOL)_isContainedInOverlappingBackgroundView;

@end
