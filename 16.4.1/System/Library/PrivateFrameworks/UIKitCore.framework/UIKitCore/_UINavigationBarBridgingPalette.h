@class UINavigationController, NSString, UIView;

@interface _UINavigationBarBridgingPalette : _UINavigationBarPalette <_UINavigationPalette> {
    UIView *_temporaryBackgroundView;
}

@property (retain, nonatomic, setter=_setBackgroundView:) UIView *_backgroundView;
@property (nonatomic, setter=_setPaletteOverridesPinningBar:) BOOL _paletteOverridesPinningBar;
@property (readonly, nonatomic) UINavigationController *navController;
@property (readonly, nonatomic) unsigned long long boundaryEdge;
@property (nonatomic, getter=isPinned) BOOL pinned;
@property (nonatomic) BOOL pinningBarShadowWasHidden;
@property (nonatomic) BOOL pinningBarShadowIsHidden;
@property (nonatomic) BOOL paletteShadowIsHidden;
@property (nonatomic, getter=isVisibleWhenPinningBarIsHidden) BOOL visibleWhenPinningBarIsHidden;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } preferredContentInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateBackgroundConstraintsIfNecessary;
- (void)_setTopConstraintConstant:(double)a0;
- (BOOL)isAttached;
- (void)_setupBackgroundViewIfNecessary;
- (void)_resetHeightConstraintConstant;
- (void)_setAttached:(BOOL)a0 didComplete:(BOOL)a1;
- (void)_disableConstraints;
- (BOOL)paletteIsHidden;
- (BOOL)_shouldUpdateBackground;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isAnimating:(BOOL)a1;
- (void)_setSize:(struct CGSize { double x0; double x1; })a0;
- (void)_setLeftConstraintConstant:(double)a0;
- (void)_configurePaletteConstraintsForBoundary;
- (void)_enableConstraints;
- (id)_attachedPinningTopBar;
- (void)_configureConstraintsForBackground:(id)a0;
- (void)resetBackgroundConstraints;
- (void)_resetConstraintConstants:(double)a0;
- (void)setSize:(struct CGSize { double x0; double x1; })a0;
- (void)_updateBackgroundView;
- (void).cxx_destruct;

@end
