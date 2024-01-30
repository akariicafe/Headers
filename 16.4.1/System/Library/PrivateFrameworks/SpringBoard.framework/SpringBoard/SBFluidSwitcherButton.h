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

- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (id)_backgroundMaterialView;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlighted:(BOOL)a0;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (void)layoutSubviews;
- (void)didMoveToSuperview;
- (void)_addHighlightViewIfNecessary;
- (void).cxx_destruct;
- (void)_invalidateBackgroundView;
- (void)_configureBackgroundViewIfNecessaryForStyle:(long long)a0;
- (void)_configureGlyphImageViewIfNecessaryForStyle:(long long)a0;
- (void)_configureXPlusDViewIfNecessaryForStyle:(long long)a0;
- (void)_invalidateXPlusDView;

@end
