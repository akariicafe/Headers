@class UINavigationController, NSArray, NSString, _UIBarBackground, UIView, _UIBarBackgroundLayoutLegacy, UIViewController;

@interface _UINavigationControllerPalette : UIView <_UINavigationPalette> {
    _UIBarBackground *_backgroundView;
    _UIBarBackgroundLayoutLegacy *_backgroundViewLayout;
    double _backgroundUnderlapHeight;
    struct { unsigned char isAttached : 1; unsigned char attachmentIsChanging : 1; unsigned char restartPaletteTransitionIfNecessary : 1; unsigned char pinned : 1; unsigned char pinningBarShadowIsHidden : 1; unsigned char paletteShadowIsHidden : 1; unsigned char pinningBarShadowWasHidden : 1; } _paletteFlags;
}

@property (nonatomic) UIViewController *_unpinnedController;
@property (nonatomic, setter=_setPinningBar:) id _pinningBar;
@property (readonly, nonatomic, getter=_attachmentIsChanging) BOOL _attachmentIsChanging;
@property (nonatomic, setter=_setRestartPaletteTransitionIfNecessary:) BOOL _restartPaletteTransitionIfNecessary;
@property (retain, nonatomic, setter=_setConstraints:) NSArray *_constraints;
@property (nonatomic, setter=_setSize:) struct CGSize { double width; double height; } _size;
@property (retain, nonatomic, setter=_setBackgroundConstraints:) NSArray *_backgroundConstraints;
@property (nonatomic, getter=_isPalettePinningBarHidden, setter=_setPalettePinningBarHidden:) BOOL _palettePinningBarHidden;
@property (retain, nonatomic, setter=_setBackgroundView:) UIView *_backgroundView;
@property (nonatomic, setter=_setPaletteOverridesPinningBar:) BOOL _paletteOverridesPinningBar;
@property (readonly, nonatomic) UINavigationController *navController;
@property (readonly, nonatomic) unsigned long long boundaryEdge;
@property (nonatomic, getter=isPinned) BOOL pinned;
@property (nonatomic) BOOL pinningBarShadowWasHidden;
@property (nonatomic) BOOL pinningBarShadowIsHidden;
@property (nonatomic) BOOL paletteShadowIsHidden;
@property (nonatomic, getter=isVisibleWhenPinningBarIsHidden) BOOL visibleWhenPinningBarIsHidden;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } preferredContentInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_resetHeightConstraintConstant;
- (void)_setAttached:(BOOL)a0 didComplete:(BOOL)a1;
- (BOOL)isAttached;
- (void)_disableConstraints;
- (void)_updateBackgroundView;
- (void)_setLeftConstraintConstant:(double)a0;
- (BOOL)_shouldUpdateBackground;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isAnimating:(BOOL)a1;
- (void)_setTopConstraintConstant:(double)a0;
- (void)_setupBackgroundViewIfNecessary;
- (BOOL)paletteIsHidden;
- (void)didMoveToSuperview;
- (void)_configurePaletteConstraintsForBoundary;
- (void)_enableConstraints;
- (id)_attachedPinningTopBar;
- (void)_setVisualAltitude:(double)a0;
- (void)_updateBackgroundConstraintsIfNecessary;
- (void)_configureConstraintsForBackground:(id)a0;
- (void)_setVisualAltitudeBias:(struct CGSize { double x0; double x1; })a0;
- (void)_resetConstraintConstants:(double)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_propagateBackgroundToContents;
- (void)_setAttachmentIsChanging:(BOOL)a0;
- (id)_initWithNavigationController:(id)a0 forEdge:(unsigned long long)a1;
- (BOOL)_supportsSpecialSearchBarTransitions;
- (void)_updateLayoutForCurrentConfiguration;
- (void)dealloc;
- (id)_backgroundViewLayout;

@end
