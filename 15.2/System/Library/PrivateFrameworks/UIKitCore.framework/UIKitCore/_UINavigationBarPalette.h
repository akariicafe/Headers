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

- (void)_clearAssistants;
- (void)_resetHeightConstraintConstant;
- (id)initWithContentView:(id)a0;
- (void)_setAttached:(BOOL)a0 didComplete:(BOOL)a1;
- (BOOL)isAttached;
- (void)_setAssistants;
- (void)_disableConstraints;
- (void)layoutSubviews;
- (void)_updateBackgroundView;
- (void)_setLeftConstraintConstant:(double)a0;
- (BOOL)_shouldUpdateBackground;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isAnimating:(BOOL)a1;
- (void)_setTopConstraintConstant:(double)a0;
- (void)_setupBackgroundViewIfNecessary;
- (BOOL)paletteIsHidden;
- (void)_configurePaletteConstraintsForBoundary;
- (void)_enableConstraints;
- (id)_attachedPinningTopBar;
- (void)_updateBackgroundConstraintsIfNecessary;
- (void)_configureConstraintsForBackground:(id)a0;
- (void)pointerInteraction:(id)a0 willEnterRegion:(id)a1 animator:(id)a2;
- (void)_resetConstraintConstants:(double)a0;
- (void)addSubview:(id)a0;
- (void)pointerInteraction:(id)a0 willExitRegion:(id)a1 animator:(id)a2;
- (void)_setSize:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (void)resetBackgroundConstraints;

@end
