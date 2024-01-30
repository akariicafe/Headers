@interface _UIRoundedRectShadowView : _UIShadowView {
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _shadowOutsets;
}

@property (class, readonly, getter=_shouldCutoutShadow) BOOL shouldCutoutShadow;

@property (readonly, nonatomic) double maskCornerRadius;

+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_expansionInsetForShadowImage;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameWithContentWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateShadowOutsetsIfNecessary;
- (id)initWithCornerRadius:(double)a0;
- (void)layoutSubviews;
- (void)_loadImageIfNecessary;

@end
