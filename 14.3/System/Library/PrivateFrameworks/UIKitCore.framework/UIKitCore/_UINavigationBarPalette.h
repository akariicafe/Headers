@class UINavigationController, NSString, _UIPointerInteractionAssistant, UIView, UINavigationItem;

@interface _UINavigationBarPalette : UIView <_UINavigationPalette, UIPointerInteractionDelegate>

@property (retain, nonatomic) UIView *temporaryBackgroundView;
@property (nonatomic) BOOL didSetMinimumHeight;
@property (copy, nonatomic) NSString *assistantIdentifier;
@property (weak, nonatomic) _UIPointerInteractionAssistant *assistant;
@property (nonatomic) BOOL transitioning;
@property (nonatomic, getter=isPinned) BOOL pinned;
@property (weak, nonatomic) UINavigationItem *owningNavigationItem;
@property (nonatomic, setter=_setContentViewMarginType:) unsigned long long _contentViewMarginType;
@property (nonatomic, setter=_setDisplaysWhenSearchActive:) BOOL _displaysWhenSearchActive;
@property (nonatomic, setter=_setLayoutPriority:) long long _layoutPriority;
@property (readonly, nonatomic) UIView *contentView;
@property (nonatomic) double preferredHeight;
@property (nonatomic) double minimumHeight;
@property (retain, nonatomic, setter=_setBackgroundView:) UIView *_backgroundView;
@property (nonatomic, setter=_setPaletteOverridesPinningBar:) BOOL _paletteOverridesPinningBar;
@property (readonly, nonatomic) UINavigationController *navController;
@property (readonly, nonatomic) unsigned long long boundaryEdge;
@property (nonatomic) BOOL pinningBarShadowWasHidden;
@property (nonatomic) BOOL pinningBarShadowIsHidden;
@property (nonatomic) BOOL paletteShadowIsHidden;
@property (nonatomic, getter=isVisibleWhenPinningBarIsHidden) BOOL visibleWhenPinningBarIsHidden;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } preferredContentInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultContentViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

- (void)_setAssistants;
- (id)initWithContentView:(id)a0;
- (void)pointerInteraction:(id)a0 willExitRegion:(id)a1 animator:(id)a2;
- (void)_clearAssistants;
- (id)_attachedPinningTopBar;
- (BOOL)_shouldUpdateBackground;
- (void)_setTopConstraintConstant:(double)a0;
- (void)_setLeftConstraintConstant:(double)a0;
- (void)_configurePaletteConstraintsForBoundary;
- (void)_updateBackgroundView;
- (void)_updateBackgroundConstraintsIfNecessary;
- (void)_disableConstraints;
- (void)_enableConstraints;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (void)_setupBackgroundViewIfNecessary;
- (void).cxx_destruct;
- (void)_configureConstraintsForBackground:(id)a0;
- (void)_resetHeightConstraintConstant;
- (void)_setSize:(struct CGSize { double x0; double x1; })a0;
- (void)pointerInteraction:(id)a0 willEnterRegion:(id)a1 animator:(id)a2;
- (void)_setAttached:(BOOL)a0 didComplete:(BOOL)a1;
- (BOOL)paletteIsHidden;
- (BOOL)isAttached;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isAnimating:(BOOL)a1;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (void)_resetConstraintConstants:(double)a0;
- (void)resetBackgroundConstraints;
- (void)layoutSubviews;
- (void)addSubview:(id)a0;

@end
