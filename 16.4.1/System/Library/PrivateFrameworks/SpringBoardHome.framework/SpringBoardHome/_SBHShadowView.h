@class MTShadowView, CALayer;

@interface _SBHShadowView : UIView <SBHShadowViewFrameProviding> {
    MTShadowView *_shadowView;
    CALayer *_shadowLayer;
}

@property (class, readonly, nonatomic) BOOL supportsMaterialsBasedShadow;

@property (nonatomic) BOOL useMaterialBasedShadow;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameWithContentWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (void)_updateShadow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
