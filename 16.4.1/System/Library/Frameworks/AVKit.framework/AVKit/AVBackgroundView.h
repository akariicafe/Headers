@class AVLayoutView;

@interface AVBackgroundView : UIView

@property (retain, nonatomic) AVLayoutView *layoutView;
@property (nonatomic) BOOL automaticallyDrawsRoundedCorners;
@property (nonatomic) BOOL prefersLowQualityEffects;
@property (nonatomic, getter=isCircular) BOOL circular;

- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)didMoveToSuperview;
- (BOOL)_isContainedInOverlappingBackgroundView;
- (void)_updateBackdropShape;
- (void)addSubview:(id)a0 applyingMaterialStyle:(long long)a1 tintEffectStyle:(long long)a2;
- (void)_ensureOrRemoveLayoutView;
- (void).cxx_destruct;

@end
