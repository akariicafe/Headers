@class NSString, UIImageView, UIImage, UIView;

@interface SBFluidSwitcherButton : UIControl <UIPointerInteractionDelegate> {
    UIView *_backgroundView;
    UIImageView *_glyphImageView;
    UIImageView *_xPlusDView;
    UIView *_highlightView;
}

@property (retain, nonatomic) UIImage *image;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } extendedEdgeInsets;
@property (retain, nonatomic) NSString *backdropGroupName;
@property (nonatomic) long long buttonStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (void)didMoveToSuperview;
- (void)setHighlighted:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_addHighlightViewIfNecessary;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (id)_backgroundMaterialView;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (void)_invalidateBackgroundView;
- (void)_invalidateXPlusDView;
- (void)_configureGlyphImageViewIfNecessaryForStyle:(long long)a0;
- (void)_configureXPlusDViewIfNecessaryForStyle:(long long)a0;
- (void)_configureBackgroundViewIfNecessaryForStyle:(long long)a0;

@end
