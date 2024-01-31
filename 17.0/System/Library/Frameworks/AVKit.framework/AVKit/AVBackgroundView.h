@class AVLayoutView;

@interface AVBackgroundView : UIView

@property (retain, nonatomic) AVLayoutView *layoutView;
@property (nonatomic) BOOL automaticallyDrawsRoundedCorners;
@property (nonatomic) BOOL prefersLowQualityEffects;
@property (nonatomic, getter=isCircular) BOOL circular;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didMoveToSuperview;
- (void)_ensureOrRemoveLayoutView;
- (void)_updateBackdropShape;
- (void).cxx_destruct;
- (void)addSubview:(id)a0 applyingMaterialStyle:(long long)a1 tintEffectStyle:(long long)a2;
- (BOOL)_isContainedInOverlappingBackgroundView;
- (void)layoutSubviews;
- (void)didMoveToWindow;

@end
