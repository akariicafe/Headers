@class _UINavigationBarItemStack, _UINavigationControllerRefreshControlHost, NSString, UIBarButtonItem, UINavigationItem, UINavigationBar;
@protocol _UIBarAppearanceChangeObserver;

@interface _UINavigationBarVisualProvider : NSObject {
    UINavigationItem *_itemForMeasuring;
}

@property (readonly, nonatomic) UINavigationBar *navigationBar;
@property (retain, nonatomic) _UINavigationBarItemStack *stack;
@property (readonly, nonatomic) long long currentContentSize;
@property (retain, nonatomic) _UINavigationControllerRefreshControlHost *refreshControlHost;
@property (readonly, nonatomic) BOOL wantsLargeTitleDisplayed;
@property (nonatomic) BOOL useInlineBackgroundHeightWhenLarge;
@property (nonatomic) double backgroundAlpha;
@property (nonatomic) double titleAlpha;
@property (copy, nonatomic) NSString *backdropGroupName;
@property (nonatomic) long long appearanceAPIVersion;
@property (readonly, nonatomic) id<_UIBarAppearanceChangeObserver> appearanceObserver;
@property (nonatomic) BOOL forceScrollEdgeAppearance;
@property (readonly, nonatomic) BOOL scrollEdgeAppearanceHasChromelessBehavior;
@property (retain, nonatomic) UIBarButtonItem *staticNavBarButtonItem;
@property (readonly, nonatomic, getter=isContentViewHidden) BOOL contentViewHidden;
@property (nonatomic) BOOL shouldFadeStaticNavBarButton;
@property (nonatomic) BOOL staticNavBarButtonLingers;
@property (readonly, nonatomic, getter=isAnimatingNavItemContentLayoutGuideForStaticButtonVisibilityChange) BOOL animatingNavItemContentLayoutGuideForStaticButtonVisibilityChange;
@property (readonly, nonatomic) double navItemContentLayoutGuideAnimationDistance;

- (BOOL)updateNavItemContentLayoutGuideAnimationConstraintConstant:(double)a0;
- (void)intrinsicContentSizeInvalidatedForChildView:(id)a0;
- (void)traitCollectionDidChangeOnSubtree:(id)a0;
- (id)_shim_promptText;
- (long long)statusBarStyle;
- (BOOL)_shim_34415965;
- (void)_refreshBackButtonMenu;
- (void)teardown;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)_removeContentClippingView;
- (void)_shim_updateUserContentGuideForTopItem:(id)a0 backItem:(id)a1;
- (void)provideViewsForContents:(id)a0 topItem:(id)a1 backItem:(id)a2;
- (void)layoutSubviews;
- (void)updateTopNavigationItemAnimated:(BOOL)a0;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })resolvedLargeTitleMargins;
- (void)barDidAddSubview:(id)a0;
- (void)safeAreaInsetsDidChange;
- (void)animateForSearchPresentation:(BOOL)a0;
- (double)heightForRestoringFromCancelledTransition;
- (void)_shim_setPromptText:(id)a0 animated:(BOOL)a1;
- (void)_shim_touchesMoved:(id)a0 withEvent:(id)a1;
- (void)_shim_updateBackgroundViewIgnoringFlag;
- (void)_shim_updateBackIndicator;
- (void)recordBarSize:(struct CGSize { double x0; double x1; })a0;
- (id)_shim_displayViewsIncludingHiddenBackButtonViews:(BOOL)a0;
- (long long)_shim_backdropStyle;
- (void)invalidateIntrinsicContentSize;
- (id)restingHeights;
- (id)_accessibility_controlToActivateForHUDGestureLiftAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)_shim_compatibilityBackgroundView;
- (void)_installContentClippingView:(id)a0;
- (void)presentHostedSearchWithTransitionCoordinator:(id)a0;
- (void)presentSearchWithTransitionCoordinator:(id)a0;
- (void)barDidMoveToWindow;
- (void)_shim_popForCarplayPressAtFakePoint:(struct CGPoint { double x0; double x1; })a0;
- (double)_shim_shadowAlpha;
- (void)setBackButtonVisible:(BOOL)a0 animated:(BOOL)a1;
- (void)navigationBarInvalidatedResolvedLayoutMargins;
- (id)_shim_contentView;
- (struct { double x0; double x1; double x2; })layoutHeightsFittingWidth:(double)a0;
- (BOOL)topItemHasVariableHeight;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })resolvedSearchBarMargins;
- (id)initWithNavigationBar:(id)a0;
- (void)setNeedsStaticNavBarButtonUpdate;
- (void)_shim_touchesBegan:(id)a0 withEvent:(id)a1;
- (void)beginAnimatingNavItemContentLayoutGuideForStaticButtonVisibilityChange;
- (void)prepareForStackChange;
- (BOOL)_shim_disableBlurTinting;
- (void)pushAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)_shim_pressBackIndicator:(BOOL)a0 initialPress:(BOOL)a1;
- (BOOL)canHandleStatusBarTouchAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)_shim_customHitTest:(struct CGPoint { double x0; double x1; })a0 forView:(id)a1;
- (id)_shim_userContentGuide;
- (void)_shim_30244716;
- (BOOL)_accessibility_shouldBeginHUDGestureAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)_shim_backIndicatorView;
- (BOOL)gestureRecognizerShouldBegin:(id)a0 defaultAnswer:(id /* block */)a1;
- (double)_shim_backgroundHeight;
- (void)popAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)prepareForPush;
- (void)appendToDescription:(id)a0;
- (void)setupTopNavigationItem;
- (BOOL)_shim_throwConstraintExceptions;
- (void)_shim_touchesEnded:(id)a0 withEvent:(id)a1;
- (void)_shim_touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)barSizeChanged;
- (void)_shim_setUseContentView:(BOOL)a0;
- (id)_accessibility_HUDItemForPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)updateTopNavigationItemTitleView;
- (BOOL)shouldUseHeightRangeFittingWidth;
- (void)stackDidChangeFrom:(id)a0;
- (void)dismissHostedSearchWithTransitionCoordinator:(id)a0;
- (void)prepareForPop;
- (BOOL)supportsRefreshControlHosting;
- (id)_shim_layoutView;
- (void)prepare;
- (void)endAnimatingNavItemContentLayoutGuideForStaticButtonVisibilityChange;
- (BOOL)_shim_wantsCustomTouchHandlingForTouches:(id)a0;
- (void)_shim_setDisableBlurTinting:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)changeLayout;
- (id)description;
- (void)updateBackgroundGroupName;
- (void)_shim_setShadowAlpha:(double)a0;
- (void)changeAppearance;
- (id)traitCollectionForChild:(id)a0 baseTraitCollection:(id)a1;
- (void)setSemanticContentAttribute:(long long)a0;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)traitCollectionDidChange:(id)a0;
- (void)updateArchivedSubviews:(id)a0;
- (id)preferredFocusedView;
- (void)_shim_setCustomBackgroundView:(id)a0;

@end
