@class MTVisualStylingProvider, NSString, UIView, NSLayoutConstraint, UIPointerInteraction, UIImageSymbolConfiguration;

@interface SBTopAffordanceButton : UIButton <UIPointerInteractionDelegate> {
    MTVisualStylingProvider *_visualStylingProvider;
    UIView *_selectedIndicatorView;
}

@property (class, readonly, nonatomic) UIImageSymbolConfiguration *symbolConfiguration;

@property (nonatomic) long long topAffordanceButtonType;
@property (weak, nonatomic) NSLayoutConstraint *widthConstraint;
@property (weak, nonatomic) UIPointerInteraction *pointerInteraction;
@property (retain, nonatomic) MTVisualStylingProvider *visualStylingProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)portraitImageNameForTopAffordanceButtonType:(long long)a0;
+ (id)landscapeImageNameForTopAffordanceButtonType:(long long)a0;
+ (id)imageForTopAffordanceButtonType:(long long)a0 interfaceOrientation:(long long)a1;
+ (id)selectedButtonBackgroundColor;
+ (id)hoveredSelectedButtonBackgroundColor;
+ (id)buttonWithTopAffordanceButtonType:(long long)a0;

- (BOOL)isPointerInteractionEnabled;
- (void)layoutSubviews;
- (void)setPointerInteractionEnabled:(BOOL)a0;
- (void)setEnabled:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_selectedIndicatorBounds;
- (void)pointerInteraction:(id)a0 willEnterRegion:(id)a1 animator:(id)a2;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)pointerInteraction:(id)a0 willExitRegion:(id)a1 animator:(id)a2;
- (void)setSelected:(BOOL)a0;
- (void).cxx_destruct;
- (double)_selectedIndicatorAlpha;
- (id)_selectedIndicatorViewWithImage:(id)a0;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_extendedHitTestBounds;
- (void)setImage:(id)a0 forState:(unsigned long long)a1 duration:(double)a2;

@end
