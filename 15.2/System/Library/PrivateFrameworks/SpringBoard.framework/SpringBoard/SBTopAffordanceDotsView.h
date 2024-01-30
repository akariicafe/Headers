@class UIPointerInteraction, NSString, SBTopAffordanceDotView, UIView, NSLayoutConstraint;

@interface SBTopAffordanceDotsView : SBHitTestExtendedView <UIPointerInteractionDelegate> {
    SBTopAffordanceDotView *_leadingDotView;
    SBTopAffordanceDotView *_centerDotView;
    SBTopAffordanceDotView *_trailingDotView;
    UIView *_hitTestBlocker;
    NSLayoutConstraint *_widthConstraint;
    NSLayoutConstraint *_heightConstraint;
    NSLayoutConstraint *_leadingSpacingConstraint;
    NSLayoutConstraint *_trailingSpacingConstraint;
    NSLayoutConstraint *_hitTestBlockerWidthConstraint;
    NSLayoutConstraint *_hitTestBlockerHeightConstraint;
    NSLayoutConstraint *_hitTestBlockerLeftConstraint;
    UIPointerInteraction *_pointerInteraction;
}

@property (nonatomic, getter=isExpanded) BOOL expanded;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (nonatomic, getter=isPointerInteractionEnabled) BOOL pointerInteractionEnabled;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } hitTestEdgeInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateBackgroundColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (id)_dotViews;

@end
