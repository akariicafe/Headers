@class UIView, NSString, _UIPointerInteractionAssistant, _UIBarBackground, _UINavigationBarTransitionContext, _UINavigationBarContentView, _UINavigationControllerRefreshControlHost, _UINavigationBarModernPromptView, _UINavigationBarLargeTitleView, UILabel, UIBarButtonItem;

@interface _UINavigationBarVisualProviderModernIOS : _UINavigationBarVisualProvider <_UINavigationBarContentViewDelegate, _UINavigationItemChangeObserver, _UIBarAppearanceChangeObserver, _UINavigationControllerRefreshControlHostDelegate, _UIBasicAnimationFactory> {
    _UIBarBackground *_backgroundView;
    _UINavigationBarContentView *_contentView;
    UIView *_canvasView;
    _UINavigationBarLargeTitleView *_largeTitleView;
    _UINavigationBarModernPromptView *_promptView;
    _UIPointerInteractionAssistant *_assistant;
    UILabel *_weeTitleLabel;
    _UINavigationBarTransitionContext *_transitionContext;
    struct CGSize { double width; double height; } _previousBarSize;
    double _backgroundAlpha;
    double _titleAlpha;
    double _shadowAlpha;
    BOOL _hasIdiom;
    BOOL _runningPaletteBasedSearchPresentation;
    BOOL _useInlineBackgroundHeightWhenLarge;
    BOOL _backgroundTransparentWhenNotCollapsed;
    BOOL _providesExtraSpaceForExcessiveLineHeights;
    BOOL _isObservingDidEncounterFirstTitleWithExcessiveHeightChanged;
    BOOL _useModernAppearanceAPI;
    BOOL _forceScrollEdgeAppearance;
    long long _appearanceAPIVersion;
    UIBarButtonItem *_staticNavBarButtonItem;
    _UINavigationControllerRefreshControlHost *_refreshControlHost;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateBackgroundGroupName;
- (void)_shim_setDisableBlurTinting:(BOOL)a0;
- (BOOL)shouldFadeStaticNavBarButton;
- (void)navigationItemUpdatedBottomPalette:(id)a0 oldPalette:(id)a1;
- (BOOL)isAnimatingNavItemContentLayoutGuideForStaticButtonVisibilityChange;
- (void)navigationControllerRefreshControlHostDidUpdateLayout:(id)a0;
- (id)refreshControlHost;
- (void)navigationItemUpdatedCanvasView:(id)a0;
- (void)navigationItemUpdatedSearchController:(id)a0 oldSearchController:(id)a1;
- (void)changeLayout;
- (void)navigationItemUpdatedContentLayout:(id)a0 animated:(BOOL)a1;
- (BOOL)_shouldAnimateAdditivelyForView:(id)a0 withKeyPath:(id)a1;
- (void)_updateModernLayout:(id)a0 forNavigationItem:(id)a1 compact:(BOOL)a2;
- (id)_accessibility_controlToActivateForHUDGestureLiftAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)_basicAnimationForView:(id)a0 withKeyPath:(id)a1;
- (void)safeAreaInsetsDidChange;
- (void)setStaticNavBarButtonLingers:(BOOL)a0;
- (void)_shim_setCustomBackgroundView:(id)a0;
- (id)_staticNavBarButtonFakeBackMenu;
- (void)animateForSearchPresentation:(BOOL)a0;
- (BOOL)wantsLargeTitleDisplayed;
- (long long)statusBarStyle;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })largeSearchBaseMarginsRequiringNavMinimums:(BOOL)a0;
- (void)navigationBarContentViewDidChangeDesiredHeight:(id)a0;
- (void)_removeContentClippingView;
- (BOOL)useInlineBackgroundHeightWhenLarge;
- (void)barDidMoveToWindow;
- (BOOL)navigationItemIsTopItem:(id)a0;
- (BOOL)supportsRefreshControlHosting;
- (void)setShouldFadeStaticNavBarButton:(BOOL)a0;
- (void)_installContentClippingView:(id)a0;
- (void)prepare;
- (id)_shim_compatibilityBackgroundView;
- (void)navigationItemUpdatedTitleContent:(id)a0 animated:(BOOL)a1;
- (void)_shim_setShadowAlpha:(double)a0;
- (void)setForceScrollEdgeAppearance:(BOOL)a0;
- (void)setRefreshControlHost:(id)a0;
- (void)_updateBackground;
- (void)teardown;
- (void)traitCollectionDidChangeOnSubtree:(id)a0;
- (BOOL)forceScrollEdgeAppearance;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)_updateBackgroundLayout:(id)a0 forNavigationItem:(id)a1 compact:(BOOL)a2;
- (BOOL)staticNavBarButtonLingers;
- (BOOL)_stackWantsLargeTitleDisplayedForItem:(id)a0;
- (id)_backButtonMenu;
- (void)setAppearanceAPIVersion:(long long)a0;
- (BOOL)navigationItemIsBackItem:(id)a0;
- (BOOL)_shim_disableBlurTinting;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })resolvedSearchBarMargins;
- (void)navigationItemUpdatedLargeTitleDisplayMode:(id)a0;
- (void)provideViewsForContents:(id)a0 topItem:(id)a1 backItem:(id)a2;
- (void)barDidAddSubview:(id)a0;
- (void)beginAnimatingNavItemContentLayoutGuideForStaticButtonVisibilityChange;
- (void)dismissHostedSearchWithTransitionCoordinator:(id)a0;
- (void)popAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (BOOL)isContentViewHidden;
- (long long)currentContentSize;
- (void)_configureMarginsOnContentViewsAndPalette:(id)a0 withContentMargin:(double)a1;
- (void)prepareForPop;
- (void)_updateLegacyLayout:(id)a0 forNavigationItem:(id)a1;
- (void)navigationBarContentViewDidTriggerBackAction:(id)a0 fromBackButtonItem:(id)a1;
- (void)setStaticNavBarButtonItem:(id)a0;
- (void)navigationItemUpdatedScrollEdgeProgress:(id)a0;
- (void)setBackgroundAlpha:(double)a0;
- (void)pushAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (double)_shim_shadowAlpha;
- (BOOL)_stackWantsSearchDisplayedBelowContentViewForItem:(id)a0;
- (void)_updateContentForTopItem:(id)a0 backItem:(id)a1 animated:(BOOL)a2;
- (void)prepareForPush;
- (void).cxx_destruct;
- (id)restingHeights;
- (void)navigationItemUpdatedBackButtonContent:(id)a0 animated:(BOOL)a1;
- (void)stackDidChangeFrom:(id)a0;
- (id)staticNavBarButtonItem;
- (void)navigationItem:(id)a0 appearance:(id)a1 categoriesChanged:(long long)a2;
- (void)updateArchivedSubviews:(id)a0;
- (long long)appearanceAPIVersion;
- (void)endAnimatingNavItemContentLayoutGuideForStaticButtonVisibilityChange;
- (void)changeAppearance;
- (void)navigationItemUpdatedLeftBarButtonItems:(id)a0 animated:(BOOL)a1;
- (double)navItemContentLayoutGuideAnimationDistance;
- (BOOL)wantsExtendedContentView;
- (double)titleAlpha;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })resolvedLargeTitleMargins;
- (void)setUseInlineBackgroundHeightWhenLarge:(BOOL)a0;
- (struct { double x0; double x1; double x2; })layoutHeightsFittingWidth:(double)a0;
- (void)_presentOrDismissSearch:(int)a0 withTransitionCoordinator:(id)a1;
- (void)recordBarSize:(struct CGSize { double x0; double x1; })a0;
- (void)_refreshBackButtonMenu;
- (void)navigationItemUpdatedBackgroundAppearance:(id)a0;
- (void)setNeedsStaticNavBarButtonUpdate;
- (double)backgroundAlpha;
- (double)heightForRestoringFromCancelledTransition;
- (id)appearanceObserver;
- (BOOL)updateNavItemContentLayoutGuideAnimationConstraintConstant:(double)a0;
- (BOOL)_accessibility_shouldBeginHUDGestureAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)navigationItemUpdatedRightBarButtonItems:(id)a0 animated:(BOOL)a1;
- (id)traitCollectionForChild:(id)a0 baseTraitCollection:(id)a1;
- (void)presentHostedSearchWithTransitionCoordinator:(id)a0;
- (id)_accessibility_HUDItemForPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)topItemHasVariableHeight;
- (void)navigationBarInvalidatedResolvedLayoutMargins;
- (void)navigationItemUpdatedPromptContent:(id)a0;
- (void)setTitleAlpha:(double)a0;
- (void)navigationItemUpdatedLargeTitleContent:(id)a0;
- (void)appearance:(id)a0 categoriesChanged:(long long)a1;
- (void)_performAnimationWithTransitionCompletion:(id /* block */)a0 transition:(int)a1;
- (BOOL)allowLargeTitleView;
- (void)_invalidateIntrinsicContentSizeAndNotifySizeChanged;
- (double)_contentBackgroundExtension;
- (void)_updateTitleViewWithLargeTitle:(BOOL)a0;
- (void)_enforceLayoutOrdering;
- (void)_updateContentForTopItem:(id)a0 backItem:(id)a1;
- (void)_setupTransitionContextForTransition:(int)a0;
- (void)_setupTopNavigationItemAnimated:(BOOL)a0;
- (BOOL)_stackWantsExtendedContentViewForItem:(id)a0;
- (void)_beginOrEndObservingDidEncounterFirstTitleWithExcessiveHeightChangedIfNecessary;
- (void)_updateWithCompletion:(id /* block */)a0;
- (BOOL)_stackWantsBottomPaletteDisplayedForItem:(id)a0;
- (void)_computeProvidesExtraSpaceForExcessiveLineHeightsForTopItem:(id)a0;
- (void)layoutSubviews;
- (double)_effectiveBackIndicatorLeftMargin;
- (void)_upgradeAppearanceAPIForItemIfNecessary:(id)a0;
- (void)_endTransitionCompleted:(BOOL)a0;
- (void)_layoutInBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 wantsExtendedContentView:(BOOL)a1 wantsLargeTitle:(BOOL)a2;
- (id)_backgroundLayoutOfClass:(Class)a0 fromLayout:(id)a1;
- (BOOL)_isInInteractiveScroll;
- (void)_didEncounterFirstTitleWithExcessiveHeightChanged:(id)a0;
- (BOOL)useManualScrollEdgeAppearanceForItem:(id)a0;
- (BOOL)_isInnerNavigationBarOfNestedNavigationController;
- (void)_updatePromptViewAndActuallyHide:(BOOL)a0;
- (void)_ensureLayoutsConfiguredForEntry:(id)a0;
- (id)_defaultWeeTitleAttributes;
- (void)_setupAccessibilityLimitsForView:(id)a0;
- (void)_updateContentPriorities;
- (BOOL)_stackWantsLargeTitleDisplayedForItem:(id)a0 hideLargeTitleForActiveSearch:(BOOL)a1;
- (void)_updateCanvasView;
- (void)_postDidEncounterFirstTitleWithExcessiveHeightChanged;
- (void)traitCollectionDidChange:(id)a0;
- (void)_updateAugmentedTitleDataSources;
- (id)emptyLayout;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)_timingFunctionForAnimationInView:(id)a0 withKeyPath:(id)a1;
- (void)_popToItem:(id)a0;
- (void)_prepareLayouts;

@end
