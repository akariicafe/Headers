@class _UIEditMenuContainerView, UIMenu, _UIEditMenuPresentationLayout, _UIEditMenuPresentationAnimator, _UIEditMenuListView, UIEditMenuConfiguration, UIView;
@protocol _UIEditMenuPresentationDelegate;

@interface _UIEditMenuPresentation : NSObject <_UIEditMenuListViewDelegate>

@property (readonly, nonatomic) _UIEditMenuContainerView *containerView;
@property (readonly, nonatomic) _UIEditMenuContainerView *touchPassthroughView;
@property (readonly, nonatomic) _UIEditMenuListView *currentListView;
@property (retain, nonatomic) UIEditMenuConfiguration *dismissingConfiguration;
@property (retain, nonatomic) _UIEditMenuPresentationLayout *currentMenuLayout;
@property (nonatomic) unsigned long long currentState;
@property (retain, nonatomic) _UIEditMenuPresentationAnimator *presentAnimator;
@property (retain, nonatomic) _UIEditMenuPresentationAnimator *dismissAnimator;
@property (readonly, weak, nonatomic) UIView *sourceView;
@property (readonly, nonatomic) UIMenu *displayedMenu;
@property (readonly, nonatomic) UIEditMenuConfiguration *activeConfiguration;
@property (weak, nonatomic) id<_UIEditMenuPresentationDelegate> delegate;

- (BOOL)_enforcesMenuControllerLifecycle;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })menuFrameInCoordinateSpace:(id)a0;
- (id)initWithSourceView:(id)a0;
- (void).cxx_destruct;
- (void)_cleanupContainerView;
- (void)_displayMenu:(id)a0 reason:(long long)a1;
- (long long)_listViewAxisForTraitCollection:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_preferredContentInsetsForContainerView;
- (void)_prepareMenuPresentationWithConfiguration:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_queryMenuSourceRectForConfiguration:(id)a0 isValid:(out BOOL *)a1;
- (void)_reloadMenuLayoutWithSourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 animated:(BOOL)a1;
- (id)_resolvedLayoutForMenuWithConfiguration:(id)a0 sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 axis:(long long)a2;
- (void)_stateMachineSendEvent:(unsigned long long)a0;
- (void)_updateMenuPositionAnimated:(BOOL)a0 forced:(BOOL)a1;
- (void)_updateUserInterfaceStyle;
- (void)animateFadeWithDelay:(double)a0 animations:(id /* block */)a1 completion:(id /* block */)a2;
- (void)animateScaleDismissalWithAnimations:(id /* block */)a0 completion:(id /* block */)a1;
- (void)animateScalePresentWithDelay:(double)a0 animations:(id /* block */)a1 completion:(id /* block */)a2;
- (void)contentSizeCategoryDidChangeInEditMenuListView:(id)a0;
- (void)displayMenu:(id)a0 configuration:(id)a1;
- (void)editMenuListView:(id)a0 didSelectMenuElement:(id)a1;
- (void)forceEndDismissalIfNeeded;
- (void)forceEndPresentIfNeeded;
- (void)hideMenuWithReason:(long long)a0;
- (void)replaceVisibleMenuWithMenu:(id)a0 reason:(long long)a1;
- (void)sourceViewDidUpdateFromTraitCollection:(id)a0;
- (void)updateMenuPositionAnimated:(BOOL)a0;

@end
